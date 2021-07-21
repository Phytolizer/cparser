%glr-parser
%token
    EOL
    HEADER_NAME
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
    struct token *token;
    struct token_list *token_list;
    struct identifier_list *identifier_list;
}

%destructor { free($$); } <*>
%destructor { free($$->text); free($$); } <token>
%destructor { free($$->text); free($$); } <identifier_list>

%code {
#include <stdio.h>
void phase4error(PHASE4LTYPE *loc, yyscan_t scanner, const char *message);
#define phase4lex phase3lex
static int mac_ref_count = 0;
extern int phase3lineno;
extern char *phase3get_text(yyscan_t);
extern int phase3get_leng(yyscan_t);
#include "compiler.h"
char *mycopystr(yyscan_t);
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

%type <token> 
    preprocessing_token 
    identifier
    header_name 
    integral_constant
    floating_constant
    character_constant
    string_literal
    lbrack
    rbrack
    connected_lparen
    lparen
    rparen
    lbrace
    rbrace
    dot
    arrow
    plusplus
    minusminus
    amp
    star
    plus
    minus
    tilde
    bang
    slash
    percent
    leftleft
    rightright
    left
    right
    leftequals
    rightequals
    equalsequals
    bangequals
    carat
    pipe
    ampamp
    pipepipe
    question
    colon
    semicolon
    ellipsis
    equals
    starequals
    slashequals
    percentequals
    plusequals
    minusequals
    leftleftequals
    rightrightequals
    ampequals
    caratequals
    pipeequals
    comma
    hash
    hashhash
    sizeof
    alignof
    other_char

%type <token_list> pp_tokens pp_tokens_opt replacement_list
%type <identifier_list> identifier_list identifier_list_opt

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

if_group: "#" "if" constant_expression EOL group_opt { printf("end if group (line %d)\n"); }
    | "#" "ifdef" identifier EOL group_opt
    | "#" "ifndef" identifier EOL group_opt
    ;

elif_groups: elif_group | elif_groups elif_group;

elif_group: "#" "elif" constant_expression EOL group_opt;

else_group: "#" "else" EOL group_opt;

endif_line: "#" "endif" EOL;

control_line: "#" "include" pp_tokens EOL { include_file($3); }
    | "#" "define" identifier replacement_list EOL { define_simple_macro($3, $4); }
    | "#" "define" identifier "=(" identifier_list_opt ")" replacement_list EOL { define_function_like_macro($3, $5, $7); }
    | "#" "define" identifier "=(" "..." ")" replacement_list EOL { define_function_like_variadic_macro($3, $7); }
    | "#" "define" identifier "=(" identifier_list "," "..." ")" replacement_list EOL { define_function_like_variadic_macro_with_args($3, $5, $9); }
    | "#" "undef" identifier EOL { undefine_macro($3); }
    | "#" "line" pp_tokens EOL
    | "#" "error" pp_tokens_opt EOL
    | "#" "pragma" pp_tokens_opt EOL
    | "#" EOL
    ;

text_line: not_hash_symbol pp_tokens_opt EOL | EOL;

non_directive: pp_tokens EOL;

replacement_list: pp_tokens_opt;

pp_tokens_opt: pp_tokens { $$ = $1; }
    | { $$ = NULL; }
    ;

pp_tokens: preprocessing_token {
        $$ = malloc(sizeof(struct token_list));
        $$->token = $1;
        $$->next = NULL;
    }
    | pp_tokens preprocessing_token { 
        $$ = malloc(sizeof(struct token_list));
        $$->token = $2;
        $$->next = $1;
    }
    ;

identifier_list_opt: identifier_list { $$ = $1; }
    | { $$ = NULL; }
    ;

identifier_list: identifier comma identifier_list {
        $$ = malloc(sizeof(struct identifier_list));
        $$->text = mycopystr(scanner);
        $$->next = $3;
    }
    | identifier {
        $$ = malloc(sizeof(struct identifier_list));
        $$->text = mycopystr(scanner);
        $$->next = NULL;
    }
    ;

not_hash_symbol: identifier
    | integral_constant
    | floating_constant
    | character_constant
    | string_literal
    | lbrack
    | rbrack
    | lparen
    | rparen
    | lbrace
    | rbrace
    | dot
    | arrow
    | plusplus
    | minusminus
    | amp
    | star
    | plus
    | minus
    | tilde
    | bang
    | slash
    | percent
    | leftleft
    | rightright
    | left
    | right
    | leftequals
    | rightequals
    | equalsequals
    | bangequals
    | carat
    | pipe
    | ampamp
    | pipepipe
    | question
    | colon
    | semicolon
    | ellipsis
    | equals
    | starequals
    | slashequals
    | percentequals
    | plusequals
    | minusequals
    | leftleftequals
    | rightrightequals
    | ampequals
    | caratequals
    | pipeequals
    | comma
    | sizeof
    | alignof
    | other_char
    ;

preprocessing_token: 
    identifier 
    | header_name 
    | integral_constant
    | floating_constant
    | character_constant
    | string_literal
    | lbrack
    | rbrack
    | connected_lparen
    | lparen
    | rparen
    | lbrace
    | rbrace
    | dot
    | arrow
    | plusplus
    | minusminus
    | amp
    | star
    | plus
    | minus
    | tilde
    | bang
    | slash
    | percent
    | leftleft
    | rightright
    | left
    | right
    | leftequals
    | rightequals
    | equalsequals
    | bangequals
    | carat
    | pipe
    | ampamp
    | pipepipe
    | question
    | colon
    | semicolon
    | ellipsis
    | equals
    | starequals
    | slashequals
    | percentequals
    | plusequals
    | minusequals
    | leftleftequals
    | rightrightequals
    | ampequals
    | caratequals
    | pipeequals
    | comma
    | hash
    | hashhash
    | sizeof
    | alignof
    | other_char
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
    | any_lparen type_name ")" constant_cast_expression;

constant_unary_expression: constant_postfix_expression
    | unary_operator constant_cast_expression
    | "sizeof" unary_expression
    | "sizeof" any_lparen type_name ")"
    | "_Alignof" any_lparen type_name ")"
    ;

unary_operator: "-" | "+" | "~" | "&" | "*" | "!";

constant_postfix_expression: constant_primary_expression
    | constant_postfix_expression "[" constant_expression "]"
    | constant_postfix_expression "." identifier
    | constant_postfix_expression "->" identifier
    | any_lparen type_name ")" "{" constant_initializer_list "}"
    | any_lparen type_name ")" "{" constant_initializer_list "," "}"
    ;

constant_primary_expression: identifier
    | INTEGRAL_CONSTANT
    | FLOATING_CONSTANT
    | CHARACTER_CONSTANT
    | STRING_LITERAL
    | any_lparen constant_expression ")"
    ;

unary_expression: postfix_expression
    | unary_operator cast_expression
    | "sizeof" unary_expression
    | "sizeof" any_lparen type_name ")"
    | "_Alignof" any_lparen type_name ")"
    ;

cast_expression: unary_expression
    | any_lparen type_name ")" cast_expression;

postfix_expression: primary_expression
    | postfix_expression "[" expression "]"
    | postfix_expression "." identifier
    | postfix_expression "->" identifier
    | postfix_expression any_lparen argument_expression_list_opt ")"
    | postfix_expression "++"
    | postfix_expression "--"
    | any_lparen type_name ")" "{" initializer_list "}"
    | any_lparen type_name ")" "{" initializer_list "," "}"
    ;

primary_expression: identifier
    | integral_constant
    | floating_constant
    | character_constant
    | string_literal
    | any_lparen expression ")"
    | generic_selection
    ;

generic_selection: "_Generic" any_lparen assignment_expression "," generic_assoc_list ")";

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

designator: "[" constant_expression "]" | "." identifier;

type_name: specifier_qualifier_list abstract_declarator_opt;

abstract_declarator_opt: abstract_declarator |;

abstract_declarator: pointer | pointer_opt direct_abstract_declarator;

direct_abstract_declarator: any_lparen abstract_declarator ")"
    | direct_abstract_declarator_opt "[" type_qualifier_list_opt assignment_expression_opt "]"
    | direct_abstract_declarator_opt "[" "static" type_qualifier_list_opt assignment_expression "]"
    | direct_abstract_declarator_opt "[" type_qualifier_list "static" assignment_expression "]"
    | direct_abstract_declarator_opt "[" "*" "]"
    | direct_abstract_declarator_opt any_lparen parameter_type_list_opt ")"
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
    | struct_or_union identifier
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
    | "enum" identifier
    ;

comma_opt: "," |;

identifier_opt: identifier |;

enumerator_list: enumerator | enumerator_list "," enumerator;

enumerator: enumeration_constant | enumeration_constant "=" constant_expression;

atomic_type_specifier: "_Atomic" any_lparen type_name ")";

enumeration_constant: identifier;

alignment_specifier: "_Alignas" any_lparen type_name ")" | "_Alignas" any_lparen constant_expression ")";

declarator: pointer_opt direct_declarator;

direct_declarator: identifier
    | any_lparen declarator ")"
    | direct_declarator "[" type_qualifier_list_opt assignment_expression_opt "]"
    | direct_declarator "[" "static" type_qualifier_list_opt assignment_expression "]"
    | direct_declarator "[" type_qualifier_list "static" assignment_expression "]"
    | direct_declarator "[" type_qualifier_list_opt "*" "]"
    | direct_declarator any_lparen parameter_type_list ")"
    | direct_declarator any_lparen identifier_list_opt ")"
    ;

specifier_qualifier_list_opt: specifier_qualifier_list |;

parameter_type_list_opt: parameter_type_list |;

parameter_type_list: parameter_list | parameter_list "," "...";

parameter_list: parameter_declaration | parameter_list "," parameter_declaration;

parameter_declaration: declaration_specifiers declarator | declaration_specifiers abstract_declarator_opt;

typedef_name: identifier;

static_assert_declaration: "_Static_assert" any_lparen constant_expression "," string_literal ")" ";"
    | "_Static_assert" any_lparen constant_expression ")"
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

any_lparen: "=(" | "(";

identifier: IDENTIFIER { 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_IDENTIFIER; 
    $$->text = mycopystr(scanner); 
}

header_name: HEADER_NAME { 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_HEADER_NAME; 
    $$->text = mycopystr(scanner); 
}

integral_constant: INTEGRAL_CONSTANT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_INTEGRAL_CONSTANT; 
    $$->text = mycopystr(scanner); 
}

