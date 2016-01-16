%{
#include "y.tab.h"
#include <string.h>

extern int lineno;
%}

ws          [ \t]+
comment     #.*
qstring     \"[^\"\n]*[\"\n]
nl          \n
id          [a-zA-Z][a-zA-Z0-9]*

%%
{ws}        ;
{comment}   ;
{qstring}   {
        yylval.string   = strdup(yytext + 1);
        if (yylval.string[yyleng - 2] != '"') {
            warning("Unterminated character string", (char *)0);
        } else {
            yylval.string[yyleng - 2] = '\0';
            return QSTRING;
        }
    }
screen      {   return SCREEN1;  }
title       {   return TITLE;   }
item        {   return ITEM;    }
action      {   return ACTION;  }
execute     {   return EXECUTE; }
command     {   return COMMAND; }
ignore      {   return IGNORE;  }
menu        {   return MENU;    }
quit        {   return QUIT;    }
attribute   {   return ATTRIBUTE;}
visible     {   return VISIBLE; }
invisible   {   return INVISIBLE;   }
end         {   return END;     }
{nl}        {   lineno ++;      }
{id}        {   yylval.string   = strdup(yytext);   return ID;}
.           {   return yytext[0]; }

%%
