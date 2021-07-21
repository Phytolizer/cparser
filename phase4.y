%glr-parser
%token
    EOL
    <const char *> HEADER_NAME
    UCHAR_NAME
    IDENTIFIER
    INTEGRAL_CONSTANT
    FLOATING_CONSTANT
    CHARACTER_CONSTANT
    STRING_LITERAL
    LBRACK "["
    RBRACK "]"
    CONNECTED_LPAREN "=("
    LPAREN "("
    RPAREN ")"
    LBRACE "{"
    RBRACE "}"
    DOT "."
    ARROW "->"
    PLUSPLUS "++"
    MINUSMINUS "--"
    AMP "&"
    STAR "*"
    PLUS "+"
    MINUS "-"
    TILDE "~"
    BANG "!"
    SLASH "/"
    PERCENT "%"
    LEFTLEFT "<<"
    RIGHTRIGHT ">>"
    LEFT "<"
    RIGHT ">"
    LEFTEQUALS "<="
    RIGHTEQUALS ">="
    EQUALSEQUALS "=="
    BANGEQUALS "!="
    CARAT "^"
    PIPE "|"
    AMPAMP "&&"
    PIPEPIPE "||"
    QUESTION "?"
    COLON ":"
    SEMICOLON ";"
    ELLIPSIS "..."
    EQUALS "="
    STAREQUALS "*="
    SLASHEQUALS "/="
    PERCENTEQUALS "%="
    PLUSEQUALS "+="
    MINUSEQUALS "-="
    LEFTLEFTEQUALS "<<="
    RIGHTRIGHTEQUALS ">>="
    AMPEQUALS "&="
    CARATEQUALS "^="
    PIPEEQUALS "|="
    COMMA ","
    HASH "#"
    HASHHASH "##"
    INCLUDE "include"
    DEFINE "define"
    IF "if"
    IFDEF "ifdef"
    IFNDEF "ifndef"
    ELIF "elif"
    ELSE "else"
    ENDIF "endif"
    UNDEF "undef"
    LINE "line"
    ERROR "error"
    PRAGMA "pragma"
    SIZEOF "sizeof"
    ALIGNOF "_Alignof"
    OTHER_CHAR
%defines
%locations
%define api.prefix {phase4}
%define api.token.prefix {PP_}
%define parse.error verbose
%define parse.trace true
%define api.pure
%param { yyscan_t scanner }

%union {
    char *str;
}

%destructor { free($$); } <str>

%code {
#include <stdio.h>
void phase4error(PHASE4LTYPE *loc, yyscan_t scanner, const char *message);
#define phase4lex phase3lex
static int mac_ref_count = 0;
extern int phase3lineno;
extern char *phase3get_text(yyscan_t);
extern int phase3get_leng(yyscan_t);
extern void include_file(const char *name);
#define mystrlen(str) (str ? strlen(str) : 0)
#define mystrcpy(dest, src) strcpy(dest, src ? src : "")
#define mystrcat(dest, src) strcat(dest, src ? src : "")
}

%code requires {
typedef void *yyscan_t;
}

%code provides {
#define YY_DECL \
    int phase3lex(PHASE4STYPE *yylval_param, PHASE4LTYPE *yylloc_param, yyscan_t yyscanner)
YY_DECL;
}

%type <str> pp_tokens preprocessing_token

%%

file: group_opt { printf("EOF\n"); };
group_opt: group |;
group: group_part | group group_part;
group_part: if_section { printf("end if section (line %d)\n", @1.first_line); }
    | control_line { printf("end control line %d\n", @1.first_line); }
    | text_line { printf("macro references on line %d: %d\n", @1.first_line, mac_ref_count); }
    | "#" non_directive { printf("end non-directive\n"); }
    ;
if_section: if_group elif_groups_opt else_group_opt endif_line;
elif_groups_opt: elif_groups |;
else_group_opt: else_group |;
if_group: "#" "if" constant_expression EOL group_opt
    | "#" "ifdef" IDENTIFIER EOL group_opt
    | "#" "ifndef" IDENTIFIER EOL group_opt
    ;