floating_constant: FLOATING_CONSTANT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_FLOATING_CONSTANT; 
    $$->text = mycopystr(scanner); 
}

character_constant: CHARACTER_CONSTANT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_CHARACTER_CONSTANT; 
    $$->text = mycopystr(scanner); 
}

string_literal: STRING_LITERAL{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_STRING_LITERAL; 
    $$->text = mycopystr(scanner); 
}

lbrack: LBRACK{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LBRACK; 
    $$->text = mycopystr(scanner); 
}

rbrack: RBRACK{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_RBRACK; 
    $$->text = mycopystr(scanner); 
}

connected_lparen: CONNECTED_LPAREN{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_CONNECTED_LPAREN; 
    $$->text = mycopystr(scanner); 
}

lparen: LPAREN{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LPAREN; 
    $$->text = mycopystr(scanner); 
}

rparen: RPAREN{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_RPAREN; 
    $$->text = mycopystr(scanner); 
}

lbrace: LBRACE{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LBRACE; 
    $$->text = mycopystr(scanner); 
}

rbrace: RBRACE{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_RBRACE; 
    $$->text = mycopystr(scanner); 
}

dot: DOT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_DOT; 
    $$->text = mycopystr(scanner); 
}

arrow: ARROW{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_ARROW; 
    $$->text = mycopystr(scanner); 
}

