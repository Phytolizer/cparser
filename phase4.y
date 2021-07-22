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
    GENERIC "_Generic"
    STATIC "static"
    CONST "const"
    RESTRICT "restrict"
    VOLATILE "volatile"
    ATOMIC "_Atomic"
    VOID "void"
    CHAR "char"
    SHORT "short"
    INT "int"
    LONG "long"
    FLOAT "float"
    DOUBLE "double"
    SIGNED "signed"
    UNSIGNED "unsigned"
    BOOL "_Bool"
    COMPLEX "_Complex"
    STRUCT "struct"
    UNION "union"
    ENUM "enum"
    ALIGNAS "_Alignas"
    STATIC_ASSERT "_Static_assert"
    TYPEDEF "typedef"
    EXTERN "extern"
    THREAD_LOCAL "_Thread_local"
    AUTO "auto"
    REGISTER "register"
    INLINE "inline"
    NORETURN "_Noreturn"
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
    if
    ifdef
    ifndef
    elif
    else
    endif
    include
    define
    undef
    line
    pragma
    generic
    static
    const
    restrict
    volatile
    atomic
    void
    char
    short
    int
    long
    float
    double
    signed
    unsigned
    bool
    complex
    struct
    union
    enum
    alignas
    static_assert
    typedef
    extern
    thread_local
    auto
    register
    inline
    noreturn

%type <token_list> pp_tokens pp_tokens_opt replacement_list
%type <identifier_list> identifier_list identifier_list_opt

%%

file: group_opt { printf("EOF\n"); };

group_opt: group |;

group: group_part | group group_part;

group_part: if_section { printf("end if section (line %d)\n", @1.first_line); }
    | control_line { printf("end control line %d\n", @1.first_line); }
    | text_line { printf("macro references on line %d: %d\n", @1.first_line, mac_ref_count); }
    | hash non_directive { printf("end non-directive\n"); }
    ;

if_section: if_group elif_groups_opt else_group_opt endif_line;

elif_groups_opt: elif_groups |;

else_group_opt: else_group |;

if_group: hash if constant_expression EOL group_opt { printf("end if group (line %d)\n"); }
    | hash ifdef identifier EOL group_opt
    | hash ifndef identifier EOL group_opt
    ;

elif_groups: elif_group | elif_groups elif_group;

elif_group: hash elif constant_expression EOL group_opt;

else_group: hash else EOL group_opt;

endif_line: hash endif EOL;

control_line: hash include pp_tokens EOL { include_file($3); }
    | hash define identifier replacement_list EOL { define_simple_macro($3, $4); }
    | hash define identifier connected_lparen identifier_list_opt rparen replacement_list EOL { define_function_like_macro($3, $5, $7); }
    | hash define identifier connected_lparen ellipsis rparen replacement_list EOL { define_function_like_variadic_macro($3, $7); }
    | hash define identifier connected_lparen identifier_list comma ellipsis rparen replacement_list EOL { define_function_like_variadic_macro_with_args($3, $5, $9); }
    | hash undef identifier EOL { undefine_macro($3); }
    | hash line pp_tokens EOL
    | hash error pp_tokens_opt EOL
    | hash pragma pp_tokens_opt EOL
    | hash EOL
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
    | constant_logical_or_expression question constant_expression colon constant_conditional_expression;

constant_logical_or_expression: constant_logical_and_expression 
    | constant_logical_or_expression pipepipe constant_logical_and_expression;

constant_logical_and_expression: constant_inclusive_or_expression
    | constant_logical_and_expression ampamp constant_inclusive_or_expression;

constant_inclusive_or_expression: constant_exclusive_or_expression
    | constant_inclusive_or_expression pipe constant_exclusive_or_expression;

constant_exclusive_or_expression: constant_and_expression
    | constant_exclusive_or_expression carat constant_and_expression;

constant_and_expression: constant_equality_expression
    | constant_and_expression amp constant_equality_expression;

constant_equality_expression: constant_relational_expression
    | constant_equality_expression equality_operator constant_relational_expression;

equality_operator: equalsequals | bangequals;

constant_relational_expression: constant_shift_expression
    | constant_relational_expression relational_operator constant_shift_expression;

relational_operator: left | right | leftequals | rightequals;

