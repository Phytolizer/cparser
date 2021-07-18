%glr-parser

%token PP_EOL PP_INCLUDE PP_IF PP_ELIF PP_ELSE PP_ENDIF PP_IFDEF PP_IFNDEF PP_DEFINE PP_UNDEF PP_LINE PP_ERROR PP_PRAGMA PP_STRING PP_DEFINED PP_LEFT_PARENTHESIS PP_RIGHT_PARENTHESIS
%token PP_VA_ARGS PP_HASH_HASH PP_HASH PP_STDC PP_IDENTIFIER PP_OTHER PP_TOKEN PP_WHITESPACE

%%

file: lines;
lines: os line PP_EOL lines |;
os: s |;
s: PP_WHITESPACE;
line: ifD | ifdefD | ifndefD | elifD | elseD | endifD | includeD | defineD | undefD | lineD | errorD | pragmaD |;
ifD: PP_IF os constantExpr os;
ifdefD: PP_IFDEF os PP_IDENTIFIER os;
ifndefD: PP_IFNDEF os PP_IDENTIFIER os;
elifD: PP_ELIF os constantExpr os;
elseD: PP_ELSE os;
endifD: PP_ENDIF os;
includeD: PP_INCLUDE os PP_STRING os;
