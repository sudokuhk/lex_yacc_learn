/*************************************************************************
    > File Name: lexi.c
    > Author: sudoku.huang
    > Mail: sudoku.huang@gmail.com 
    > Created Time: 2016-01-14 19:17:26
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

char * progname;

enum {
    NUMBER = 400,
    COMMENT,
    TEXT,
    COMMAND,
};

int lexer();

int main(int argc, char * argv[])
{
    int val;
    while (val = lexer()) {
        printf("value is %d\n", val);
    }
    return 0;
}

int lexer()
{
    int c;
    while ((c = getchar()) == ' ' || c == '\t');

    if (c == EOF)
        return 0;

    if (c == '.' || isdigit(c)) {
        while ((c = getchar()) != EOF && isdigit(c));
        
        if (c == '.') {
            while ((c = getchar()) != EOF && isdigit(c));
        }

        ungetc(c, stdin);
        return NUMBER;
    }
    return c;
}