constant_shift_expression: constant_additive_expression
    | constant_shift_expression shift_operator constant_additive_expression;

shift_operator: leftleft | rightright;

constant_additive_expression: constant_multiplicative_expression
    | constant_additive_expression additive_operator constant_multiplicative_expression;

additive_operator: plus | minus;

constant_multiplicative_expression: constant_cast_expression
    | constant_multiplicative_expression multiplicative_operator constant_cast_expression;

multiplicative_operator: star | slash | percent;

constant_cast_expression: constant_unary_expression
    | any_lparen type_name rparen constant_cast_expression;

constant_unary_expression: constant_postfix_expression
    | unary_operator constant_cast_expression
    | sizeof unary_expression
    | sizeof any_lparen type_name rparen
    | alignof any_lparen type_name rparen
    ;

unary_operator: minus | plus | tilde | amp | star | bang;

constant_postfix_expression: constant_primary_expression
    | constant_postfix_expression lbrack constant_expression rbrack
    | constant_postfix_expression dot identifier
    | constant_postfix_expression arrow identifier
    | any_lparen type_name rparen lbrace constant_initializer_list rbrace
    | any_lparen type_name rparen lbrace constant_initializer_list comma rbrace
    ;

constant_primary_expression: identifier
    | INTEGRAL_CONSTANT
    | FLOATING_CONSTANT
    | CHARACTER_CONSTANT
    | STRING_LITERAL
    | any_lparen constant_expression rparen
    ;

unary_expression: postfix_expression
    | unary_operator cast_expression
    | sizeof unary_expression
    | sizeof any_lparen type_name rparen
    | alignof any_lparen type_name rparen
    ;

cast_expression: unary_expression
    | any_lparen type_name rparen cast_expression;

postfix_expression: primary_expression
    | postfix_expression lbrack expression rbrack
    | postfix_expression dot identifier
    | postfix_expression arrow identifier
    | postfix_expression any_lparen argument_expression_list_opt rparen
    | postfix_expression plusplus
    | postfix_expression minusminus
    | any_lparen type_name rparen lbrace initializer_list rbrace
    | any_lparen type_name rparen lbrace initializer_list comma rbrace
    ;

primary_expression: identifier
    | integral_constant
    | floating_constant
    | character_constant
    | string_literal
    | any_lparen expression rparen
    | generic_selection
    ;

generic_selection: generic any_lparen assignment_expression comma generic_assoc_list rparen;

generic_assoc_list: generic_association | generic_assoc_list comma generic_association;

generic_association: type_name colon assignment_expression;

assignment_expression: conditional_expression | unary_expression assignment_operator assignment_expression;

assignment_operator: equals | starequals | slashequals | percentequals | plusequals | minusequals | leftleftequals | rightrightequals | ampequals | caratequals | pipeequals;

conditional_expression: logical_or_expression | logical_or_expression question expression colon conditional_expression;

logical_or_expression: logical_and_expression | logical_or_expression pipepipe logical_and_expression;

logical_and_expression: inclusive_or_expression | logical_and_expression ampamp inclusive_or_expression;

inclusive_or_expression: exclusive_or_expression | inclusive_or_expression pipe exclusive_or_expression;

exclusive_or_expression: and_expression | exclusive_or_expression carat and_expression;

and_expression: equality_expression | and_expression amp equality_expression;

equality_expression: relational_expression | equality_expression equality_operator relational_expression;

relational_expression: shift_expression | relational_expression relational_operator shift_expression;

shift_expression: additive_expression | shift_expression shift_operator additive_expression;

additive_expression: multiplicative_expression | additive_expression additive_operator multiplicative_expression;

multiplicative_expression: cast_expression | multiplicative_expression multiplicative_operator cast_expression;

expression: assignment_expression | expression comma assignment_expression;

argument_expression_list_opt: argument_expression_list |;

argument_expression_list: assignment_expression | argument_expression_list comma assignment_expression;

constant_initializer_list: designation_opt constant_initializer
    | constant_initializer_list comma designation_opt constant_initializer;

designation_opt: designation |;

constant_initializer: constant_expression
    | lbrace constant_initializer_list rbrace
    | lbrace constant_initializer_list comma rbrace
    ;

initializer_list: designation_opt initializer | initializer_list comma designation_opt initializer;

