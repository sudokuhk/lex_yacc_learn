#########################################################################
# File Name:cmd.sh
# Author: sudoku.huang
# mail: sudoku.huang@gmail.com
# Created Time:2016-01-14 09:38:19
#########################################################################

#! /bin/bash

# 1
flex $1

#2
cc -o parser lex.yy.c -ll


