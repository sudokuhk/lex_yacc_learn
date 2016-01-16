%{
#include <stdio.h>
%}

%token NOUN PRONOUN VERB
%token ADVERB ADJECTIVE PREPOSITION
%token CONJUNCTION

%%
sentence : simple_sentence  { printf("Parsed a simple sentence.\n"); }
    | compound_sentence { printf("Parsed a compound sentence.\n"); }
    ;

simple_sentence : subject verb object
    | subject verb object prep_phrase
    ;

compound_sentence : simple_sentence CONJUNCTION simple_sentence
    | compound_sentence CONJUNCTION simple_sentence
    ;

subject : NOUN 
    | PRONOUN
    | ADJECTIVE subject
    ;

verb : VERB 
    | ADVERB VERB
    | verb VERB
    ;

object : NOUN
    | ADJECTIVE object
    ;

prep_phrase : PREPOSITION NOUN
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
