%{
/* sample to show */
%}
%%

[\t ]+ /* blank */ ; 

is | 
am |
are |
were |
was |
be |
being |
been |
do |
does |
did |
will |
would |
should |
can |
could |
has |
have |
had |
go { printf("%s: is a verb\n", yytext); /*return;*/}
[a-zA-Z]+ {printf("%s: is not a verb\n", yytext);}
.|\n { ECHO; }
%%

main()
{
    yylex();
}

int yywrap()
{
    return 1;
}

