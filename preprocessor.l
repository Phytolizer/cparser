%option noyywrap noinput nounput yylineno

%{
#include "preprocessor.tab.h"
%}

%x DIRECTIVE

W       [ \t]
ID      [a-zA-Z_][a-zA-Z_0-9]*
NZ      [1-9]
DIG     [0-9]
HXD     [0-9a-fA-F]
NUM     ({NZ}{DIG}*)|("0"[xX]{HXD}+)

%%

<INITIAL>^{W}*"#"                               begin(DIRECTIVE);
<INITIAL>{ID}                                   return PP_TOKEN;
<INITIAL>{NUM}                                  return PP_TOKEN;
<INITIAL>"("                                    return PP_TOKEN;
<INITIAL>")"                                    return PP_TOKEN;
<INITIAL>.                                      ;
<DIRECTIVE>"\n"                                 begin(INITIAL); return PP_EOL;
<DIRECTIVE>"include"                            return PP_INCLUDE;
<DIRECTIVE>"if"                                 return PP_IF;
<DIRECTIVE>"elif"                               return PP_ELIF;
<DIRECTIVE>"else"                               return PP_ELSE;
<DIRECTIVE>"endif"                              return PP_ENDIF;
<DIRECTIVE>"ifdef"                              return PP_IFDEF;
<DIRECTIVE>"ifndef"                             return PP_IFNDEF;
<DIRECTIVE>"define"                             return PP_DEFINE;
<DIRECTIVE>"undef"                              return PP_UNDEF;
<DIRECTIVE>"line"                               return PP_LINE;
<DIRECTIVE>"error"                              return PP_ERROR;
<DIRECTIVE>"pragma"                             return PP_PRAGMA;
<DIRECTIVE>"\""([^"\\]|\\"\"")*"\""             return PP_STRING;
<DIRECTIVE>"defined"                            return PP_DEFINED;
<DIRECTIVE>"("                                  return PP_LEFT_PARENTHESIS;
<DIRECTIVE>")"                                  return PP_RIGHT_PARENTHESIS;
<DIRECTIVE>"__VA_ARGS__"                        return PP_VA_ARGS;
<DIRECTIVE>"##"                                 return PP_HASH_HASH;
<DIRECTIVE>"#"                                  return PP_HASH;
<DIRECTIVE>"STDC"                               return PP_STDC;
<DIRECTIVE>{ID}                                 return PP_IDENTIFIER;
<DIRECTIVE>{W}+                                 return PP_WHITESPACE;
<DIRECTIVE>.                                    return PP_OTHER;
