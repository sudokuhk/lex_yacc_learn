%{
double vbltable[26];
%}

%union {
    double dval;
    int vblno;
}

%token <vblno> NAME;
%token <dval> NUMBER;

%left '-' '+'
%left '*' '/'

%nonassoc UMINUS

%type <dval> expressioin   

%%
statement_list : statement '\n'
    | statement_list statement '\n'
    ;

statement : NAME '=' expressioin { vbltable[$1] = $3; }
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
    | NAME { $$ = vbltable[$1]; }
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
