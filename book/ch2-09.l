%{
int comments = 0;
int code = 0;
int whitespace = 0;
%}

%x COMMENT

%%
^[.\t]*"/*" { BEGIN COMMENT; }
^[ \t]*"/*".*"*/"[ \t]*\n { comments ++; }
<COMMENT>"*/"[ \t]*\n { BEGIN 0; comments ++; }
<COMMENT>"*/"   {BEGIN 0;}
<COMMENT>\n {comments++;}
<COMMENT>.\n {comments ++; }

^[ \t]*\n {whitespace ++; }

.+"/*".*"*/".*\n {code ++; }
.*"/*".*"*/".+\n {code ++; }
.+"/*".*\n {code ++; BEGIN COMMENT; }
.\n {code ++; }

. ;
%%

main()
{
    yylex();
    printf("comment:%d, code:%d, white:%d\n", comments, code, whitespace);
    printf("total:%d\n", comments + code + whitespace);
}

int yywrap()
{
    return 1;
}
