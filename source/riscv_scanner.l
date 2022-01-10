%{
#define YYSTYPE void*
#include <iostream>
#include <string>
#include <cstring>
#include "xcw_parser.tab.h"
using namespace std;
int charNum = 1;
%}
%option yylineno

digit [0-9]
letter_ [A-Za-z_]
ident {letter_}({letter_}|{digit})*
fname f_{ident}
label l{digit}+

%%
[\040\t]    {charNum += yyleng;}
[\n\r]  {charNum = 1;}
if      {charNum += yyleng; return IF;}
return  {charNum += yyleng; return RETURN;}
goto    {charNum += yyleng; return GOTO;}
call    {charNum += yyleng; return CALL;}
param   {charNum += yyleng; return PARAM;}
end     {charNum += yyleng; return END;}
malloc  {charNum += yyleng; return MALLOC;}
store   {charNum += yyleng; return STORE;}
load    {charNum += yyleng; return LOAD;}
loadaddr   {charNum += yyleng; return LOADADDR;}
{label}   {
    charNum += yyleng;
    yylval = new string(yytext);
    return LABEL;
}
v{digit}+   {
    charNum += yyleng;
    yylval = new string(yytext);
    return IDENT;
}
[astx]{digit}+   {
    charNum += yyleng;
    yylval = new string(yytext);
    return REG;
}
{fname}     {
    charNum += yyleng;
    yylval = new string(yytext);
    return FUNC;
}
{digit}+    {
    charNum += yyleng;
    yylval = new int(strtol(yytext, nullptr, 10));
    return NUM;
}
"-"{digit}+ {
    charNum += yyleng;
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