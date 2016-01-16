/*************************************************************************
    > File Name: ch3hdr.h
    > Author: sudoku.huang
    > Mail: sudoku.huang@gmail.com 
    > Created Time: 2016-01-15 11:15:55
 ************************************************************************/

#define NSYMS 20

struct symtab {
    char * name;
    double value;
} symtab[NSYMS];

struct symtab * symlook();
