%{
#include<stdio.h>
#include<stdlib.h>
extern int yydebug;
extern FILE *yyin;
%}
%token ID NUM NL BEGIN_ PRINT END_ INT FLOAT REAL_NUM STRING CM EQ FOR TO LIT REAL_DIG
%%
S: BEGIN_ NL statement_list END_ { printf("\nValid language\n"); exit(0); }
statement_list: statement NL | statement_list statement NL;
statement: declaration | assignment | loop | PRINT LIT;
declaration: type ID_list;
type: INT | FLOAT | STRING | REAL_NUM;
ID_list: ID | ID_list CM ID;
assignment: ID EQ expression;
expression: ID | NUM | REAL_DIG | LIT;
loop: FOR ID EQ NUM TO NUM NL statement;
%%
int yyerror(char *msg){
    printf("Invalid input");
    return 1;
}
int yywrap(){
    return 1;
}

int main(int argc,char **argv)
{
    yyin=fopen(argv[1],"r");
    yyparse();
    return 0;
}