/*************************************************************************
    > File Name: ch3.c
    > Author: sudoku.huang
    > Mail: sudoku.huang@gmail.com 
    > Created Time: 2016-01-15 11:24:00
 ************************************************************************/

#include <stdio.h>

#include "ch3hdr.h"

void yyerror(char *);

struct symtab * symlook(char * s)
{
    char * p;
    struct symtab * sp;
    
    for (sp = symtab; sp < &symtab[NSYMS]; sp ++) {
        if (sp->name && !strcmp(sp->name, s)) {
            return sp;
        }
    
        if (!sp->name) {
            sp->name = strdup(s);
            return sp;
        }
    } 
    yyerror("Too many symbols");
    exit(1);
}
