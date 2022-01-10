%{
#define YYSTYPE void*
#include <iostream>
#include <string>
#include <cstring>
#include "xcw_parser.tab.h"
using namespace std;
%}
%option yylineno

digit [0-9]
letter_ [A-Za-z_]
ident {letter_}({letter_}|{digit})*
fname f_{ident}
label l{digit}+

%%
[\040\t]    {}
[\n\r]  {}
if      { return IF;}
return  { return RETURN;}
goto    { return GOTO;}
call    { return CALL;}
param   { return PARAM;}
end     { return END;}
malloc  { return MALLOC;}
store   { return STORE;}
load    { return LOAD;}
loadaddr   { return LOADADDR;}

l[0-9]+  {
    yylval = new string(yytext);
    return LABEL;
}
v[0-9]+  {
    yylval = new string(yytext);
    return IDENT;
}
[astx][0-9]+   {
    yylval = new string(yytext);
    return REG;
}
f_[a-zA-Z_][a-zA-Z0-9_]* {
    yylval = new string(yytext);
    return FUNC;
}
[0-9]+ {
    yylval = new int(strtol(yytext, nullptr, 10));
    return NUM;
}
"-"[0-9]+ {
    yylval = new int(strtol(yytext, nullptr, 10));
    return NUM;
}
":"     {return COLON;}
"+"     {yylval = new string("add");return ADD;}
"-"     {yylval = new string("sub");return SUB;}
"*"     { yylval = new string("mul");return MUL;}
"/"     { yylval = new string("div");return DIV;}
"<"     { yylval = new string("slt");return LE;}
"<="    { yylval = new string("<=");return LEQ;}
">"     { yylval = new string("sgt");return GE;}
">="    { yylval = new string(">=");return GEQ;}
"=="    { yylval = new string("==");return EQ;}
"!="    { yylval = new string("!=");return NEQ;}
"="     { yylval = new string("=");return ASSIGN;}
"["     {return LBRAC;}
"]"     {return RBRAC;}
"&&"    { yylval = new string("&&");return AND;}
"||"    { yylval = new string("||");return OR;}
"!"     { yylval = new string("!"); return NOT;}
"%"     { yylval = new string("rem");return MOD;}

"//".*$ {/* Single line comment */}
%%

int yywrap() {
    return 1;
}