plusplus: PLUSPLUS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PLUSPLUS; 
    $$->text = mycopystr(scanner); 
}

minusminus: MINUSMINUS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_MINUSMINUS; 
    $$->text = mycopystr(scanner); 
}

amp: AMP{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_AMP; 
    $$->text = mycopystr(scanner); 
}

star: STAR{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_STAR; 
    $$->text = mycopystr(scanner); 
}

plus: PLUS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PLUS; 
    $$->text = mycopystr(scanner); 
}

minus: MINUS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_MINUS; 
    $$->text = mycopystr(scanner); 
}

tilde: TILDE{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_TILDE; 
    $$->text = mycopystr(scanner); 
}

bang: BANG{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_BANG; 
    $$->text = mycopystr(scanner); 
}

slash: SLASH{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_SLASH; 
    $$->text = mycopystr(scanner); 
}

percent: PERCENT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PERCENT; 
    $$->text = mycopystr(scanner); 
}

leftleft: LEFTLEFT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LEFTLEFT; 
    $$->text = mycopystr(scanner); 
}

rightright: RIGHTRIGHT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_RIGHTRIGHT; 
    $$->text = mycopystr(scanner); 
}

left: LEFT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LEFT; 
    $$->text = mycopystr(scanner); 
}

right: RIGHT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_RIGHT; 
    $$->text = mycopystr(scanner); 
}