elif_groups: elif_group | elif_groups elif_group;
elif_group: "#" "elif" constant_expression EOL group_opt;
else_group: "#" "else" EOL group_opt;
endif_line: "#" "endif" EOL;
control_line: "#" "include" pp_tokens EOL { include_file($3); }
    | "#" "define" IDENTIFIER replacement_list EOL
    | "#" "define" IDENTIFIER "=(" identifier_list_opt ")" replacement_list EOL
    | "#" "define" IDENTIFIER "=(" "..." ")" replacement_list EOL
    | "#" "define" IDENTIFIER "=(" identifier_list "," "..." ")" replacement_list EOL
    | "#" "undef" IDENTIFIER EOL
    | "#" "line" pp_tokens EOL
    | "#" "error" pp_tokens_opt EOL
    | "#" "pragma" pp_tokens_opt EOL
    | "#" EOL
    ;
text_line: not_hash_symbol pp_tokens_opt EOL | EOL;
non_directive: pp_tokens EOL;
replacement_list: pp_tokens_opt;
pp_tokens_opt: pp_tokens |;
pp_tokens: preprocessing_token { $$ = $1; }
    | pp_tokens preprocessing_token { 
        size_t total_len = mystrlen($1) + mystrlen($2);
        $$ = realloc($$, total_len + 1); 
        if ($$) { 
            mystrcpy($$, $1); 
            mystrcat($$, $2);
        }
        $$[total_len] = '\0';
    }
    ;
identifier_list_opt: identifier_list |;
identifier_list: IDENTIFIER COMMA identifier_list | IDENTIFIER;
not_hash_symbol: IDENTIFIER
    | INTEGRAL_CONSTANT
    | FLOATING_CONSTANT
    | CHARACTER_CONSTANT
    | STRING_LITERAL
    | LBRACK
    | RBRACK
    | LPAREN
    | RPAREN
    | LBRACE
    | RBRACE
    | DOT
    | ARROW
    | PLUSPLUS
    | MINUSMINUS
    | AMP
    | STAR
    | PLUS
    | MINUS
    | TILDE
    | BANG
    | SLASH
    | PERCENT
    | LEFTLEFT
    | RIGHTRIGHT
    | LEFT
    | RIGHT
    | LEFTEQUALS
    | RIGHTEQUALS
    | EQUALSEQUALS
    | BANGEQUALS
    | CARAT
    | PIPE
    | AMPAMP
    | PIPEPIPE
    | QUESTION
    | COLON
    | SEMICOLON
    | ELLIPSIS
    | EQUALS
    | STAREQUALS
    | SLASHEQUALS
    | PERCENTEQUALS
    | PLUSEQUALS
    | MINUSEQUALS
    | LEFTLEFTEQUALS
    | RIGHTRIGHTEQUALS
    | AMPEQUALS
    | CARATEQUALS
    | PIPEEQUALS
    | COMMA
    | SIZEOF
    | ALIGNOF
    | OTHER_CHAR
    ;
