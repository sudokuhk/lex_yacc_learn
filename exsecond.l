%{
#include "stdio.h"
    int linenum;
%}
%%
title   showtitle();
[\n]    linenum++;
[0-9]+  printf("Int :%s\n", yytext);
[0-9]*\.[0-9]+  printf("Float:%s\n", yytext);
[a-zA-Z][a-zA-Z0-9]* printf("Var:%s\n", yytext);
[\+\-\*\/\%] printf("OP:%s\n", yytext);
. printf("Unknown:%c\n", yytext[0]);
%%

showtitle()
{
    printf("Lex Example\n");
}
int main()
{
    linenum = 0;
    yylex();
    printf("\n Line Count:%d\n", linenum);
    return 0;
}
int yywrap()
{
    return 1;
}
