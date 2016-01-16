%{
#include "ch3hdr.h"
#include <string.h>
#include <math.h>
%}

%union {
    double dval;
    struct symtab * symp;
}

%token <symp> NAME;
%token <dval> NUMBER;
%token SQRT LOG EXP;

%left '-' '+'
%left '*' '/'

%nonassoc UMINUS

%type <dval> expressioin   

%%
statement_list : statement '\n'
    | statement_list statement '\n'
    ;

statement : NAME '=' expressioin { $1->value = $3; }
    | expressioin { printf("=%g\n", $1); }
    ;

expressioin : expressioin '+' expressioin { $$ = $1 + $3; }
    | expressioin '-' expressioin { $$ = $1 - $3; }
    | expressioin '*' expressioin { $$ = $1 * $3; }
    | expressioin '/' expressioin {
            if ($3 == 0) {
                yyerror("divide by zero!\n");
            } else {
                $$ = $1 / $3;
            }
         }
    | '-' expressioin %prec UMINUS { $$ = -$2; }
    | '(' expressioin ')' {$$ = $2; }
    | NUMBER {$$ = $1; }
    | NAME { $$ = $1->value; }
    | SQRT '(' expressioin ')'  { $$ = sqrt($3); }
    | LOG '(' expressioin ')' { $$ = log($3); }
    | EXP '(' expressioin ')' { $$ = exp($3); }
    ;
%%
void yyerror(char * s)
{
    printf("!!! Warning:%s\n", s);
}

void main()
{
    while (1) {
        yyparse();
    }
}
