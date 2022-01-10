%{
#define YYSTYPE void*
#define ToInt(k) ((int*)(k))
#define ToStr(k) ((string*)(k))

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<stack>
using namespace std;

void yyerror(const char *);
void yyerror(const string&);
extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int yylineno;

ostream &out = cout;       // 用于输出

int STK_OP(int n){
    return (n/4 + 1)*16;
}
int stk_func;

//---------------函数打印相关-------------------------------
vector<string> Func_Other;
string other_out;     // 这个string 用来记录其他的语句

void Out_Print(){
    for(int i = 0;i < Func_Other.size();i++){
        out << Func_Other[i] << endl;
    }
    Func_Other.clear();
}

%}
%token ADD SUB MUL DIV MOD
%token ASSIGN EQ NEQ LE LEQ GE GEQ NOT AND OR
%token NUM IDENT MALLOC
%token LBRAC RBRAC
%token IF GOTO LABEL PARAM CALL RETURN COLON
%token FUNC END REG STORE LOAD LOADADDR


%%

Program:
    ProgramUnit
    | Program ProgramUnit
;

ProgramUnit:
    GlobalVarDecl
    {
        Out_Print();
    }
    | FunctionDef
    {
        Out_Print();
    }
;

GlobalVarDecl:
    IDENT ASSIGN NUM
    {
        other_out = " .global " + (*ToStr($1));
        Func_Other.push_back(other_out);
        other_out = " .section .sdata";
        Func_Other.push_back(other_out);
        other_out = " .align 2";
        Func_Other.push_back(other_out);
        other_out = " .type " + (*ToStr($1)) + ", @object";
        Func_Other.push_back(other_out);
        other_out = " .size " + (*ToStr($1)) + ", 4";
        Func_Other.push_back(other_out);
        other_out = (*ToStr($1)) + ":";
        Func_Other.push_back(other_out);
        other_out = " .word " + to_string((*(ToInt($3))));
        Func_Other.push_back(other_out);
    }
    | IDENT ASSIGN MALLOC NUM
    {
        other_out = " .comm " + (*ToStr($1)) + ", " + to_string((*(ToInt($4)))) + ", 4";
        Func_Other.push_back(other_out);
    }
;

FunctionDef:
    FunctionHeader Expressions FunctionEnd
;

FunctionHeader:
    FUNC LBRAC NUM RBRAC LBRAC NUM RBRAC
    {
        string* str_func = new string;
        *str_func = (ToStr($1))->substr(2);
        other_out = " .text ";
        Func_Other.push_back(other_out);
        other_out = " .align 2";
        Func_Other.push_back(other_out);
        other_out = " .global " + (*str_func);
        Func_Other.push_back(other_out);
        other_out = " .type " + (*str_func) + ", @function";
        Func_Other.push_back(other_out);
        other_out = "main:";
        Func_Other.push_back(other_out);

        stk_func = STK_OP(*(ToInt($6)));
        other_out = " addi sp, sp, -" + to_string(stk_func);
        Func_Other.push_back(other_out);
        other_out = " sw ra, " + to_string(stk_func - 4) + "(sp)";
        Func_Other.push_back(other_out);
    }
;

FunctionEnd:
    END FUNC
    {
        string* str_func = new string;
        *str_func = (ToStr($2))->substr(2);
        other_out = " .size " + (*str_func) + " .-" + (*str_func);
        Func_Other.push_back(other_out);
    }
;

Expressions:
    Expression
    | Expressions Expression
;

