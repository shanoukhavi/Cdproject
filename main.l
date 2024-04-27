%{
#include "y.tab.h"
%}

%%
"BEGIN" { return BEGIN_; }
"PRINT" { return PRINT; }
"INTEGER" { return INT; }
"STRING" { return STRING; }
"FLOAT" { return FLOAT; }
"REAL" { return REAL_NUM; }
"TO" { return TO; }
"END" { return END_; }
"FOR" { return FOR; }
"=" { return EQ; }
[a-zA-Z][a-zA-Z0-9]* { return ID; }
[0-9]+(\.[0-9]+)? { return NUM; }
[0-9]+(\.[0-9]+)?((e|E)(-|\+)?[0-9]+)? { return REAL_DIG; }
"\(" { return LT; }
"\)" { return RT; }
\n { return NL; }
[ \t]+ { /* Ignore whitespace */ }
',' { return CM; }
':' { return COLON; }  // Make sure 'COLON' is defined in your Yacc file
';' { return SEMICOLON; }  // Make sure 'SEMICOLON' is defined in your Yacc file
. { return yytext[0]; }
%%



