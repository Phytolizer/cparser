%option noyywrap noinput nounput outfile="phase3.yy.c" prefix="phase3" yylineno bison-locations reentrant

%{
#include "phase4.tab.h"
#include <stdio.h>
int beforeComment;

#define YYSTYPE PHASE4STYPE
#define YYLTYPE PHASE4LTYPE

#define YY_USER_ACTION                          \
    yylloc->first_line = yylloc->last_line;     \
    yylloc->first_column = yylloc->last_column; \
    for (int i = 0; yytext[i]; ++i)             \
    {                                           \
        if (yytext[i] == '\n')                  \
        {                                       \
            ++yylloc->last_line;                \
            yylloc->last_column = 1;            \
        }                                       \
        else                                    \
        {                                       \
            ++yylloc->last_column;              \
        }                                       \
    }

%}

%x DIRECTIVE INCLUDE COMMENT POSTIDENT

OW    [ \t\r]*
W     [ \t\r]+
X     [0-9a-fA-F]
UC    "\\u"{X}{4}
UU    "\\U"{X}{8}
ND    [_a-zA-Z]
D     [0-9]
ID    {ND}({ND}|{D}|{U}|{UU})*
NZ    [1-9]
DC    {NZ}{D}*
O     [0-7]
OC    "0"{O}*
XC    "0"[xX]{X}+
IS    ({UL}|{ULL}|{LU}|{LLU})
UL    {U}{L}?
ULL   {U}{LL}?
LU    {L}{U}?
LLU   {LL}{U}?
U     [uU]
L     [lL]
LL    (ll|LL)
IC    ({DC}|{OC}|{XC}){IS}?
DFC   ({FRC}{XP}?{FS}?|{D}+{XP}{FS}?)
XFC   "0"[xX]({XFR}|{XDS}){BXP}{FS}?
XFR   ({XDS}?"."{XDS}|{XDS}".")
XDS   {X}+
FS    [fFlL]
FRC   ({D}*"."{D}+|{D}+".")
XP    [eE][+-]?{D}+
BXP   [pP][+-]?{D}+
FC    ({DFC}|{XFC})
CHC   [LuU]?"'"{CC}"'"
CC    ([^'\\\n]|{ESC})+
ESC   ({SSC}|{OSC}|{XSC}|{UC}|{UU})
SSC   "\\"['\"?\\abfnrtv]
OSC   "\\"{O}{1,3}
XSC   "\\x"{X}+
STL   {ECP}?"\""{SC}"\""
ECP   ("u8"|[uUL])
SC    ([^\"\\\n]|{ESC})*

%%

<DIRECTIVE,INCLUDE,POSTIDENT>"\n"               BEGIN(INITIAL); return PP_EOL;
"\n"                                            return PP_EOL;
<*>"//"[^\n]*                                   ;
<INITIAL>"/*"                                   beforeComment = INITIAL; BEGIN(COMMENT);
<POSTIDENT>"/*"                                 beforeComment = POSTIDENT; BEGIN(COMMENT);
<DIRECTIVE>"/*"                                 beforeComment = DIRECTIVE; BEGIN(COMMENT);
<INCLUDE>"/*"                                   beforeComment = INCLUDE; BEGIN(COMMENT);
<COMMENT>[^*]*                                  ;
<COMMENT>"*"+[^/]*                              ;
<COMMENT>"*"+"/"                                BEGIN(beforeComment);
<POSTIDENT>{W}                                  BEGIN(INITIAL);
<*>{W}                                          ;
^{OW}"#"                                        BEGIN(DIRECTIVE); return PP_HASH;
<DIRECTIVE>"include"                            BEGIN(INCLUDE); return PP_INCLUDE;
<DIRECTIVE>"define"                             return PP_DEFINE;
<DIRECTIVE>"if"                                 return PP_IF;
<DIRECTIVE>"ifdef"                              return PP_IFDEF;
<DIRECTIVE>"ifndef"                             return PP_IFNDEF;
<DIRECTIVE>"elif"                               return PP_ELIF;
<DIRECTIVE>"else"                               return PP_ELSE;
<DIRECTIVE>"endif"                              return PP_ENDIF;
<DIRECTIVE>"undef"                              return PP_UNDEF;
<DIRECTIVE>"line"                               return PP_LINE;
<DIRECTIVE>"error"                              return PP_ERROR;
<DIRECTIVE>"pragma"                             return PP_PRAGMA;
<INCLUDE>"<"[^\n]*">"                           return PP_HEADER_NAME;
<INCLUDE>"\""[^\n]*"\""                         return PP_HEADER_NAME;
<INITIAL,DIRECTIVE,POSTIDENT>{UC}               return PP_UCHAR_NAME;
<INITIAL,DIRECTIVE,POSTIDENT>{UU}               return PP_UCHAR_NAME;
<INITIAL,DIRECTIVE,POSTIDENT>"sizeof"           return PP_SIZEOF;
<INITIAL,DIRECTIVE,POSTIDENT>"_Alignof"         return PP_ALIGNOF;
<INITIAL,DIRECTIVE>{ID}                         BEGIN(POSTIDENT); return PP_IDENTIFIER;
<INITIAL,DIRECTIVE,POSTIDENT>{IC}               return PP_INTEGRAL_CONSTANT;
<INITIAL,DIRECTIVE,POSTIDENT>{FC}               return PP_FLOATING_CONSTANT;
<INITIAL,DIRECTIVE,POSTIDENT>{CHC}              return PP_CHARACTER_CONSTANT;
<INITIAL,DIRECTIVE,POSTIDENT>{STL}              return PP_STRING_LITERAL;
<INITIAL,DIRECTIVE,POSTIDENT>"["                return PP_LBRACK;
<INITIAL,DIRECTIVE,POSTIDENT>"]"                return PP_RBRACK;
<POSTIDENT>"("                                  BEGIN(INITIAL); return PP_CONNECTED_LPAREN;
<INITIAL,DIRECTIVE>"("                          return PP_LPAREN;
<INITIAL,DIRECTIVE,POSTIDENT>")"                return PP_RPAREN;
<INITIAL,DIRECTIVE,POSTIDENT>"{"                return PP_LBRACE;
<INITIAL,DIRECTIVE,POSTIDENT>"}"                return PP_RBRACE;
<INITIAL,DIRECTIVE,POSTIDENT>"."                return PP_DOT;
<INITIAL,DIRECTIVE,POSTIDENT>"->"               return PP_ARROW;
<INITIAL,DIRECTIVE,POSTIDENT>"++"               return PP_PLUSPLUS;
<INITIAL,DIRECTIVE,POSTIDENT>"--"               return PP_MINUSMINUS;
<INITIAL,DIRECTIVE,POSTIDENT>"&"                return PP_AMP;
<INITIAL,DIRECTIVE,POSTIDENT>"*"                return PP_STAR;
<INITIAL,DIRECTIVE,POSTIDENT>"+"                return PP_PLUS;
<INITIAL,DIRECTIVE,POSTIDENT>"-"                return PP_MINUS;
<INITIAL,DIRECTIVE,POSTIDENT>"~"                return PP_TILDE;
<INITIAL,DIRECTIVE,POSTIDENT>"!"                return PP_BANG;
<INITIAL,DIRECTIVE,POSTIDENT>"/"                return PP_SLASH;
<INITIAL,DIRECTIVE,POSTIDENT>"%"                return PP_PERCENT;
<INITIAL,DIRECTIVE,POSTIDENT>"<<"               return PP_LEFTLEFT;
<INITIAL,DIRECTIVE,POSTIDENT>">>"               return PP_RIGHTRIGHT;
<INITIAL,DIRECTIVE,POSTIDENT>"<"                return PP_LEFT;
<INITIAL,DIRECTIVE,POSTIDENT>">"                return PP_RIGHT;
<INITIAL,DIRECTIVE,POSTIDENT>"<="               return PP_LEFTEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>">="               return PP_RIGHTEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"=="               return PP_EQUALSEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"!="               return PP_BANGEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"^"                return PP_CARAT;
<INITIAL,DIRECTIVE,POSTIDENT>"|"                return PP_PIPE;
<INITIAL,DIRECTIVE,POSTIDENT>"&&"               return PP_AMPAMP;
<INITIAL,DIRECTIVE,POSTIDENT>"||"               return PP_PIPEPIPE;
<INITIAL,DIRECTIVE,POSTIDENT>"?"                return PP_QUESTION;
<INITIAL,DIRECTIVE,POSTIDENT>":"                return PP_COLON;
<INITIAL,DIRECTIVE,POSTIDENT>";"                return PP_SEMICOLON;
<INITIAL,DIRECTIVE,POSTIDENT>"..."              return PP_ELLIPSIS;
<INITIAL,DIRECTIVE,POSTIDENT>"="                return PP_EQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"*="               return PP_STAREQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"/="               return PP_SLASHEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"%="               return PP_PERCENTEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"+="               return PP_PLUSEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"-="               return PP_MINUSEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"<<="              return PP_LEFTLEFTEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>">>="              return PP_RIGHTRIGHTEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"&="               return PP_AMPEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"^="               return PP_CARATEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>"|="               return PP_PIPEEQUALS;
<INITIAL,DIRECTIVE,POSTIDENT>","                return PP_COMMA;
<INITIAL,DIRECTIVE,POSTIDENT>"#"                return PP_HASH;
<INITIAL,DIRECTIVE,POSTIDENT>"##"               return PP_HASHHASH;
<INITIAL,DIRECTIVE,POSTIDENT,INCLUDE>.          return PP_OTHER_CHAR;
<*><<EOF>>                                      return EOF;

%%
