%{
#include <stdio.h>

unsigned int charCount = 0;
unsigned int wordCount = 0;
unsigned int lineCount = 0;
%}

word [^ \t\n]+
eol \n

%%
{word} {wordCount ++; charCount += yyleng; }
{eol} {charCount ++; lineCount ++; }
. { charCount ++; }
%%
int main(int argc, char * argv[])
{
    FILE * file = NULL;
    if (argc > 1) {
        file = fopen(argv[1], "r");
        if (!file) {
            fprintf(stderr, "Could not open %s\n", argv[1]);
            exit(1);
        }
        yyin = file;
    }
    yylex();
    printf("charCount:%d, word:%d, line:%d\n", charCount, wordCount, lineCount);

    if (file) {
        yyin = stdin;
        fclose(file);
    }
    return 0;
}

int yywrap()
{
return 1;
}
