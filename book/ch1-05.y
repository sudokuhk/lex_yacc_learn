%{
#include <stdio.h>
%}

%token NOUN PRONOUN VERB
%token ADVERB ADJECTIVE PREPOSITION
%token CONJUNCTION

%%
sentence : subject VERB object {
    printf("Sentence is valid.\n");
    }   
    ;

subject : NOUN | PRONOUN
    ;

object : NOUN
    ;
%%

extern FILE * yyin;

main()
{
    do {
        printf("yacc\n");
        yyparse();
    } while (!feof(yyin));
}

void
yyerror(s)
char * s;
{
    fprintf(stderr, "%s\n", s);
}
