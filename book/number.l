%{
/* */
// -?(([0-9]+)|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?) { printf("number, %s\n", yytext); }
%}
integer [0-9]+
float [0-9]*\.[0-9]+
power [eE][-+]?[0-9]
number -?{interger}|{float}{power}
%%
[\n\t ] ;
-?(([0-9]+)|([0-9]*\.[0-9]+))([eE][-+]?[0-9]+)? { printf("number, %s\n", yytext); }
. ECHO;
%%
main()
{
    yylex();
}

int yywrap()
{
    return 1;
}