leftequals: LEFTEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LEFTEQUALS; 
    $$->text = mycopystr(scanner); 
}

rightequals: RIGHTEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_RIGHTEQUALS; 
    $$->text = mycopystr(scanner); 
}

equalsequals: EQUALSEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_EQUALSEQUALS; 
    $$->text = mycopystr(scanner); 
}

bangequals: BANGEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_BANGEQUALS; 
    $$->text = mycopystr(scanner); 
}

carat: CARAT{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_CARAT; 
    $$->text = mycopystr(scanner); 
}

pipe: PIPE{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PIPE; 
    $$->text = mycopystr(scanner); 
}

ampamp: AMPAMP{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_AMPAMP; 
    $$->text = mycopystr(scanner); 
}

pipepipe: PIPEPIPE{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PIPEPIPE; 
    $$->text = mycopystr(scanner); 
}

question: QUESTION{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_QUESTION; 
    $$->text = mycopystr(scanner); 
}

colon: COLON{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_COLON; 
    $$->text = mycopystr(scanner); 
}

semicolon: SEMICOLON{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_SEMICOLON; 
    $$->text = mycopystr(scanner); 
}

ellipsis: ELLIPSIS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_ELLIPSIS; 
    $$->text = mycopystr(scanner); 
}

equals: EQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_EQUALS; 
    $$->text = mycopystr(scanner); 
}

starequals: STAREQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_STAREQUALS; 
    $$->text = mycopystr(scanner); 
}

slashequals: SLASHEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_SLASHEQUALS; 
    $$->text = mycopystr(scanner); 
}

percentequals: PERCENTEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PERCENTEQUALS; 
    $$->text = mycopystr(scanner); 
}

plusequals: PLUSEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PLUSEQUALS; 
    $$->text = mycopystr(scanner); 
}

minusequals: MINUSEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_MINUSEQUALS; 
    $$->text = mycopystr(scanner); 
}

leftleftequals: LEFTLEFTEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LEFTLEFTEQUALS; 
    $$->text = mycopystr(scanner); 
}

rightrightequals: RIGHTRIGHTEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_RIGHTRIGHTEQUALS; 
    $$->text = mycopystr(scanner); 
}

ampequals: AMPEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_AMPEQUALS; 
    $$->text = mycopystr(scanner); 
}

caratequals: CARATEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_CARATEQUALS; 
    $$->text = mycopystr(scanner); 
}

pipeequals: PIPEEQUALS{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PIPEEQUALS; 
    $$->text = mycopystr(scanner); 
}

comma: COMMA{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_COMMA; 
    $$->text = mycopystr(scanner); 
}

hash: HASH{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_HASH; 
    $$->text = mycopystr(scanner); 
}

hashhash: HASHHASH{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_HASHHASH; 
    $$->text = mycopystr(scanner); 
}

sizeof: SIZEOF{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_SIZEOF; 
    $$->text = mycopystr(scanner); 
}

alignof: ALIGNOF{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_ALIGNOF; 
    $$->text = mycopystr(scanner); 
}

other_char: OTHER_CHAR{ 
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_OTHER_CHAR; 
    $$->text = mycopystr(scanner); 
}

%%

void phase4error(PHASE4LTYPE *loc, yyscan_t scanner, const char *message)
{
    fprintf(stderr, "%s\n", message);
}

char *mycopystr(yyscan_t scanner)
{
    size_t leng = phase3get_leng(scanner);
    char *s = malloc(leng + 1);
    strncpy(s, phase3get_text(scanner), leng);
    s[leng] = '\0';
    return s;
}