preprocessing_token: 
    IDENTIFIER { $$ = NULL; }
    | HEADER_NAME { 
        int leng = phase3get_leng(scanner);
        $$ = malloc(leng + 1); 
        strncpy($$, phase3get_text(scanner), leng); 
        $$[leng] = '\0';
    }
    | INTEGRAL_CONSTANT{ $$ = NULL; }
    | FLOATING_CONSTANT{ $$ = NULL; }
    | CHARACTER_CONSTANT{ $$ = NULL; }
    | STRING_LITERAL{ $$ = NULL; }
    | LBRACK{ $$ = NULL; }
    | RBRACK{ $$ = NULL; }
    | CONNECTED_LPAREN{ $$ = NULL; }
    | LPAREN{ $$ = NULL; }
    | RPAREN{ $$ = NULL; }
    | LBRACE{ $$ = NULL; }
    | RBRACE{ $$ = NULL; }
    | DOT{ $$ = NULL; }
    | ARROW{ $$ = NULL; }
    | PLUSPLUS{ $$ = NULL; }
    | MINUSMINUS{ $$ = NULL; }
    | AMP{ $$ = NULL; }
    | STAR{ $$ = NULL; }
    | PLUS{ $$ = NULL; }
    | MINUS{ $$ = NULL; }
    | TILDE{ $$ = NULL; }
    | BANG{ $$ = NULL; }
    | SLASH{ $$ = NULL; }
    | PERCENT{ $$ = NULL; }
    | LEFTLEFT{ $$ = NULL; }
    | RIGHTRIGHT{ $$ = NULL; }
    | LEFT{ $$ = NULL; }
    | RIGHT{ $$ = NULL; }
    | LEFTEQUALS{ $$ = NULL; }
    | RIGHTEQUALS{ $$ = NULL; }
    | EQUALSEQUALS{ $$ = NULL; }
    | BANGEQUALS{ $$ = NULL; }
    | CARAT{ $$ = NULL; }
    | PIPE{ $$ = NULL; }
    | AMPAMP{ $$ = NULL; }
    | PIPEPIPE{ $$ = NULL; }
    | QUESTION{ $$ = NULL; }
    | COLON{ $$ = NULL; }
    | SEMICOLON{ $$ = NULL; }
    | ELLIPSIS{ $$ = NULL; }
    | EQUALS{ $$ = NULL; }
    | STAREQUALS{ $$ = NULL; }
    | SLASHEQUALS{ $$ = NULL; }
    | PERCENTEQUALS{ $$ = NULL; }
    | PLUSEQUALS{ $$ = NULL; }
    | MINUSEQUALS{ $$ = NULL; }
    | LEFTLEFTEQUALS{ $$ = NULL; }
    | RIGHTRIGHTEQUALS{ $$ = NULL; }
    | AMPEQUALS{ $$ = NULL; }
    | CARATEQUALS{ $$ = NULL; }
    | PIPEEQUALS{ $$ = NULL; }
    | COMMA{ $$ = NULL; }
    | HASH{ $$ = NULL; }
    | HASHHASH{ $$ = NULL; }
    | SIZEOF{ $$ = NULL; }
    | ALIGNOF{ $$ = NULL; }
    | OTHER_CHAR{ $$ = NULL; }
    ;
constant_expression: constant_conditional_expression;
constant_conditional_expression: constant_logical_or_expression 
    | constant_logical_or_expression "?" constant_expression ":" constant_conditional_expression;
constant_logical_or_expression: constant_logical_and_expression 
    | constant_logical_or_expression "||" constant_logical_and_expression;
constant_logical_and_expression: constant_inclusive_or_expression
    | constant_logical_and_expression "&&" constant_inclusive_or_expression;
constant_inclusive_or_expression: constant_exclusive_or_expression
    | constant_inclusive_or_expression "|" constant_exclusive_or_expression;
constant_exclusive_or_expression: constant_and_expression
    | constant_exclusive_or_expression "^" constant_and_expression;
constant_and_expression: constant_equality_expression
    | constant_and_expression "&" constant_equality_expression;
constant_equality_expression: constant_relational_expression
    | constant_equality_expression equality_operator constant_relational_expression;
equality_operator: "==" | "!=";
constant_relational_expression: constant_shift_expression
    | constant_relational_expression relational_operator constant_shift_expression;
relational_operator: "<" | ">" | "<=" | ">=";
constant_shift_expression: constant_additive_expression
    | constant_shift_expression shift_operator constant_additive_expression;
shift_operator: "<<" | ">>";
constant_additive_expression: constant_multiplicative_expression
    | constant_additive_expression additive_operator constant_multiplicative_expression;
additive_operator: "+" | "-";
constant_multiplicative_expression: constant_cast_expression
    | constant_multiplicative_expression multiplicative_operator constant_cast_expression;
multiplicative_operator: "*" | "/" | "%";
constant_cast_expression: constant_unary_expression
    | lparen type_name ")" constant_cast_expression;
constant_unary_expression: constant_postfix_expression
    | unary_operator constant_cast_expression
    | "sizeof" unary_expression
    | "sizeof" lparen type_name ")"
    | "_Alignof" lparen type_name ")"
    ;
unary_operator: "-" | "+" | "~" | "&" | "*" | "!";
constant_postfix_expression: constant_primary_expression
    | constant_postfix_expression "[" constant_expression "]"
    | constant_postfix_expression "." IDENTIFIER
    | constant_postfix_expression "->" IDENTIFIER
    | lparen type_name ")" "{" constant_initializer_list "}"
    | lparen type_name ")" "{" constant_initializer_list "," "}"
    ;