initializer: assignment_expression
    | lbrace initializer_list rbrace
    | lbrace initializer_list comma rbrace
    ;

designation: designator_list equals;

designator_list: designator | designator_list designator;

designator: lbrack constant_expression rbrack | dot identifier;

type_name: specifier_qualifier_list abstract_declarator_opt;

abstract_declarator_opt: abstract_declarator |;

abstract_declarator: pointer | pointer_opt direct_abstract_declarator;

direct_abstract_declarator: any_lparen abstract_declarator rparen
    | direct_abstract_declarator_opt lbrack type_qualifier_list_opt assignment_expression_opt rbrack
    | direct_abstract_declarator_opt lbrack static type_qualifier_list_opt assignment_expression rbrack
    | direct_abstract_declarator_opt lbrack type_qualifier_list static assignment_expression rbrack
    | direct_abstract_declarator_opt lbrack star rbrack
    | direct_abstract_declarator_opt any_lparen parameter_type_list_opt rparen
    ;

direct_abstract_declarator_opt: direct_abstract_declarator |;

assignment_expression_opt: assignment_expression |;

type_qualifier: const | restrict | volatile | atomic;

type_qualifier_list: type_qualifier | type_qualifier_list type_qualifier;

pointer_opt: pointer |;

pointer: star type_qualifier_list_opt | star type_qualifier_list_opt pointer;

type_qualifier_list_opt: type_qualifier_list |;

type_specifier: void
    | char
    | short
    | int
    | long
    | float
    | double
    | signed
    | unsigned
    | bool
    | complex
    | atomic_type_specifier
    | struct_or_union_specifier
    | enum_specifier
    | typedef_name
    ;

struct_or_union_specifier: struct_or_union identifier_opt lbrace struct_declaration_list rbrace
    | struct_or_union identifier
    ;

struct_or_union: struct | union;

struct_declaration_list: struct_declaration | struct_declaration_list struct_declaration;

struct_declaration: specifier_qualifier_list struct_declarator_list_opt semicolon
    | static_assert_declaration
    ;

specifier_qualifier_list: type_specifier specifier_qualifier_list_opt
    | type_qualifier specifier_qualifier_list_opt
    | alignment_specifier specifier_qualifier_list_opt
    ;

struct_declarator_list: struct_declarator | struct_declarator_list comma struct_declarator;

struct_declarator_list_opt: struct_declarator_list |;

struct_declarator: declarator | declarator_opt colon constant_expression;

declarator_opt: declarator |;

enum_specifier: enum identifier_opt lbrace enumerator_list comma_opt rbrace
    | enum identifier
    ;

comma_opt: comma |;

identifier_opt: identifier |;

enumerator_list: enumerator | enumerator_list comma enumerator;

enumerator: enumeration_constant | enumeration_constant equals constant_expression;

atomic_type_specifier: atomic any_lparen type_name rparen;

enumeration_constant: identifier;

alignment_specifier: alignas any_lparen type_name rparen | alignas any_lparen constant_expression rparen;

declarator: pointer_opt direct_declarator;

direct_declarator: identifier
    | any_lparen declarator rparen
    | direct_declarator lbrack type_qualifier_list_opt assignment_expression_opt rbrack
    | direct_declarator lbrack static type_qualifier_list_opt assignment_expression rbrack
    | direct_declarator lbrack type_qualifier_list static assignment_expression rbrack
    | direct_declarator lbrack type_qualifier_list_opt star rbrack
    | direct_declarator any_lparen parameter_type_list rparen
    | direct_declarator any_lparen identifier_list_opt rparen
    ;

specifier_qualifier_list_opt: specifier_qualifier_list |;

parameter_type_list_opt: parameter_type_list |;

parameter_type_list: parameter_list | parameter_list comma ellipsis;

parameter_list: parameter_declaration | parameter_list comma parameter_declaration;

parameter_declaration: declaration_specifiers declarator | declaration_specifiers abstract_declarator_opt;

typedef_name: identifier;

static_assert_declaration: static_assert any_lparen constant_expression comma string_literal rparen semicolon
    | static_assert any_lparen constant_expression rparen
    ;

