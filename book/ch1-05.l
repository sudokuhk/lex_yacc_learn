%{
#include "y.tab.h"
#define    LOOKUP 0
int state;
%}
%%
\.\n      { state = LOOKUP;return 0;}
^verb   { state = VERB;     }
^adj    { state = ADJECTIVE;  }
^adv    { state = ADVERB;      }
^noun   { state = NOUN;     }
^prep   { state = PREPOSITION;     }
^pron   { state = PRONOUN;     }
^conj   { state = CONJUNCTION;     }

[a-zA-Z]+   {
    //printf("token:%s\n", yytext);
    if (state != LOOKUP) {
        add_word(state, yytext);
    } else {
        switch (lookup_word(yytext)) {
            case VERB: return VERB;
            case ADJECTIVE: return ADJECTIVE;
            case ADVERB: return ADVERB; 
            case NOUN: return NOUN; 
            case PREPOSITION: return PREPOSITION;
            case PRONOUN: return PRONOUN;
            case CONJUNCTION: return CONJUNCTION;
            default: printf("%s: don't recognize\n", yytext); break;
        }
    }
}
%%

/*
main()
{
    yylex();
}
*/

struct word {
    char * word_name;
    int word_type;
    struct word * next;   
};

struct word * word_list = NULL;
extern void * malloc();

int add_word(int type, char * word)
{
    struct word * wp;
    if (lookup_word(word) != LOOKUP) {
        printf("!!! warning: word %s already defined!\n", word);
        return 0;
    }
    wp = (struct word *)malloc(sizeof(struct word));
    wp->next = word_list;
    wp->word_name = (char *)malloc(strlen(word) + 1);
    strcpy(wp->word_name, word);
    wp->word_type = type;
    word_list = wp;
    return 1;
}

int lookup_word(char * word)
{
    struct word * wp = word_list;
    //printf("lookup_word:%s\n", word);
    while (wp != NULL) {
        if (strcmp(wp->word_name, word) == 0) {
            return wp->word_type;
        }
        wp = wp->next;
    } 
    return LOOKUP;
}

int yywrap()
{
    return 1;
}