Expression:
    REG ASSIGN NUM
    {
        other_out = " li " + (*(ToStr($1))) + ", " + to_string(*ToInt($3));
        Func_Other.push_back(other_out);
    }
    | RETURN
    {
        other_out = " lw ra, " + to_string(stk_func - 4) + "(sp)";
        Func_Other.push_back(other_out);
        other_out = " addi sp, sp, " + to_string(stk_func);
        Func_Other.push_back(other_out);
        other_out = " ret";
        Func_Other.push_back(other_out);
        
    }
    | REG ASSIGN REG BinOp REG
    {
        string* str_op = new string((*ToStr($4)));
        if((*str_op) == "<="){
            other_out = " sgt ";
            other_out += ((*ToStr($1)) + ", " + (*ToStr($3)) + ", " + (*ToStr($5)));
            Func_Other.push_back(other_out);
            other_out = " seqz " + (*ToStr($1)) + ", " + (*ToStr($1));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == ">="){
            other_out = " slt ";
            other_out += ((*ToStr($1)) + ", " + (*ToStr($3)) + ", " + (*ToStr($5)));
            Func_Other.push_back(other_out);
            other_out = " seqz " + (*ToStr($1)) + ", " + (*ToStr($1));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "&&"){
            other_out = " snez ";
            other_out += ((*ToStr($1)) + ", " + (*ToStr($3)));
            Func_Other.push_back(other_out);
            other_out = " snez s0, " + (*ToStr($5));
            Func_Other.push_back(other_out);
            other_out = " and " + (*ToStr($1)) + ", " + (*ToStr($1)) + ", s0";
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "||"){
            other_out = " or ";
            other_out += ((*ToStr($1)) + ", " + (*ToStr($3)) + ", " + (*ToStr($5)));
            Func_Other.push_back(other_out);
            other_out = " snez " + (*ToStr($1)) + ", " + (*ToStr($1));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "!="){
            other_out = " xor ";
            other_out += ((*ToStr($1)) + ", " + (*ToStr($3)) + ", " + (*ToStr($5)));
            Func_Other.push_back(other_out);
            other_out = " snez " + (*ToStr($1)) + ", " + (*ToStr($1));
            Func_Other.push_back(other_out);
        }
        else if((*str_op) == "=="){
            other_out = " xor ";
            other_out += ((*ToStr($1)) + ", " + (*ToStr($3)) + ", " + (*ToStr($5)));
            Func_Other.push_back(other_out);
            other_out = " seqz " + (*ToStr($1)) + ", " + (*ToStr($1));
            Func_Other.push_back(other_out);
        }
        else{
            other_out = " " + ((*ToStr($4)) + " " + (*ToStr($1)) + ", " + (*ToStr($3)) + ", " + (*ToStr($5)));
            Func_Other.push_back(other_out);
        }
        
    }
    | REG ASSIGN REG BinOp NUM
    {
        other_out = " li s0, " + to_string(*(ToInt(5)));
        Func_Other.push_back(other_out);
        other_out = " " + (*ToStr($4)) + " " + (*ToStr($1)) + ", " + (*ToStr($3)) + ", s0";
        Func_Other.push_back(other_out);    // 有问题，直接 op reg1, reg2, s0吗

    }
    | REG ASSIGN OP REG
    {
        string* str_op = new string((*ToStr($3)));
        if((*str_op) == "add"){
            other_out = " mv " + (*ToStr($1)) + ", " + (*ToStr($4));
            Func_Other.push_back(other_out);  
        }
        else if((*str_op) == "sub"){
            other_out = " neg " + (*ToStr($1)) + ", " + (*ToStr($4));
            Func_Other.push_back(other_out);  
        }
        else if((*str_op) == "!"){
            other_out = " seqz " + (*ToStr($1)) + ", " + (*ToStr($4));
            Func_Other.push_back(other_out);  
        }
    }
    | REG ASSIGN REG
    {
        other_out = " mv " + (*ToStr($1)) + ", " + (*ToStr($3));
        Func_Other.push_back(other_out);  
    }
    | REG LBRAC NUM RBRAC ASSIGN REG
    {     // reg1[int12] = reg2
        int ass_num = (*(ToInt($3))) ;     ///得到int12
        if(ass_num > 2047 || ass_num < -2048){       
            other_out = " li s0 " + to_string(ass_num);
            Func_Other.push_back(other_out);  
            other_out = " add s0, " + (*ToStr($1)) + ", s0";
            Func_Other.push_back(other_out);  
            other_out = " sw " + (*ToStr($6)) + ", 0(s0)";
            Func_Other.push_back(other_out);  
        }
        else{
            other_out = " sw " + (*ToStr($6)) + ", " + to_string(ass_num) + "(" + (*ToStr($1)) + ")";
            Func_Other.push_back(other_out);
        }
    }
    | REG ASSIGN REG LBRAC NUM RBRAC
    {// reg1 = reg2[int12]
        int ass_num = (*(ToInt($5))) ;     ///得到int12
        if(ass_num > 2047 || ass_num < -2048){       
            other_out = " li s0 " + to_string(ass_num);
            Func_Other.push_back(other_out);  
            other_out = " add s0, " + (*ToStr($3)) + ", s0";
            Func_Other.push_back(other_out);  
            other_out = " lw " + (*ToStr($1)) + ", 0(s0)";
            Func_Other.push_back(other_out);  
        }
        else{
            other_out = " lw " + (*ToStr($1)) + ", " + to_string(ass_num) + "(" + (*ToStr($3)) + ")";
            Func_Other.push_back(other_out);
        }
    }
    | IF REG LOGICOP REG GOTO LABEL
    {
        string* str_op = new string((*ToStr($3)));
        if((*str_op) == "slt"){      //表示 <
            other_out = " blt ";
        }
        else if((*str_op) == "sgt"){
            other_out = " bgt ";
        }
        else if((*str_op) == "<="){
            other_out = " ble ";
        }
        else if((*str_op) == ">="){
            other_out = " bge ";
        }
        else if((*str_op) == "!="){
            other_out = " bne ";
        }
        else if((*str_op) == "=="){
            other_out = " beq ";
        }
        other_out += ((*ToStr($2)) + ", " + (*ToStr($4)) + ", ." + (*ToStr($6)));
        Func_Other.push_back(other_out);
    }
    | GOTO LABEL
    | LABEL COLON
    | CALL FUNC
    | STORE REG NUM
    | LOAD NUM REG
    | LOAD IDENT REG
    | LOADADDR NUM REG
    | LOADADDR IDENT REG
;

BinOp:
    OP
    | LOGICOP
;

OP:
    NOT
    | ADD
    | SUB
    | MUL
    | DIV
    | MOD
;

LOGICOP:
    LE
    | LEQ
    | GE
    | GEQ
    | EQ
    | NEQ
;


%%

void yyerror(const char *s) {
    cout << "Line " << yylineno << ": " << s << endl;
    exit(1);
}

void yyerror(const string &s) {
    yyerror(s.c_str());
}

int main(int argc, char **argv) {
    if (argc >= 4)
        if ((yyin = fopen(argv[3], "r")) == NULL)
            yyerror("Cannot open input file.");
    
    if (argc >= 6)
        if (freopen(argv[5], "w", stdout) == NULL)
            yyerror("Cannot open output file.");

    yyparse();

    return 0;
}