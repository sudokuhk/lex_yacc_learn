%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int screen_done = 1;
char * act_str;
char * cmd_str;
char * item_str;

%}

%union {
    char * string;
    int cmd;
}

%token  <string> QSTRING ID COMMENT
%token <cmd> SCREEN1 TITLE ITEM COMMAND ACTION EXECUTE EMPTY
%token <cmd> MENU QUIT IGNORE ATTRIBUTE VISIBLE INVISIBLE END

%type <cmd> action line attribute command
%type <string> id qstring

%start screens

%%

screens : screen
    | screens screen
    ;

screen : screen_name screen_contents screen_terminator
    | screen_name screen_terminator
    ;

screen_name : SCREEN1 id { start_screen($2);     }
    | SCREEN1            { start_screen(strdup("default"));  }
    ;

screen_terminator : END id { end_screen($2);    }
    | END { end_screen(strdup("default"));  }
    ;
    
screen_contents : titles lines
    ;

titles : /*empty*/
    | titles title
    ;

title : TITLE qstring { add_title($2);  }
    ;

lines : line
    | lines line
    ;

line : ITEM qstring command ACTION action attribute 
    {
        item_str = $2;
        add_line($5, $6);
        $$ = ITEM;
    }
    ;

command : /* empty */ {cmd_str = strdup(""); }
    | COMMAND id { cmd_str = $2; }
    ;

action : EXECUTE qstring
        {
            act_str = $2;
            $$ = EXECUTE;
        }
    | MENU id
        {
            /* make "menu_" $2 */
            act_str = malloc(strlen($2) + 6);
            strcpy(act_str, "menu_");
            strcat(act_str, $2);
            free($2);
            $$ = MENU;
        }
    | QUIT { $$ = QUIT; }
    | IGNORE { $$ = IGNORE; }
    ;

attribute : /* empty */ { $$ = VISIBLE; }
    | ATTRIBUTE VISIBLE { $$ = VISIBLE; }
    | ATTRIBUTE INVISIBLE { $$ = INVISIBLE; }
    ;

id : ID {$$ = $1; }
    | QSTRING 
        {
            warning("String literal inappropriate", (char *)0);
            $$ = $1;
        }
    ;

qstring : QSTRING { $$ = $1; }
    | ID { warning("Non-string literal inappropriate", (char *) 0); 
            $$ = $1;
        }
    ;

%%

char * progname = "mgl";
int lineno = 1;

#define DEFAULT_OUTFILE "screen.out"

char * usage = "%s: usage [infile] [outfile] \n";

int main(int argc, char * argv[])
{
    char * outfile;
    char * infile;
    extern FILE * yyin, * yyout;

    progname = argv[0];

    if (argc > 3) {
        fprintf(stderr, usage, progname);
        exit(1);
    }

    if (argc > 1) {
        infile = argv[1];
        yyin = fopen(infile, "r");
        if (yyin == NULL) {
            fprintf(stderr, "%s: cannot open %s\n", progname, infile);
            exit(1);
        }
    }

    if (argc > 2) {
        outfile = argv[2];
    } else {
        outfile = DEFAULT_OUTFILE;
    }

    yyout = fopen(outfile, "w");
    if (yyout == NULL) {
        fprintf(stderr, "%s: cannot open %s\n", progname, outfile);
        exit(1);
    }

    yyparse();
    
    end_file();

    if (!screen_done) {
        warning("Premature EOF", (char *)0);
        unlink(outfile);
        exit(1);
    }

    exit(0);
}

void warning(char * s, char *t)
{
    fprintf(stderr, "%s: %s", progname, s);
    if (t) {
        fprintf(stderr, " %s", t);
    }
    fprintf(stderr, " line %d\n", lineno);
}
