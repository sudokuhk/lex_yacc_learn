#########################################################################
# File Name:cmd.sh
# Author: sudoku.huang
# mail: sudoku.huang@gmail.com
# Created Time:2016-01-14 11:40:39
#########################################################################

#! /bin/bash

bison -d lexya_a.y
lex lexya_a.l
cc -o parser  lex.yy.c   lexya_a.tab.c  -ll