constant_primary_expression: IDENTIFIER
    | INTEGRAL_CONSTANT
    | FLOATING_CONSTANT
    | CHARACTER_CONSTANT
    | STRING_LITERAL
    | lparen constant_expression ")"
    ;
unary_expression: postfix_expression
    | unary_operator cast_expression
    | "sizeof" unary_expression
    | "sizeof" lparen type_name ")"
    | "_Alignof" lparen type_name ")"
    ;
cast_expression: unary_expression
    | lparen type_name ")" cast_expression;
postfix_expression: primary_expression
    | postfix_expression "[" expression "]"
    | postfix_expression "." IDENTIFIER
    | postfix_expression "->" IDENTIFIER
    | postfix_expression lparen argument_expression_list_opt ")"
    | postfix_expression "++"
    | postfix_expression "--"
    | lparen type_name ")" "{" initializer_list "}"
    | lparen type_name ")" "{" initializer_list "," "}"
    ;
primary_expression: IDENTIFIER
    | INTEGRAL_CONSTANT
    | FLOATING_CONSTANT
    | CHARACTER_CONSTANT
    | STRING_LITERAL
    | lparen expression ")"
    | generic_selection
    ;
generic_selection: "_Generic" lparen assignment_expression "," generic_assoc_list ")";
generic_assoc_list: generic_association | generic_assoc_list "," generic_association;
generic_association: type_name ":" assignment_expression;
assignment_expression: conditional_expression | unary_expression assignment_operator assignment_expression;
assignment_operator: "=" | "*=" | "/=" | "%=" | "+=" | "-=" | "<<=" | ">>=" | "&=" | "^=" | "|=";
conditional_expression: logical_or_expression | logical_or_expression "?" expression ":" conditional_expression;
logical_or_expression: logical_and_expression | logical_or_expression "||" logical_and_expression;
logical_and_expression: inclusive_or_expression | logical_and_expression "&&" inclusive_or_expression;
inclusive_or_expression: exclusive_or_expression | inclusive_or_expression "|" exclusive_or_expression;
exclusive_or_expression: and_expression | exclusive_or_expression "^" and_expression;
and_expression: equality_expression | and_expression "&" equality_expression;
equality_expression: relational_expression | equality_expression equality_operator relational_expression;
relational_expression: shift_expression | relational_expression relational_operator shift_expression;
shift_expression: additive_expression | shift_expression shift_operator additive_expression;
additive_expression: multiplicative_expression | additive_expression additive_operator multiplicative_expression;
multiplicative_expression: cast_expression | multiplicative_expression multiplicative_operator cast_expression;
expression: assignment_expression | expression "," assignment_expression;
argument_expression_list_opt: argument_expression_list |;
argument_expression_list: assignment_expression | argument_expression_list "," assignment_expression;
constant_initializer_list: designation_opt constant_initializer
    | constant_initializer_list "," designation_opt constant_initializer;
designation_opt: designation |;
constant_initializer: constant_expression
    | "{" constant_initializer_list "}"
    | "{" constant_initializer_list "," "}"
    ;
initializer_list: designation_opt initializer | initializer_list "," designation_opt initializer;
initializer: assignment_expression
    | "{" initializer_list "}"
    | "{" initializer_list "," "}"
    ;
designation: designator_list "=";
designator_list: designator | designator_list designator;
designator: "[" constant_expression "]" | "." IDENTIFIER;
type_name: specifier_qualifier_list abstract_declarator_opt;
abstract_declarator_opt: abstract_declarator |;
abstract_declarator: pointer | pointer_opt direct_abstract_declarator;
direct_abstract_declarator: lparen abstract_declarator ")"
    | direct_abstract_declarator_opt "[" type_qualifier_list_opt assignment_expression_opt "]"
    | direct_abstract_declarator_opt "[" "static" type_qualifier_list_opt assignment_expression "]"
    | direct_abstract_declarator_opt "[" type_qualifier_list "static" assignment_expression "]"
    | direct_abstract_declarator_opt "[" "*" "]"
    | direct_abstract_declarator_opt lparen parameter_type_list_opt ")"
    ;