declaration_specifiers: storage_class_specifier declaration_specifiers_opt
    | type_specifier declaration_specifiers_opt
    | type_qualifier declaration_specifiers_opt
    | function_specifier declaration_specifiers_opt
    | alignment_specifier declaration_specifiers_opt
    ;

declaration_specifiers_opt: declaration_specifiers |;

storage_class_specifier: typedef | extern | static | thread_local | auto | register;

function_specifier: inline | noreturn;

any_lparen: connected_lparen | lparen;

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

if: IF{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_IF; 
    $$->text = mycopystr(scanner); 
}

ifdef: IFDEF{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_IFDEF; 
    $$->text = mycopystr(scanner); 
}

ifndef: IFNDEF{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_IFNDEF; 
    $$->text = mycopystr(scanner); 
}

elif: ELIF{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_ELIF; 
    $$->text = mycopystr(scanner); 
}

else: ELSE{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_ELSE; 
    $$->text = mycopystr(scanner); 
}

endif: ENDIF{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_ENDIF; 
    $$->text = mycopystr(scanner); 
}

include: INCLUDE{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_INCLUDE; 
    $$->text = mycopystr(scanner); 
}

define: DEFINE{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_DEFINE; 
    $$->text = mycopystr(scanner); 
}

undef: UNDEF{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_UNDEF; 
    $$->text = mycopystr(scanner); 
}

line: LINE{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_LINE; 
    $$->text = mycopystr(scanner); 
}

pragma: PRAGMA{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_PRAGMA; 
    $$->text = mycopystr(scanner); 
}

noreturn: NORETURN{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_NORETURN; 
    $$->text = mycopystr(scanner); 
}

inline: INLINE{
    $$ = malloc(sizeof(struct token)); 
    $$->type = PP_INLINE; 
    $$->text = mycopystr(scanner); 
}

register: REGISTER{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_REGISTER;
    $$->text = mycopystr(scanner);
}

auto: AUTO{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_AUTO;
    $$->text = mycopystr(scanner);
}

thread_local: THREAD_LOCAL{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_THREAD_LOCAL;
    $$->text = mycopystr(scanner);
}

extern: EXTERN{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_EXTERN;
    $$->text = mycopystr(scanner);
}

typedef: TYPEDEF{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_TYPEDEF;
    $$->text = mycopystr(scanner);
}

static_assert: STATIC_ASSERT{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_STATIC_ASSERT;
    $$->text = mycopystr(scanner);
}

alignas: ALIGNAS{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_ALIGNAS;
    $$->text = mycopystr(scanner);
}

enum: ENUM{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_ENUM;
    $$->text = mycopystr(scanner);
}

union: UNION{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_UNION;
    $$->text = mycopystr(scanner);
}

struct: STRUCT{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_STRUCT;
    $$->text = mycopystr(scanner);
}

complex: COMPLEX{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_COMPLEX;
    $$->text = mycopystr(scanner);
}

bool: BOOL{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_BOOL;
    $$->text = mycopystr(scanner);
}

unsigned: UNSIGNED{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_UNSIGNED;
    $$->text = mycopystr(scanner);
}

signed: SIGNED{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_SIGNED;
    $$->text = mycopystr(scanner);
}

double: DOUBLE{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_DOUBLE;
    $$->text = mycopystr(scanner);
}

float: FLOAT{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_FLOAT;
    $$->text = mycopystr(scanner);
}

long: LONG{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_LONG;
    $$->text = mycopystr(scanner);
}

int: INT{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_INT;
    $$->text = mycopystr(scanner);
}

short: SHORT{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_SHORT;
    $$->text = mycopystr(scanner);
}

char: CHAR{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_CHAR;
    $$->text = mycopystr(scanner);
}

void: VOID{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_VOID;
    $$->text = mycopystr(scanner);
}

atomic: ATOMIC{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_ATOMIC;
    $$->text = mycopystr(scanner);
}

volatile: VOLATILE{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_VOLATILE;
    $$->text = mycopystr(scanner);
}

restrict: RESTRICT{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_RESTRICT;
    $$->text = mycopystr(scanner);
}

const: CONST{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_CONST;
    $$->text = mycopystr(scanner);
}

static: STATIC{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_STATIC;
    $$->text = mycopystr(scanner);
}

generic: GENERIC{
    $$ = malloc(sizeof(struct token));
    $$->type = PP_GENERIC;
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
