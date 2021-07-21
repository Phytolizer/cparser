%option noyywrap noinput nounput outfile="phase2.yy.c" prefix="phase2" yylineno nodefault

%%

"\\\n"      ;
"\n"        return '\n';
.           return *yytext;
<<EOF>>     return EOF;