direct_abstract_declarator_opt: direct_abstract_declarator |;
assignment_expression_opt: assignment_expression |;
type_qualifier: "const" | "restrict" | "volatile" | "_Atomic";
type_qualifier_list: type_qualifier | type_qualifier_list type_qualifier;
pointer_opt: pointer |;
pointer: "*" type_qualifier_list_opt | "*" type_qualifier_list_opt pointer;
type_qualifier_list_opt: type_qualifier_list |;
type_specifier: "void"
    | "char"
    | "short"
    | "int"
    | "long"
    | "float"
    | "double"
    | "signed"
    | "unsigned"
    | "_Bool"
    | "_Complex"
    | atomic_type_specifier
    | struct_or_union_specifier
    | enum_specifier
    | typedef_name
    ;
struct_or_union_specifier: struct_or_union identifier_opt "{" struct_declaration_list "}"
    | struct_or_union IDENTIFIER
    ;
struct_or_union: "struct" | "union";
struct_declaration_list: struct_declaration | struct_declaration_list struct_declaration;
struct_declaration: specifier_qualifier_list struct_declarator_list_opt ";"
    | static_assert_declaration
    ;
specifier_qualifier_list: type_specifier specifier_qualifier_list_opt
    | type_qualifier specifier_qualifier_list_opt
    | alignment_specifier specifier_qualifier_list_opt
    ;
struct_declarator_list: struct_declarator | struct_declarator_list "," struct_declarator;
struct_declarator_list_opt: struct_declarator_list |;
struct_declarator: declarator | declarator_opt ":" constant_expression;
declarator_opt: declarator |;
enum_specifier: "enum" identifier_opt "{" enumerator_list comma_opt "}"
    | "enum" IDENTIFIER
    ;
comma_opt: "," |;
identifier_opt: IDENTIFIER |;
enumerator_list: enumerator | enumerator_list "," enumerator;
enumerator: enumeration_constant | enumeration_constant "=" constant_expression;
atomic_type_specifier: "_Atomic" lparen type_name ")";
enumeration_constant: IDENTIFIER;
alignment_specifier: "_Alignas" lparen type_name ")" | "_Alignas" lparen constant_expression ")";
declarator: pointer_opt direct_declarator;
direct_declarator: IDENTIFIER
    | lparen declarator ")"
    | direct_declarator "[" type_qualifier_list_opt assignment_expression_opt "]"
    | direct_declarator "[" "static" type_qualifier_list_opt assignment_expression "]"
    | direct_declarator "[" type_qualifier_list "static" assignment_expression "]"
    | direct_declarator "[" type_qualifier_list_opt "*" "]"
    | direct_declarator lparen parameter_type_list ")"
    | direct_declarator lparen identifier_list_opt ")"
    ;
specifier_qualifier_list_opt: specifier_qualifier_list |;
parameter_type_list_opt: parameter_type_list |;
parameter_type_list: parameter_list | parameter_list "," "...";
parameter_list: parameter_declaration | parameter_list "," parameter_declaration;
parameter_declaration: declaration_specifiers declarator | declaration_specifiers abstract_declarator_opt;
typedef_name: IDENTIFIER;
static_assert_declaration: "_Static_assert" lparen constant_expression "," STRING_LITERAL ")" ";"
    | "_Static_assert" lparen constant_expression ")"
    ;
declaration_specifiers: storage_class_specifier declaration_specifiers_opt
    | type_specifier declaration_specifiers_opt
    | type_qualifier declaration_specifiers_opt
    | function_specifier declaration_specifiers_opt
    | alignment_specifier declaration_specifiers_opt
    ;
declaration_specifiers_opt: declaration_specifiers |;
storage_class_specifier: "typedef" | "extern" | "static" | "_Thread_local" | "auto" | "register";
function_specifier: "inline" | "_Noreturn";
lparen: "=(" | "(";

%%

void phase4error(PHASE4LTYPE *loc, yyscan_t scanner, const char *message)
{
    fprintf(stderr, "%s\n", message);
}
