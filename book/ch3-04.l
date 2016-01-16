%{
#include "y.tab.h"
#include <math.h>
#include "ch3hdr.h"

union yylval;
%}

%%
sqrt { return SQRT; }
log { return LOG; }
exp { return EXP; }
((([0-9]+|[0-9]*\.[0-9]+))([eE][-+]?[0-9]+)?) {
        yylval.dval = atof(yytext); return NUMBER;
    }

[ \t] ;
[A-Za-z][A-Za-z0-9]* {
    yylval.symp = symlook(yytext);
    return NAME;
    }
"$" { return 0;}
\n |
. { return yytext[0]; }

%%

int yywrap()
{
return 1;
}
