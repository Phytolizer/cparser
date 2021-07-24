/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 1



/* Substitute the type names.  */
#define YYSTYPE PHASE4STYPE
#define YYLTYPE PHASE4LTYPE
/* Substitute the variable and function names.  */
#define yyparse phase4parse
#define yylex   phase4lex
#define yyerror phase4error
#define yydebug phase4debug


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "phase4.tab.h"

/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_EOL = 3,                        /* EOL  */
  YYSYMBOL_HEADER_NAME = 4,                /* HEADER_NAME  */
  YYSYMBOL_UCHAR_NAME = 5,                 /* UCHAR_NAME  */
  YYSYMBOL_IDENTIFIER = 6,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGRAL_CONSTANT = 7,          /* INTEGRAL_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 8,          /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 9,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 10,            /* STRING_LITERAL  */
  YYSYMBOL_LBRACK = 11,                    /* "["  */
  YYSYMBOL_RBRACK = 12,                    /* "]"  */
  YYSYMBOL_CONNECTED_LPAREN = 13,          /* "=("  */
  YYSYMBOL_LPAREN = 14,                    /* "("  */
  YYSYMBOL_RPAREN = 15,                    /* ")"  */
  YYSYMBOL_LBRACE = 16,                    /* "{"  */
  YYSYMBOL_RBRACE = 17,                    /* "}"  */
  YYSYMBOL_DOT = 18,                       /* "."  */
  YYSYMBOL_ARROW = 19,                     /* "->"  */
  YYSYMBOL_PLUSPLUS = 20,                  /* "++"  */
  YYSYMBOL_MINUSMINUS = 21,                /* "--"  */
  YYSYMBOL_AMP = 22,                       /* "&"  */
  YYSYMBOL_STAR = 23,                      /* "*"  */
  YYSYMBOL_PLUS = 24,                      /* "+"  */
  YYSYMBOL_MINUS = 25,                     /* "-"  */
  YYSYMBOL_TILDE = 26,                     /* "~"  */
  YYSYMBOL_BANG = 27,                      /* "!"  */
  YYSYMBOL_SLASH = 28,                     /* "/"  */
  YYSYMBOL_PERCENT = 29,                   /* "%"  */
  YYSYMBOL_LEFTLEFT = 30,                  /* "<<"  */
  YYSYMBOL_RIGHTRIGHT = 31,                /* ">>"  */
  YYSYMBOL_LEFT = 32,                      /* "<"  */
  YYSYMBOL_RIGHT = 33,                     /* ">"  */
  YYSYMBOL_LEFTEQUALS = 34,                /* "<="  */
  YYSYMBOL_RIGHTEQUALS = 35,               /* ">="  */
  YYSYMBOL_EQUALSEQUALS = 36,              /* "=="  */
  YYSYMBOL_BANGEQUALS = 37,                /* "!="  */
  YYSYMBOL_CARAT = 38,                     /* "^"  */
  YYSYMBOL_PIPE = 39,                      /* "|"  */
  YYSYMBOL_AMPAMP = 40,                    /* "&&"  */
  YYSYMBOL_PIPEPIPE = 41,                  /* "||"  */
  YYSYMBOL_QUESTION = 42,                  /* "?"  */
  YYSYMBOL_COLON = 43,                     /* ":"  */
  YYSYMBOL_SEMICOLON = 44,                 /* ";"  */
  YYSYMBOL_ELLIPSIS = 45,                  /* "..."  */
  YYSYMBOL_EQUALS = 46,                    /* "="  */
  YYSYMBOL_STAREQUALS = 47,                /* "*="  */
  YYSYMBOL_SLASHEQUALS = 48,               /* "/="  */
  YYSYMBOL_PERCENTEQUALS = 49,             /* "%="  */
  YYSYMBOL_PLUSEQUALS = 50,                /* "+="  */
  YYSYMBOL_MINUSEQUALS = 51,               /* "-="  */
  YYSYMBOL_LEFTLEFTEQUALS = 52,            /* "<<="  */
  YYSYMBOL_RIGHTRIGHTEQUALS = 53,          /* ">>="  */
  YYSYMBOL_AMPEQUALS = 54,                 /* "&="  */
  YYSYMBOL_CARATEQUALS = 55,               /* "^="  */
  YYSYMBOL_PIPEEQUALS = 56,                /* "|="  */
  YYSYMBOL_COMMA = 57,                     /* ","  */
  YYSYMBOL_HASH = 58,                      /* "#"  */
  YYSYMBOL_HASHHASH = 59,                  /* "##"  */
  YYSYMBOL_INCLUDE = 60,                   /* "include"  */
  YYSYMBOL_DEFINE = 61,                    /* "define"  */
  YYSYMBOL_IF = 62,                        /* "if"  */
  YYSYMBOL_IFDEF = 63,                     /* "ifdef"  */
  YYSYMBOL_IFNDEF = 64,                    /* "ifndef"  */
  YYSYMBOL_ELIF = 65,                      /* "elif"  */
  YYSYMBOL_ELSE = 66,                      /* "else"  */
  YYSYMBOL_ENDIF = 67,                     /* "endif"  */
  YYSYMBOL_UNDEF = 68,                     /* "undef"  */
  YYSYMBOL_LINE = 69,                      /* "line"  */
  YYSYMBOL_ERROR = 70,                     /* "error"  */
  YYSYMBOL_PRAGMA = 71,                    /* "pragma"  */
  YYSYMBOL_SIZEOF = 72,                    /* "sizeof"  */
  YYSYMBOL_ALIGNOF = 73,                   /* "_Alignof"  */
  YYSYMBOL_GENERIC = 74,                   /* "_Generic"  */
  YYSYMBOL_STATIC = 75,                    /* "static"  */
  YYSYMBOL_CONST = 76,                     /* "const"  */
  YYSYMBOL_RESTRICT = 77,                  /* "restrict"  */
  YYSYMBOL_VOLATILE = 78,                  /* "volatile"  */
  YYSYMBOL_ATOMIC = 79,                    /* "_Atomic"  */
  YYSYMBOL_VOID = 80,                      /* "void"  */
  YYSYMBOL_CHAR = 81,                      /* "char"  */
  YYSYMBOL_SHORT = 82,                     /* "short"  */
  YYSYMBOL_INT = 83,                       /* "int"  */
  YYSYMBOL_LONG = 84,                      /* "long"  */
  YYSYMBOL_FLOAT = 85,                     /* "float"  */
  YYSYMBOL_DOUBLE = 86,                    /* "double"  */
  YYSYMBOL_SIGNED = 87,                    /* "signed"  */
  YYSYMBOL_UNSIGNED = 88,                  /* "unsigned"  */
  YYSYMBOL_BOOL = 89,                      /* "_Bool"  */
  YYSYMBOL_COMPLEX = 90,                   /* "_Complex"  */
  YYSYMBOL_STRUCT = 91,                    /* "struct"  */
  YYSYMBOL_UNION = 92,                     /* "union"  */
  YYSYMBOL_ENUM = 93,                      /* "enum"  */
  YYSYMBOL_ALIGNAS = 94,                   /* "_Alignas"  */
  YYSYMBOL_STATIC_ASSERT = 95,             /* "_Static_assert"  */
  YYSYMBOL_TYPEDEF = 96,                   /* "typedef"  */
  YYSYMBOL_EXTERN = 97,                    /* "extern"  */
  YYSYMBOL_THREAD_LOCAL = 98,              /* "_Thread_local"  */
  YYSYMBOL_AUTO = 99,                      /* "auto"  */
  YYSYMBOL_REGISTER = 100,                 /* "register"  */
  YYSYMBOL_INLINE = 101,                   /* "inline"  */
  YYSYMBOL_NORETURN = 102,                 /* "_Noreturn"  */
  YYSYMBOL_OTHER_CHAR = 103,               /* OTHER_CHAR  */
  YYSYMBOL_YYACCEPT = 104,                 /* $accept  */
  YYSYMBOL_file = 105,                     /* file  */
  YYSYMBOL_group_opt = 106,                /* group_opt  */
  YYSYMBOL_group = 107,                    /* group  */
  YYSYMBOL_group_part = 108,               /* group_part  */
  YYSYMBOL_if_section = 109,               /* if_section  */
  YYSYMBOL_elif_groups_opt = 110,          /* elif_groups_opt  */
  YYSYMBOL_else_group_opt = 111,           /* else_group_opt  */
  YYSYMBOL_if_group = 112,                 /* if_group  */
  YYSYMBOL_elif_groups = 113,              /* elif_groups  */
  YYSYMBOL_elif_group = 114,               /* elif_group  */
  YYSYMBOL_else_group = 115,               /* else_group  */
  YYSYMBOL_endif_line = 116,               /* endif_line  */
  YYSYMBOL_control_line = 117,             /* control_line  */
  YYSYMBOL_text_line = 118,                /* text_line  */
  YYSYMBOL_non_directive = 119,            /* non_directive  */
  YYSYMBOL_replacement_list = 120,         /* replacement_list  */
  YYSYMBOL_pp_tokens_opt = 121,            /* pp_tokens_opt  */
  YYSYMBOL_pp_tokens = 122,                /* pp_tokens  */
  YYSYMBOL_identifier_list_opt = 123,      /* identifier_list_opt  */
  YYSYMBOL_identifier_list = 124,          /* identifier_list  */
  YYSYMBOL_not_hash_symbol = 125,          /* not_hash_symbol  */
  YYSYMBOL_preprocessing_token = 126,      /* preprocessing_token  */
  YYSYMBOL_constant_expression = 127,      /* constant_expression  */
  YYSYMBOL_constant_conditional_expression = 128, /* constant_conditional_expression  */
  YYSYMBOL_constant_logical_or_expression = 129, /* constant_logical_or_expression  */
  YYSYMBOL_constant_logical_and_expression = 130, /* constant_logical_and_expression  */
  YYSYMBOL_constant_inclusive_or_expression = 131, /* constant_inclusive_or_expression  */
  YYSYMBOL_constant_exclusive_or_expression = 132, /* constant_exclusive_or_expression  */
  YYSYMBOL_constant_and_expression = 133,  /* constant_and_expression  */
  YYSYMBOL_constant_equality_expression = 134, /* constant_equality_expression  */
  YYSYMBOL_equality_operator = 135,        /* equality_operator  */
  YYSYMBOL_constant_relational_expression = 136, /* constant_relational_expression  */
  YYSYMBOL_relational_operator = 137,      /* relational_operator  */
  YYSYMBOL_constant_shift_expression = 138, /* constant_shift_expression  */
  YYSYMBOL_shift_operator = 139,           /* shift_operator  */
  YYSYMBOL_constant_additive_expression = 140, /* constant_additive_expression  */
  YYSYMBOL_additive_operator = 141,        /* additive_operator  */
  YYSYMBOL_constant_multiplicative_expression = 142, /* constant_multiplicative_expression  */
  YYSYMBOL_multiplicative_operator = 143,  /* multiplicative_operator  */
  YYSYMBOL_constant_cast_expression = 144, /* constant_cast_expression  */
  YYSYMBOL_constant_unary_expression = 145, /* constant_unary_expression  */
  YYSYMBOL_unary_operator = 146,           /* unary_operator  */
  YYSYMBOL_constant_postfix_expression = 147, /* constant_postfix_expression  */
  YYSYMBOL_constant_primary_expression = 148, /* constant_primary_expression  */
  YYSYMBOL_unary_expression = 149,         /* unary_expression  */
  YYSYMBOL_cast_expression = 150,          /* cast_expression  */
  YYSYMBOL_postfix_expression = 151,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 152,       /* primary_expression  */
  YYSYMBOL_generic_selection = 153,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 154,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 155,      /* generic_association  */
  YYSYMBOL_assignment_expression = 156,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 157,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 158,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 159,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 160,   /* logical_and_expression  */
  YYSYMBOL_inclusive_or_expression = 161,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 162,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 163,           /* and_expression  */
  YYSYMBOL_equality_expression = 164,      /* equality_expression  */
  YYSYMBOL_relational_expression = 165,    /* relational_expression  */
  YYSYMBOL_shift_expression = 166,         /* shift_expression  */
  YYSYMBOL_additive_expression = 167,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 168, /* multiplicative_expression  */
  YYSYMBOL_expression = 169,               /* expression  */
  YYSYMBOL_argument_expression_list_opt = 170, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 171, /* argument_expression_list  */
  YYSYMBOL_constant_initializer_list = 172, /* constant_initializer_list  */
  YYSYMBOL_designation_opt = 173,          /* designation_opt  */
  YYSYMBOL_constant_initializer = 174,     /* constant_initializer  */
  YYSYMBOL_initializer_list = 175,         /* initializer_list  */
  YYSYMBOL_initializer = 176,              /* initializer  */
  YYSYMBOL_designation = 177,              /* designation  */
  YYSYMBOL_designator_list = 178,          /* designator_list  */
  YYSYMBOL_designator = 179,               /* designator  */
  YYSYMBOL_type_name = 180,                /* type_name  */
  YYSYMBOL_abstract_declarator_opt = 181,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 182,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 183, /* direct_abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator_opt = 184, /* direct_abstract_declarator_opt  */
  YYSYMBOL_assignment_expression_opt = 185, /* assignment_expression_opt  */
  YYSYMBOL_type_qualifier = 186,           /* type_qualifier  */
  YYSYMBOL_type_qualifier_list = 187,      /* type_qualifier_list  */
  YYSYMBOL_pointer_opt = 188,              /* pointer_opt  */
  YYSYMBOL_pointer = 189,                  /* pointer  */
  YYSYMBOL_type_qualifier_list_opt = 190,  /* type_qualifier_list_opt  */
  YYSYMBOL_type_specifier = 191,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 192, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 193,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 194,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 195,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 196, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 197,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator_list_opt = 198, /* struct_declarator_list_opt  */
  YYSYMBOL_struct_declarator = 199,        /* struct_declarator  */
  YYSYMBOL_declarator_opt = 200,           /* declarator_opt  */
  YYSYMBOL_enum_specifier = 201,           /* enum_specifier  */
  YYSYMBOL_comma_opt = 202,                /* comma_opt  */
  YYSYMBOL_identifier_opt = 203,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 204,          /* enumerator_list  */
  YYSYMBOL_enumerator = 205,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 206,    /* atomic_type_specifier  */
  YYSYMBOL_enumeration_constant = 207,     /* enumeration_constant  */
  YYSYMBOL_alignment_specifier = 208,      /* alignment_specifier  */
  YYSYMBOL_declarator = 209,               /* declarator  */
  YYSYMBOL_direct_declarator = 210,        /* direct_declarator  */
  YYSYMBOL_specifier_qualifier_list_opt = 211, /* specifier_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list_opt = 212,  /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 213,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 214,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 215,    /* parameter_declaration  */
  YYSYMBOL_typedef_name = 216,             /* typedef_name  */
  YYSYMBOL_static_assert_declaration = 217, /* static_assert_declaration  */
  YYSYMBOL_declaration_specifiers = 218,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 219, /* declaration_specifiers_opt  */
  YYSYMBOL_storage_class_specifier = 220,  /* storage_class_specifier  */
  YYSYMBOL_function_specifier = 221,       /* function_specifier  */
  YYSYMBOL_any_lparen = 222,               /* any_lparen  */
  YYSYMBOL_identifier = 223,               /* identifier  */
  YYSYMBOL_header_name = 224,              /* header_name  */
  YYSYMBOL_integral_constant = 225,        /* integral_constant  */
  YYSYMBOL_floating_constant = 226,        /* floating_constant  */
  YYSYMBOL_character_constant = 227,       /* character_constant  */
  YYSYMBOL_string_literal = 228,           /* string_literal  */
  YYSYMBOL_lbrack = 229,                   /* lbrack  */
  YYSYMBOL_rbrack = 230,                   /* rbrack  */
  YYSYMBOL_connected_lparen = 231,         /* connected_lparen  */
  YYSYMBOL_lparen = 232,                   /* lparen  */
  YYSYMBOL_rparen = 233,                   /* rparen  */
  YYSYMBOL_lbrace = 234,                   /* lbrace  */
  YYSYMBOL_rbrace = 235,                   /* rbrace  */
  YYSYMBOL_dot = 236,                      /* dot  */
  YYSYMBOL_arrow = 237,                    /* arrow  */
  YYSYMBOL_plusplus = 238,                 /* plusplus  */
  YYSYMBOL_minusminus = 239,               /* minusminus  */
  YYSYMBOL_amp = 240,                      /* amp  */
  YYSYMBOL_star = 241,                     /* star  */
  YYSYMBOL_plus = 242,                     /* plus  */
  YYSYMBOL_minus = 243,                    /* minus  */
  YYSYMBOL_tilde = 244,                    /* tilde  */
  YYSYMBOL_bang = 245,                     /* bang  */
  YYSYMBOL_slash = 246,                    /* slash  */
  YYSYMBOL_percent = 247,                  /* percent  */
  YYSYMBOL_leftleft = 248,                 /* leftleft  */
  YYSYMBOL_rightright = 249,               /* rightright  */
  YYSYMBOL_left = 250,                     /* left  */
  YYSYMBOL_right = 251,                    /* right  */
  YYSYMBOL_leftequals = 252,               /* leftequals  */
  YYSYMBOL_rightequals = 253,              /* rightequals  */
  YYSYMBOL_equalsequals = 254,             /* equalsequals  */
  YYSYMBOL_bangequals = 255,               /* bangequals  */
  YYSYMBOL_carat = 256,                    /* carat  */
  YYSYMBOL_pipe = 257,                     /* pipe  */
  YYSYMBOL_ampamp = 258,                   /* ampamp  */
  YYSYMBOL_pipepipe = 259,                 /* pipepipe  */
  YYSYMBOL_question = 260,                 /* question  */
  YYSYMBOL_colon = 261,                    /* colon  */
  YYSYMBOL_semicolon = 262,                /* semicolon  */
  YYSYMBOL_ellipsis = 263,                 /* ellipsis  */
  YYSYMBOL_equals = 264,                   /* equals  */
  YYSYMBOL_starequals = 265,               /* starequals  */
  YYSYMBOL_slashequals = 266,              /* slashequals  */
  YYSYMBOL_percentequals = 267,            /* percentequals  */
  YYSYMBOL_plusequals = 268,               /* plusequals  */
  YYSYMBOL_minusequals = 269,              /* minusequals  */
  YYSYMBOL_leftleftequals = 270,           /* leftleftequals  */
  YYSYMBOL_rightrightequals = 271,         /* rightrightequals  */
  YYSYMBOL_ampequals = 272,                /* ampequals  */
  YYSYMBOL_caratequals = 273,              /* caratequals  */
  YYSYMBOL_pipeequals = 274,               /* pipeequals  */
  YYSYMBOL_comma = 275,                    /* comma  */
  YYSYMBOL_hash = 276,                     /* hash  */
  YYSYMBOL_hashhash = 277,                 /* hashhash  */
  YYSYMBOL_sizeof = 278,                   /* sizeof  */
  YYSYMBOL_alignof = 279,                  /* alignof  */
  YYSYMBOL_other_char = 280,               /* other_char  */
  YYSYMBOL_if = 281,                       /* if  */
  YYSYMBOL_ifdef = 282,                    /* ifdef  */
  YYSYMBOL_ifndef = 283,                   /* ifndef  */
  YYSYMBOL_elif = 284,                     /* elif  */
  YYSYMBOL_else = 285,                     /* else  */
  YYSYMBOL_endif = 286,                    /* endif  */
  YYSYMBOL_include = 287,                  /* include  */
  YYSYMBOL_define = 288,                   /* define  */
  YYSYMBOL_undef = 289,                    /* undef  */
  YYSYMBOL_line = 290,                     /* line  */
  YYSYMBOL_pragma = 291,                   /* pragma  */
  YYSYMBOL_noreturn = 292,                 /* noreturn  */
  YYSYMBOL_inline = 293,                   /* inline  */
  YYSYMBOL_register = 294,                 /* register  */
  YYSYMBOL_auto = 295,                     /* auto  */
  YYSYMBOL_thread_local = 296,             /* thread_local  */
  YYSYMBOL_extern = 297,                   /* extern  */
  YYSYMBOL_typedef = 298,                  /* typedef  */
  YYSYMBOL_static_assert = 299,            /* static_assert  */
  YYSYMBOL_alignas = 300,                  /* alignas  */
  YYSYMBOL_enum = 301,                     /* enum  */
  YYSYMBOL_union = 302,                    /* union  */
  YYSYMBOL_struct = 303,                   /* struct  */
  YYSYMBOL_complex = 304,                  /* complex  */
  YYSYMBOL_bool = 305,                     /* bool  */
  YYSYMBOL_unsigned = 306,                 /* unsigned  */
  YYSYMBOL_signed = 307,                   /* signed  */
  YYSYMBOL_double = 308,                   /* double  */
  YYSYMBOL_float = 309,                    /* float  */
  YYSYMBOL_long = 310,                     /* long  */
  YYSYMBOL_int = 311,                      /* int  */
  YYSYMBOL_short = 312,                    /* short  */
  YYSYMBOL_char = 313,                     /* char  */
  YYSYMBOL_void = 314,                     /* void  */
  YYSYMBOL_atomic = 315,                   /* atomic  */
  YYSYMBOL_volatile = 316,                 /* volatile  */
  YYSYMBOL_restrict = 317,                 /* restrict  */
  YYSYMBOL_const = 318,                    /* const  */
  YYSYMBOL_static = 319,                   /* static  */
  YYSYMBOL_generic = 320                   /* generic  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined PHASE4LTYPE_IS_TRIVIAL && PHASE4LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


/* Unqualified %code blocks.  */
#line 124 "phase4.y"

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

#line 444 "phase4.tab.c"

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif
#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (__4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  121
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  542
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  740
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   358

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if PHASE4DEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   255,   255,   257,   257,   259,   259,   261,   262,   263,
     264,   267,   269,   269,   271,   271,   273,   274,   275,   278,
     278,   280,   282,   284,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   298,   298,   300,   302,   304,   305,
     308,   313,   320,   321,   324,   329,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   480,   482,   483,   485,   486,
     488,   489,   491,   492,   494,   495,   497,   498,   500,   501,
     503,   503,   505,   506,   508,   508,   508,   508,   510,   511,
     513,   513,   515,   516,   518,   518,   520,   521,   523,   523,
     523,   525,   526,   528,   529,   530,   531,   532,   535,   535,
     535,   535,   535,   535,   537,   538,   539,   540,   541,   542,
     545,   546,   547,   548,   549,   550,   553,   554,   555,   556,
     557,   560,   561,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   574,   575,   576,   577,   578,   579,   580,   583,
     585,   585,   587,   589,   589,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   593,   593,   595,   595,
     597,   597,   599,   599,   601,   601,   603,   603,   605,   605,
     607,   607,   609,   609,   611,   611,   613,   613,   615,   615,
     617,   617,   619,   619,   621,   622,   624,   624,   626,   627,
     628,   631,   631,   633,   634,   635,   638,   640,   640,   642,
     642,   644,   646,   646,   648,   648,   650,   651,   652,   653,
     654,   655,   658,   658,   660,   660,   662,   662,   662,   662,
     664,   664,   666,   666,   668,   668,   670,   670,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   689,   690,   693,   693,   695,   695,   697,
     698,   701,   702,   703,   706,   706,   708,   708,   710,   710,
     712,   712,   714,   715,   718,   718,   720,   720,   722,   722,
     724,   724,   726,   728,   730,   730,   732,   734,   735,   736,
     737,   738,   739,   740,   741,   744,   744,   746,   746,   748,
     748,   750,   750,   752,   752,   754,   756,   757,   760,   761,
     762,   763,   764,   767,   767,   769,   769,   769,   769,   769,
     769,   771,   771,   773,   773,   775,   781,   787,   793,   799,
     805,   811,   817,   823,   829,   835,   841,   847,   853,   859,
     865,   871,   877,   883,   889,   895,   901,   907,   913,   919,
     925,   931,   937,   943,   949,   955,   961,   967,   973,   979,
     985,   991,   997,  1003,  1009,  1015,  1021,  1027,  1033,  1039,
    1045,  1051,  1057,  1063,  1069,  1075,  1081,  1087,  1093,  1099,
    1105,  1111,  1117,  1123,  1129,  1135,  1141,  1147,  1153,  1159,
    1165,  1171,  1177,  1183,  1189,  1195,  1201,  1207,  1213,  1219,
    1225,  1231,  1237,  1243,  1249,  1255,  1261,  1267,  1273,  1279,
    1285,  1291,  1297,  1303,  1309,  1315,  1321,  1327,  1333,  1339,
    1345,  1351,  1357
};
#endif

#define YYPACT_NINF (-580)
#define YYTABLE_NINF (-426)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3111,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,    43,  -580,  3201,
    -580,  -580,    17,  -580,  -580,  3849,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  2707,  -580,  -580,
    -580,  -580,  -580,    47,    56,  -580,    -2,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,    74,  3849,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  3849,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  2808,  4373,    84,    84,
    3849,    84,    84,  3849,  3849,    58,  -580,    62,  -580,  -580,
    4373,  -580,  -580,    90,  -580,  -580,  -580,  -580,  -580,  -580,
     119,  -580,   131,    98,   111,   107,   125,   158,   303,   261,
     299,   275,  -580,  -580,  4373,   106,  -580,  4239,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  2618,   329,   172,
     176,  2909,  3749,   178,  3010,   182,  -580,   135,  -580,   201,
     220,  -580,  3291,  4373,  4373,  4373,  4373,  4373,  4373,  4373,
    -580,  -580,  4373,  -580,  -580,  -580,  -580,  4373,  -580,  -580,
    4373,  -580,  -580,  4373,  -580,  -580,  -580,  -580,  4373,    84,
      84,   183,   183,  3109,  3199,  -580,    84,    13,  -580,  -580,
    3289,  -580,  4261,   329,    84,  -580,  -580,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,   334,  -580,
    -580,  -580,  -580,  2618,  -580,   197,  -580,  -580,  4216,  -580,
    -580,  -580,  -580,  -580,  2618,   329,   329,  3379,  3381,  3471,
    -580,   225,  -580,    54,  -580,  -580,  -580,  -580,   233,  3561,
    3651,  -580,    98,   187,   111,   107,   125,   158,   303,   261,
     299,   275,  -580,   228,  -580,  -580,  -580,  3949,  -580,  -580,
    -580,  -580,   216,   226,  -580,  -580,   349,    37,   238,  -580,
    4239,   216,   226,  3379,  -580,  -580,  4216,  2618,  2618,    84,
      84,  -580,  -580,  2163,  -580,  -580,  -580,   131,    98,   111,
     107,   125,   158,   303,   261,   299,   275,    19,   183,  4350,
    -580,  4216,  3379,  2618,   183,  -580,  -580,  -580,   183,   204,
     207,   183,  -580,  -580,  -580,  4373,  -580,  -580,   108,  4126,
     208,   258,   252,  -580,   238,   252,  -580,   183,   183,    84,
     183,   183,  -580,   183,   204,    10,  -580,  -580,  2618,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,
    2618,  2618,  2618,  2618,  2618,  2618,  2618,  2618,  2618,  2618,
    2618,  -580,  2618,   216,   183,   183,   204,  -580,  3849,   232,
      84,  3849,  -580,    30,  3949,  -580,    35,  -580,  4373,    84,
    4094,  -580,    14,  -580,   329,  3650,   168,   183,  -580,  -580,
    -580,  -580,   204,  -580,   235,  -580,  -580,  2589,  -580,  2618,
    -580,  -580,    98,    41,   111,   107,   125,   158,   303,   261,
     299,   275,  -580,  -580,   108,   216,  -580,  3379,   276,   183,
    -580,   292,  -580,   195,  -580,  -580,   108,  -580,  -580,   228,
    -580,  -580,  -580,   170,  -580,   204,   241,  -580,   187,   256,
    4373,  3948,  3976,  4005,   183,  -580,   204,  -580,    26,  4037,
    4065,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,   280,
    2618,   228,   238,  -580,   289,    84,  4373,  -580,  -580,  2618,
    2589,    30,    19,  -580,   187,  -580,  3849,  -580,  3949,  -580,
      30,  -580,   258,   252,  -580,    80,  -580,  4373,    19,  -580,
    -580,  -580,  -580,  -580,  3908,  -580,   244,  -580,  -580,  -580,
    2618,  -580,   228,  -580,  2618,  -580,  -580,  -580,  -580,  -580,
    -580,   108,  -580,   195,  -580,  3379,  2618,   316,  -580,  -580,
     195,  3650,   280,   183,  -580,  -580,  -580,   311,  -580,  -580,
     252,   228,  -580,   228,    30,  2589,  -580,  -580,  -580,  -580,
    -580,   183,  -580,   183,    40,   280,  2618,   238,  -580,   183,
    -580,  -580,  -580,   195,  -580,  -580,  -580,  2618,   228,   228,
    2618,   241,  -580,   228,  -580,  -580,   228,  -580,  -580,  -580
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,    35,   445,   447,   448,   449,   450,   451,   452,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   500,   501,   502,     0,     2,     3,
       5,     7,     0,     8,     9,    39,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,     1,     6,     0,     0,    19,     0,   446,   499,   541,
     540,   539,   538,   537,   536,   535,   534,   533,   532,   531,
     530,   529,   528,   527,   526,   525,   524,   523,   522,   521,
     520,   519,   518,   517,   516,   515,   514,     0,    38,    40,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   184,   183,   182,   181,
     180,   179,   178,   177,   176,   175,   174,   173,   172,   171,
     162,   170,   169,   160,   159,   158,   157,   156,   168,   161,
     167,   166,   165,   164,   163,    39,    33,   509,   510,   503,
     504,   505,   511,   512,   513,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,    14,     0,    20,   506,
       0,    34,    41,     0,    36,   241,   242,   243,   244,   453,
       0,   185,   186,   188,   190,   192,   194,   196,   198,   202,
     208,   212,   216,   221,     0,   223,   234,     0,   240,   443,
     444,   231,   232,   229,   228,   230,   233,     0,     0,     0,
       0,     0,    39,     0,     0,     0,    11,     0,   507,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
     200,   201,     0,   204,   205,   206,   207,     0,   210,   211,
       0,   214,   215,     0,   218,   219,   220,   224,     0,     0,
       0,     0,     0,   416,   416,   370,   397,   353,   371,   369,
     416,   372,   240,     0,   397,   376,   375,   368,   367,   366,
     365,   364,   363,   362,   361,   360,   359,   358,   349,   348,
     347,   346,   542,     0,   225,   246,   253,   268,     0,   262,
     263,   264,   265,   266,     0,     0,     0,     0,     0,     0,
      24,     0,    37,    43,    29,    30,    32,   508,     0,     0,
       0,    16,   189,     0,   191,   193,   195,   197,   199,   203,
     209,   213,   217,     0,   236,   237,   245,     0,   415,   382,
     425,   381,     0,   374,   331,   332,   343,   352,   357,   383,
       0,     0,   393,     0,   251,   247,     0,   311,     0,     0,
       0,   258,   259,   251,   306,   308,   273,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,     0,     0,   262,
     248,     0,     0,     0,     0,    17,    18,    25,     0,    42,
      45,     0,    23,    22,    21,     0,   235,   222,   317,     0,
     335,     0,   353,   350,   356,   354,   349,     0,     0,     0,
       0,     0,   312,     0,   310,     0,   255,   256,     0,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,   226,     0,     0,     0,   227,    39,     0,
       0,    39,   187,     0,     0,   316,     0,   327,     0,     0,
       0,   377,   353,   380,     0,   418,   357,     0,   351,   355,
     405,   404,   395,   398,   400,   403,   402,     0,   257,     0,
     254,   274,   289,     0,   291,   293,   295,   297,   299,   301,
     303,   305,   307,   309,   317,   249,   250,     0,     0,     0,
      44,     0,   238,   317,   318,   314,   317,   328,   326,     0,
     330,   378,   373,     0,   352,   386,     0,   384,     0,   388,
       0,   434,   434,   434,     0,   417,   419,   421,   353,   434,
     434,   442,   441,   440,   439,   438,   436,   435,   437,   356,
     345,     0,   357,   336,     0,   394,     0,   252,   313,     0,
       0,     0,     0,   270,     0,    26,    39,    27,     0,   239,
       0,   329,   406,   353,   407,   353,   379,     0,     0,   433,
     430,   429,   432,   341,     0,   424,   343,   423,   428,   431,
       0,   344,     0,   340,     0,   392,   399,   401,   287,   323,
     321,   317,   260,   317,   269,     0,     0,     0,   315,   319,
     317,    43,   357,     0,   385,   389,   427,     0,   422,   420,
     353,     0,   337,     0,     0,     0,   261,   271,   272,    28,
     320,     0,    42,     0,   425,   356,   345,   357,   408,     0,
     339,   338,   324,   317,   322,   414,   413,     0,     0,   232,
       0,     0,   325,     0,   409,   412,     0,   426,   411,   410
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -580,  -580,   -98,  -580,   267,  -580,  -580,  -580,  -580,  -580,
     206,  -580,  -580,  -580,  -580,  -580,  -469,   -59,  -101,  -358,
    -528,  -580,  -144,  1852,  -145,  -580,    21,    39,    42,    38,
      44,  -438,    46,  -437,    34,  -431,    49,  -423,    31,  -416,
    -275,  -580,  1972,  -580,  -580,  1925,  -379,  -580,  -580,  -580,
    -580,  -316,  -377,  -580,  -265,  -580,  -143,  -146,  -141,  -140,
    -147,  -138,  -148,  -139,  -133,  -410,  -580,  -580,  -213,  -563,
    -263,  -291,  -314,  -580,  -580,  -135,  -282,  -218,  -491,  -580,
    -580,  -309,  1855,  -521,  -348,  -487,  -543,  -511,  -580,  -580,
    -580,  -132,  -343,  -580,  -580,  -236,  -580,  -580,  -580,    60,
    -580,  -206,  -580,  -580,  -477,  -579,  -580,  -329,  -580,  -257,
    -580,  -224,  -580,  -580,  -535,  -346,  -580,  -580,  2046,   693,
    -580,  1513,  1625,  1689,   229,     7,     0,   133,  1706,    29,
     140,    27,    23,  1387,  1510,  1798,  1302,   203,  1330,  1383,
    1719,  1735,   196,   254,   397,   575,   582,   775,   826,  1186,
      73,   237,     5,   394,   889,   970,   999,    71,     3,    32,
      51,    48,   819,  1024,  1040,  1277,  1381,  1421,  1504,  1579,
    1668,   282,   676,  -580,  1088,  1208,    45,  -580,  -580,  -580,
    -580,  -580,  -580,  -580,  -580,  -580,  -580,  -580,  -386,   227,
     297,   302,   989,  1050,  1196,  -471,   -63,   -25,    -4,    20,
     855,   865,   943,  1005,  1616,  1749,  1780,  1826,  1850,  1879,
    1922,   568,  1939,  2014,  2019,  1915,  -580
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    57,    58,    59,    60,    61,   123,   265,    62,   124,
     125,   266,   316,    63,    64,   255,   401,   402,   158,   478,
     479,    65,   159,   594,   281,   282,   283,   284,   285,   286,
     287,   329,   288,   332,   289,   337,   290,   340,   291,   343,
     292,   293,   383,   295,   296,   453,   454,   385,   386,   387,
     642,   643,   455,   508,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   503,   504,   543,   544,
     595,   641,   680,   545,   546,   547,   644,   434,   435,   490,
     491,   672,   353,   494,   603,   437,   495,   354,   355,   356,
     550,   551,   357,   605,   606,   607,   608,   358,   634,   432,
     562,   563,   359,   564,   360,   609,   652,   429,   614,   615,
     616,   617,   361,   553,   659,   660,   619,   620,   446,   389,
     161,   390,   391,   392,   393,   166,   167,   299,   300,   169,
     170,   171,   172,   173,   174,   175,   301,   302,   303,   304,
     305,   306,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   394,   395,   216,   257,   258,   259,
     270,   319,   408,   260,   261,   262,   263,   264,   217,   218,
     219,   220,   221,   222,   223,   224,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   244,   396
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   557,   225,   103,   445,    97,   157,    71,   559,   436,
     428,   428,   590,   630,   272,   352,   256,   428,   554,   347,
     618,   640,     8,    77,   526,   431,   527,    76,  -333,    74,
     648,   439,   104,   528,    10,   629,    18,    18,   505,   667,
     226,  -333,   529,   121,   612,   120,     7,    12,   106,    18,
     530,   105,  -334,    13,   225,   -45,  -333,  -391,  -387,    72,
       2,   227,   103,   269,    97,   604,    71,    52,   422,   588,
     502,   102,   591,    95,   693,    53,    52,   271,   613,   554,
    -334,    41,    77,  -333,    38,   228,    76,    52,    74,   674,
       2,   104,   226,   321,  -334,   225,   536,    52,    52,    40,
     612,   612,   612,    18,   120,    53,   468,   106,   612,   612,
     105,   573,   272,   227,    53,   474,    53,     7,   640,     7,
     705,   693,   322,  -391,    13,    14,    13,   648,   318,   618,
     102,   571,    95,   226,   613,   613,   613,   228,    35,   526,
      75,   527,   613,   613,   436,    33,   552,    17,   528,   716,
      34,   582,   487,   612,   227,   583,   618,   529,   498,   311,
     705,   500,   314,   712,   501,   530,   604,   272,   604,   621,
     272,   715,    36,    37,   730,   398,     2,   687,   228,   399,
     612,   404,   225,   279,     9,   406,   273,   613,   637,   534,
     535,    18,   638,   225,    31,    32,    87,   225,    10,    75,
     225,   225,   407,    82,   409,   315,     7,   552,     7,   557,
     279,     9,    12,    13,   613,    13,    14,    15,    16,  -342,
     226,  -342,  -342,   410,   411,   621,   621,   621,   477,    70,
      38,   226,    11,   621,   621,   226,   482,    96,   226,   226,
       8,   227,  -396,   129,   130,   131,   132,   133,   225,   225,
       2,   225,   227,   671,    88,    87,   227,   279,     9,   227,
     227,    52,    82,   679,    52,   228,   661,   662,   177,     7,
     666,   279,     9,   668,   669,    18,   228,    40,   621,   645,
     228,    41,   116,   228,   228,    39,   226,   226,    70,   226,
     327,    25,    26,   701,   165,   647,    96,   703,    18,  -390,
     475,   476,   348,    23,    24,   621,    12,   227,   227,   708,
     227,   483,   484,    88,   130,   131,   132,   133,   349,   709,
     177,     6,    72,    19,    20,   103,   122,    97,   679,    71,
     268,   228,   228,   711,   228,    27,    28,    29,    30,   671,
     542,   116,   279,     9,   412,    77,   165,   279,     9,    76,
     733,    74,   666,   736,   104,   129,   130,   131,   132,   133,
     330,   177,   279,     9,   414,   416,   419,   120,   415,   707,
     106,   421,   417,   105,   678,   418,   574,   572,   577,   579,
     426,   427,   575,   650,   576,   688,   420,   165,   578,   580,
     704,   724,   448,   102,    98,    95,   581,    89,    72,    72,
     665,   103,   103,    97,    97,    71,    71,   728,   449,    72,
      72,   597,   103,   103,    97,    97,    71,    71,   601,   694,
     327,    77,    77,   486,   441,    76,    76,    74,    74,   676,
     104,   104,    77,    77,   713,   481,    76,    76,    74,    74,
     698,   104,   104,   120,   120,   403,   106,   106,   177,   105,
     105,     0,     0,    98,   120,   120,    89,   106,   106,   177,
     105,   105,    75,   177,     0,   524,   177,   177,     0,   102,
     102,    95,    95,     0,   165,   225,     0,     0,   225,     0,
     102,   102,    95,    95,   485,   165,     0,   345,     0,   165,
     330,     0,   165,   165,   344,   548,   531,   533,   556,     0,
       0,   510,     0,   537,   509,   570,     0,   538,     0,     0,
     541,   549,     0,   226,   177,   177,   226,   177,    87,     0,
       0,     0,     0,     0,   331,    82,   560,   561,     0,   566,
     567,     0,   568,     0,   227,   330,     0,   227,    75,    75,
     165,   165,     0,   165,     0,   346,     0,     0,     0,    75,
      75,    70,     0,   548,     0,     0,     0,     0,   228,    96,
     438,   228,     0,   585,   586,     0,     0,   488,     0,   549,
     592,   589,   489,     0,     0,    90,    88,   602,     0,     0,
     524,   499,    91,   225,     0,     0,   633,     0,     0,     0,
       0,   548,     0,     0,    87,    87,     0,   598,     0,   651,
     548,    82,    82,   548,   116,    87,    87,   549,     0,   656,
       0,     0,    82,    82,     0,   636,   549,   345,   646,   549,
     649,   226,     0,     0,   344,     0,     0,    70,    70,     0,
       0,   673,     0,   240,    90,    96,    96,     0,    70,    70,
       0,    91,   227,   663,   639,     0,    96,    96,     0,     0,
     330,     0,    88,    88,   331,     0,     0,     0,     0,   692,
       0,   675,   345,    88,    88,     0,   228,     0,   682,   344,
       0,   684,   702,   584,     0,   346,   117,   689,   326,   657,
     116,   116,     0,     0,   596,   240,   338,   696,   548,     0,
     548,   116,   116,    66,     0,   438,   699,   548,   438,   331,
       0,   720,     0,   721,   549,     0,   549,   584,     0,     0,
     706,     0,     0,   549,     0,   686,    98,   710,     0,    89,
     346,     0,   718,     0,     0,   584,   240,     0,   734,   735,
     548,   722,     0,   738,   737,   117,   739,     0,   126,     0,
     725,   177,   726,     0,   177,     0,   549,     0,   731,   532,
     732,     0,    66,     0,     0,   438,     0,     0,   160,   631,
       0,   539,   540,     0,     0,     0,     0,   165,     0,     0,
     165,     0,     0,     0,     0,    92,     0,   345,     0,     0,
     681,     0,   622,     0,   344,     0,   569,   532,   596,     0,
       0,     0,    98,    98,     0,    89,    89,     0,     0,   267,
     126,     0,     0,    98,    98,     0,    89,    89,   326,     0,
     160,     0,     0,   240,   331,     0,   338,     0,   587,   107,
       0,   438,     0,     0,   240,   593,    93,     0,   240,     0,
       0,   240,   240,     0,    92,   346,     0,     0,   622,   622,
     622,     0,     0,     0,   635,   681,   622,   622,     0,   177,
       0,   160,   623,   523,     0,   532,   438,   624,   438,     0,
       0,   338,     0,     0,   339,     0,     0,     0,     0,     0,
     333,     0,     0,     0,     0,   165,     0,     0,   107,   240,
     240,     0,   240,     0,     0,    93,     0,   655,     0,    99,
       0,   622,     0,     0,     0,     0,     0,    90,   664,     0,
       0,     0,     0,   438,    91,     0,     0,     0,   623,   623,
     623,     0,     0,   624,   624,   624,   623,   623,   622,   729,
     229,   624,   624,   683,   685,     0,   719,     0,     0,     0,
     230,     0,   690,     0,     0,     0,     0,     0,   160,     0,
     697,   317,     0,     0,     0,     0,     0,     0,    99,   160,
     298,   309,   310,   160,   312,   313,   160,   160,     0,     0,
       0,   623,     0,   298,     0,     0,   624,     0,   523,     0,
     100,     0,   229,    90,    90,     0,   338,     0,     0,     0,
      91,    91,   230,     0,    90,    90,   723,   298,   623,     0,
     362,    91,    91,   624,   339,     0,   540,     0,   117,   101,
     333,     0,     0,     0,   160,   160,   496,   160,   231,     0,
       0,     0,     0,   229,     0,    66,   298,   298,   298,   298,
     298,   298,   298,   230,   108,   298,     0,     0,     0,   100,
     298,     0,     0,   298,     0,     0,   298,     0,     0,   339,
     109,   298,   424,   425,     0,   333,   430,   430,     0,   433,
       0,     0,     0,   430,     0,     0,     0,   442,   101,     0,
     231,     0,   496,   334,     0,     0,     0,     0,     0,     0,
     232,     0,     0,     0,   117,   117,     0,     0,     0,     0,
       0,   469,     0,   108,     0,   117,   117,     0,   118,     0,
     430,    66,    66,     0,     0,     0,   480,    92,     0,   109,
     229,   231,    66,    66,     0,     0,   240,     0,     0,   240,
     230,   229,     0,     0,   335,   229,     0,     0,   229,   229,
     298,   230,   232,     0,   496,   230,     0,     0,   230,   230,
       0,     0,     0,   362,     0,     0,   430,     0,     0,   469,
       0,   107,   506,   507,     0,     0,     0,   118,    93,     0,
       0,     0,     0,   214,   339,     0,     0,     0,     0,     0,
     333,     0,     0,   232,   469,   430,   229,   229,     0,   229,
       0,     0,   325,    92,    92,     0,   230,   230,   298,   230,
       0,     0,   430,     0,    92,    92,    94,     0,   231,     0,
       0,     0,   565,   334,     0,     0,     0,   496,     0,   231,
     496,     0,     0,   231,     0,   214,   231,   231,   119,     0,
       0,    99,     0,     0,   240,     0,     0,   107,   107,     0,
       0,     0,     0,     0,    93,    93,     0,     0,   107,   107,
       0,   160,     0,   480,   160,    93,    93,   298,   334,     0,
       0,   298,   600,   430,   335,    94,   214,     0,   430,     0,
     232,     0,   323,     0,   231,   231,     0,   231,     0,     0,
     496,   232,     0,     0,     0,   232,     0,   119,   232,   232,
       0,     0,   511,   215,     0,     0,     0,   110,     0,     0,
     430,   324,     0,   496,     0,   496,     0,    99,    99,   335,
       0,     0,   100,     0,     0,     0,   654,     0,    99,    99,
       0,   325,    81,   298,   430,   430,   430,     0,     0,     0,
       0,     0,   430,   430,     0,     0,   232,   232,     0,   232,
       0,   101,     0,     0,     0,   215,     0,     0,   565,   298,
      83,     0,     0,   214,     0,     0,   110,     0,     0,   160,
       0,   298,     0,     0,   214,   307,   108,   522,   214,     0,
     298,   214,   214,   334,     0,     0,     0,   430,   307,   654,
       0,    81,   109,     0,     0,     0,   215,   176,   100,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   430,   100,
     100,   111,   307,    84,   714,   307,     0,    78,     0,    83,
       0,     0,     0,   229,     0,   178,   229,   101,   101,   214,
     214,     0,   214,   230,   335,     0,   230,     0,   101,   101,
     118,   307,   307,   307,   307,   307,   307,   307,     0,   176,
     307,   112,   108,   108,     0,   307,     0,   520,   307,     0,
       0,   307,     0,   108,   108,     0,   307,     0,   109,   109,
     111,     0,    84,     0,     0,     0,    78,   178,   179,   109,
     109,     0,     0,   215,     0,     0,   521,     0,     0,     0,
     176,   522,     0,     0,   215,   308,     0,     0,   215,     0,
       0,   215,   215,     0,   336,     0,     0,   512,   308,     0,
     112,   231,     0,     0,   231,     0,   118,   118,   178,     0,
       0,     0,     0,   513,     0,     0,     0,   118,   118,     0,
     179,   229,   308,     0,   113,   308,     0,     0,    94,     0,
      79,   230,     0,    67,     0,   307,     0,     0,     0,   215,
     215,     0,   215,     0,     0,     0,     0,     0,   307,     0,
     119,   308,   308,   308,   308,   308,   308,   308,     0,     0,
     308,   179,     0,   232,   625,   308,   232,   176,   308,     0,
       0,   308,     0,     0,     0,     0,   308,     0,   176,     0,
       0,     0,   176,   113,     0,   176,   176,     0,     0,    79,
       0,     0,    67,   307,     0,   178,     0,     0,   162,   114,
       0,     0,     0,     0,    94,    94,   178,     0,   328,   231,
     178,     0,     0,   178,   178,    94,    94,     0,     0,   110,
     625,   625,   625,     0,   336,   626,   119,   119,   625,   625,
       0,     0,     0,   176,   176,     0,   176,   119,   119,     0,
     341,     0,     0,     0,    81,    68,   214,     0,   179,   214,
     162,     0,   307,     0,     0,   308,   307,     0,   114,   179,
       0,   178,   178,   179,   178,     0,   179,   179,   308,   336,
       0,   232,    83,   625,     0,     0,     0,     0,     0,     0,
       0,   626,   626,   626,     0,     0,     0,     0,   115,   626,
     626,   162,     0,   342,     0,   110,   110,     0,     0,     0,
     625,   233,   350,     0,    68,     0,   110,   110,     0,    69,
     163,     0,     0,   308,   179,   179,     0,   179,   307,     0,
      81,    81,     0,   111,     0,    84,    73,     0,     0,    78,
       0,    81,    81,     0,   626,     0,     0,     0,   328,    85,
       0,     0,     0,     0,   307,     0,     0,   115,    83,    83,
     514,     0,     0,   233,   214,    86,   307,     0,     0,    83,
      83,   626,   163,   112,     0,   307,   215,     0,    69,   215,
     341,   627,   308,     0,   164,     0,   308,     0,   162,     0,
       0,     0,     0,   525,   336,    73,     0,     0,     0,   162,
       0,   168,   450,   162,   233,     0,   162,   162,    85,   111,
     111,    84,    84,   163,   180,    78,    78,     0,     0,     0,
     111,   111,    84,    84,    86,   341,    78,    78,    80,     0,
     181,     0,     0,   342,     0,     0,   164,   627,   627,   627,
       0,     0,     0,     0,   234,   627,   627,     0,   308,   112,
     112,     0,     0,   168,   162,   162,   113,   162,     0,     0,
     112,   112,    79,     0,   515,    67,   180,     0,     0,     0,
     176,     0,     0,   176,   308,   235,     0,   164,   342,     0,
       0,     0,   181,     0,   215,     0,   308,    80,     0,     0,
     627,   233,     0,     0,   168,   308,   234,     0,   178,     0,
     163,   178,   233,     0,   516,     0,   233,   180,   525,   233,
     233,   163,     0,     0,     0,   163,     0,   627,   163,   163,
       0,   236,     0,   181,     0,   451,     0,   235,     0,     0,
       0,   114,   113,   113,     0,     0,     0,   234,    79,    79,
     341,    67,    67,   113,   113,   237,     0,     0,     0,    79,
      79,   179,    67,    67,   179,     0,     0,   233,   233,     0,
     233,     0,     0,     0,   164,     0,   163,   163,   235,   163,
       0,     0,     0,   236,   238,   164,     0,    68,   176,   164,
       0,   168,   164,   164,     0,     0,     0,   517,     0,     0,
       0,     0,   168,   342,   180,     0,   168,   237,     0,   168,
     168,     0,     0,     0,     0,   180,   178,   114,   114,   180,
     181,     0,   180,   180,   236,     0,     0,   239,   114,   114,
     115,   181,     0,     0,   234,   181,   238,     0,   181,   181,
     164,   164,     0,   164,   241,   234,     0,     0,   237,   234,
       0,    69,   234,   234,     0,     0,     0,   168,   168,     0,
     168,     0,     0,    68,    68,   235,     0,     0,    73,   179,
     180,   180,   518,   180,    68,    68,   235,   238,     0,   239,
     235,    85,     0,   235,   235,     0,   181,   181,     0,   181,
       0,   162,     0,     0,   162,     0,   241,    86,     0,     0,
     234,   234,     0,   234,     0,     0,   115,   115,     0,     0,
       0,   236,     0,     0,     0,     0,     0,   115,   115,   242,
     239,     0,   236,     0,   243,     0,   236,    69,    69,   236,
     236,   235,   235,     0,   235,   237,     0,   241,    69,    69,
       0,     0,     0,     0,    73,    73,   237,     0,     0,   280,
     237,     0,     0,   237,   237,    73,    73,    85,    85,     0,
      80,   519,   320,     0,   238,     0,     0,     0,    85,    85,
       0,   242,     0,    86,    86,   238,   243,   236,   236,   238,
     236,     0,   238,   238,    86,    86,     0,     0,     0,   351,
       0,     0,     0,     0,   233,     0,     0,   233,     0,   162,
       0,   237,   237,   163,   237,     0,   163,   239,     0,     0,
       0,     0,   242,     0,     0,     0,   413,   243,   239,     0,
       0,     0,   239,   452,   241,   239,   239,     0,     0,     0,
     238,   238,     0,   238,     0,   241,    80,    80,     0,   241,
     423,     0,   241,   241,     0,     0,     0,    80,    80,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,   164,     0,   294,
     164,     0,   384,   239,   239,     0,   239,     0,     0,     0,
       0,     0,   294,     0,   168,     0,     0,   168,     0,     0,
     241,   241,     0,   241,     0,     0,     0,   180,     0,   242,
     180,     0,   233,     0,   243,     0,   294,     0,     0,   294,
     242,   163,     0,   181,   242,   243,   181,   242,   242,   243,
       0,     0,   243,   243,     0,     0,     0,   234,     0,     0,
     234,     0,   497,   493,     0,   294,   294,   294,   294,   294,
     294,   294,     0,   297,   294,     0,     0,     0,   444,   294,
       0,     0,   294,     0,     0,   294,   297,     0,   235,   470,
     294,   235,     0,     0,     0,   242,   242,     0,   242,     0,
     243,   243,     0,   243,     0,   164,     0,     0,     0,     0,
     297,     0,     0,   297,     0,     0,     0,     0,     0,   558,
       0,     0,   168,   388,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   180,     0,   236,     0,   297,
     297,   297,   297,   297,   297,   297,     0,     0,   297,     0,
       0,   181,     0,   297,     0,     0,   297,     0,   237,   297,
       0,   237,     0,     0,   297,   234,     0,     0,     0,   294,
     599,     0,     0,     0,     0,     0,     0,     0,     0,   440,
     611,   493,   294,     0,     0,     0,     0,   238,     0,     0,
     238,     0,     0,     0,   443,     0,   235,     0,     0,     0,
       0,   447,     0,     0,     0,     0,     0,     0,     0,     0,
     471,   472,   473,     0,     0,   444,     0,   444,   444,   444,
     444,   444,   444,   444,   444,   444,     0,   294,     0,     0,
     239,     0,   658,   239,     0,     0,   611,   611,   611,     0,
     628,   632,   236,   297,   611,   611,     0,   241,     0,     0,
     241,     0,   492,     0,   558,     0,   297,   493,   677,     0,
       0,     0,   444,     0,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   695,
       0,     0,     0,     0,     0,     0,   294,     0,     0,   611,
     294,     0,     0,     0,     0,   238,   628,   628,   628,     0,
       0,   297,     0,     0,   628,   628,     0,   555,     0,     0,
       0,     0,     0,     0,   670,     0,   611,   493,     0,     0,
       0,     0,   242,     0,     0,   242,     0,   243,     0,     0,
     243,     0,     0,     0,   444,     0,     0,     0,   239,     0,
     558,     0,   493,     0,     0,     0,     0,     0,     0,   628,
       0,     0,   294,     0,     0,   241,     0,     0,     0,     0,
     297,     0,     0,     0,   297,     2,     3,     4,     5,     6,
     610,     0,   279,     9,     0,    11,   628,   717,   294,     0,
       0,    17,    18,    19,    20,    21,    22,     0,     0,     0,
     294,     0,     0,     0,     2,     3,     4,     5,     6,   294,
     727,   279,     9,     0,     0,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,     0,     0,     0,   653,
       0,     0,     0,     0,     0,     0,   297,     0,     0,     0,
     242,    54,    55,   382,     0,   243,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   297,     0,     0,     0,     0,     0,     0,     0,
      54,    55,   382,     0,   297,     0,     0,     0,   691,     0,
       0,     0,     0,   297,     0,     0,     0,     0,   245,     0,
     246,   127,   700,     2,     3,     4,     5,     6,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   128,   247,   248,   249,
     250,   251,     0,     0,     0,   252,   253,     0,   254,    54,
      55,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      56,   274,   127,     0,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    56,   400,   127,     0,     2,     3,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    56,   405,   127,     0,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    56,     1,     2,     0,     2,     3,     4,
       5,     6,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     1,     2,     0,     2,     3,     4,
       5,     6,     7,     8,    56,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     1,     2,     0,     2,     3,     4,
       5,     6,     7,     8,    56,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     1,     2,     0,     2,     3,     4,
       5,     6,     7,     8,    56,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     1,     0,     0,     2,     3,     4,
       5,     6,     7,     8,    56,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     2,     3,     4,
       5,     6,     7,     8,    56,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     2,     3,     4,
       5,     6,     7,     8,    56,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,   150,   151,   152,   153,
     154,   155,   156,   127,    56,     2,     3,     4,     5,     6,
       7,     8,   279,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    56,   127,     0,     2,     3,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   128,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    54,    55,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    56,    40,     2,     2,   275,   276,   277,   278,
       0,     0,   279,     9,     0,    11,     0,     0,     0,     0,
       0,    17,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     2,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,   150,   151,   152,   153,   154,   155,
     156,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     2,   150,   151,   152,   153,   154,   155,
     156,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     2,   150,   151,   152,   153,   154,   155,   156,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       2,   150,   151,   152,   153,   154,   155,   156,     0,     0,
       0,    12,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     2,   150,   151,   152,   153,   154,   155,   156,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   150,   151,   152,   153,   154,   155,   156,     0,     0,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     2,     3,     4,     5,     6,     0,     0,   279,
       9,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,     0,     2,   275,   276,   277,   278,
       0,     0,   279,     9,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    19,    20,    21,    22,  -425,     0,     0,
       0,     0,  -240,     0,  -425,  -425,  -240,     0,     0,     0,
       0,     0,     0,     0,  -240,     0,     0,     0,    54,    55,
     382,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    54,    55,     0,     0,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,  -425,  -425,  -425,
    -425,  -425,  -425,  -425,  -425,  -425,  -425,  -425,  -425,  -425,
    -425,  -425,  -425,  -425,  -425,  -425,  -425,     0,     0,     0,
       0,  -262,     0,  -262,  -262,  -262,     0,     0,     0,     0,
       0,     0,     0,  -262,     0,     0,     0,     0,     0,     2,
     275,   276,   277,   278,     0,     0,   279,     9,     0,     0,
       0,     0,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -425,  -425,  -425,  -425,
    -425,  -425,  -425,  -425,  -425,  -425,  -425,  -425,  -425,  -425,
    -425,  -425,  -425,  -425,  -425,    54,    55
};

static const yytype_int16 yycheck[] =
{
       0,   492,    65,     0,   383,     0,    65,     0,   495,   357,
     353,   354,   540,   556,   158,   297,   117,   360,   489,   294,
     555,   584,    12,     0,   462,   354,   463,     0,    15,     0,
     593,   360,     0,   464,    15,   556,    23,    23,   448,   618,
      65,    15,   465,     0,   555,     0,    11,    17,     0,    23,
     466,     0,    15,    18,   117,    15,    43,    43,    44,    59,
       6,    65,    59,    65,    59,   552,    59,    57,   343,   538,
     447,     0,   541,     0,   653,    58,    57,     3,   555,   550,
      43,    46,    59,    57,    43,    65,    59,    57,    59,   632,
       6,    59,   117,     3,    57,   158,   473,    57,    57,    45,
     611,   612,   613,    23,    59,    58,   388,    59,   619,   620,
      59,   521,   256,   117,    58,   397,    58,    11,   681,    11,
     683,   700,     3,    43,    18,    19,    18,   690,    66,   664,
      59,   508,    59,   158,   611,   612,   613,   117,    40,   577,
       0,   578,   619,   620,   492,    38,   489,    22,   579,   692,
      39,   530,   427,   664,   158,   532,   691,   580,   440,   260,
     723,   443,   263,   691,   446,   581,   653,   311,   655,   555,
     314,   692,    41,    42,   717,     3,     6,   646,   158,     3,
     691,     3,   245,    13,    14,     3,   245,   664,   567,   471,
     472,    23,   569,   256,    36,    37,     0,   260,    15,    59,
     263,   264,    67,     0,     3,   264,    11,   550,    11,   700,
      13,    14,    17,    18,   691,    18,    19,    20,    21,    11,
     245,    13,    14,     3,   322,   611,   612,   613,     3,     0,
      43,   256,    16,   619,   620,   260,     3,     0,   263,   264,
      12,   245,    16,    75,    76,    77,    78,    79,   311,   312,
       6,   314,   256,   630,     0,    59,   260,    13,    14,   263,
     264,    57,    59,   640,    57,   245,   612,   613,    65,    11,
     618,    13,    14,   619,   620,    23,   256,    45,   664,     3,
     260,    46,     0,   263,   264,    44,   311,   312,    59,   314,
     285,    30,    31,   670,    65,     3,    59,   674,    23,    43,
     398,   399,   295,    28,    29,   691,    17,   311,   312,   686,
     314,   409,   410,    59,    76,    77,    78,    79,   295,     3,
     117,    10,   322,    24,    25,   322,    59,   322,   705,   322,
     124,   311,   312,   691,   314,    32,    33,    34,    35,   716,
     485,    59,    13,    14,   323,   322,   117,    13,    14,   322,
     727,   322,   700,   730,   322,    75,    76,    77,    78,    79,
     287,   158,    13,    14,   325,   327,   332,   322,   326,   685,
     322,   340,   328,   322,   639,   329,   522,   520,   525,   527,
     351,   352,   523,   596,   524,   648,   337,   158,   526,   528,
     681,   705,   385,   322,     0,   322,   529,     0,   398,   399,
     618,   398,   399,   398,   399,   398,   399,   716,   385,   409,
     410,   546,   409,   410,   409,   410,   409,   410,   550,   655,
     415,   398,   399,   423,   364,   398,   399,   398,   399,   635,
     398,   399,   409,   410,   691,   403,   409,   410,   409,   410,
     664,   409,   410,   398,   399,   312,   398,   399,   245,   398,
     399,    -1,    -1,    59,   409,   410,    59,   409,   410,   256,
     409,   410,   322,   260,    -1,   460,   263,   264,    -1,   398,
     399,   398,   399,    -1,   245,   538,    -1,    -1,   541,    -1,
     409,   410,   409,   410,   413,   256,    -1,   291,    -1,   260,
     417,    -1,   263,   264,   291,   488,   467,   468,   491,    -1,
      -1,   453,    -1,   474,   453,   505,    -1,   478,    -1,    -1,
     481,   488,    -1,   538,   311,   312,   541,   314,   322,    -1,
      -1,    -1,    -1,    -1,   287,   322,   497,   498,    -1,   500,
     501,    -1,   503,    -1,   538,   462,    -1,   541,   398,   399,
     311,   312,    -1,   314,    -1,   291,    -1,    -1,    -1,   409,
     410,   322,    -1,   546,    -1,    -1,    -1,    -1,   538,   322,
     357,   541,    -1,   534,   535,    -1,    -1,   427,    -1,   546,
     543,   539,   432,    -1,    -1,     0,   322,   550,    -1,    -1,
     575,   441,     0,   646,    -1,    -1,   557,    -1,    -1,    -1,
      -1,   584,    -1,    -1,   398,   399,    -1,   546,    -1,   599,
     593,   398,   399,   596,   322,   409,   410,   584,    -1,   606,
      -1,    -1,   409,   410,    -1,   564,   593,   421,   589,   596,
     593,   646,    -1,    -1,   421,    -1,    -1,   398,   399,    -1,
      -1,   631,    -1,    65,    59,   398,   399,    -1,   409,   410,
      -1,    59,   646,   614,   573,    -1,   409,   410,    -1,    -1,
     577,    -1,   398,   399,   417,    -1,    -1,    -1,    -1,   652,
      -1,   634,   466,   409,   410,    -1,   646,    -1,   641,   466,
      -1,   642,   672,   533,    -1,   421,     0,   650,   284,   608,
     398,   399,    -1,    -1,   544,   117,   289,   658,   681,    -1,
     683,   409,   410,     0,    -1,   492,   664,   690,   495,   462,
      -1,   701,    -1,   703,   681,    -1,   683,   567,    -1,    -1,
     683,    -1,    -1,   690,    -1,   644,   322,   690,    -1,   322,
     466,    -1,   693,    -1,    -1,   585,   158,    -1,   728,   729,
     723,   704,    -1,   733,   731,    59,   736,    -1,    62,    -1,
     711,   538,   713,    -1,   541,    -1,   723,    -1,   719,   467,
     723,    -1,    59,    -1,    -1,   552,    -1,    -1,    65,   556,
      -1,   479,   480,    -1,    -1,    -1,    -1,   538,    -1,    -1,
     541,    -1,    -1,    -1,    -1,     0,    -1,   581,    -1,    -1,
     640,    -1,   555,    -1,   581,    -1,   504,   505,   648,    -1,
      -1,    -1,   398,   399,    -1,   398,   399,    -1,    -1,   123,
     124,    -1,    -1,   409,   410,    -1,   409,   410,   414,    -1,
     117,    -1,    -1,   245,   577,    -1,   419,    -1,   536,     0,
      -1,   618,    -1,    -1,   256,   543,     0,    -1,   260,    -1,
      -1,   263,   264,    -1,    59,   581,    -1,    -1,   611,   612,
     613,    -1,    -1,    -1,   562,   705,   619,   620,    -1,   646,
      -1,   158,   555,   459,    -1,   573,   653,   555,   655,    -1,
      -1,   464,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,
     288,    -1,    -1,    -1,    -1,   646,    -1,    -1,    59,   311,
     312,    -1,   314,    -1,    -1,    59,    -1,   605,    -1,     0,
      -1,   664,    -1,    -1,    -1,    -1,    -1,   322,   616,    -1,
      -1,    -1,    -1,   700,   322,    -1,    -1,    -1,   611,   612,
     613,    -1,    -1,   611,   612,   613,   619,   620,   691,   716,
      65,   619,   620,   641,   642,    -1,   697,    -1,    -1,    -1,
      65,    -1,   650,    -1,    -1,    -1,    -1,    -1,   245,    -1,
     658,   265,    -1,    -1,    -1,    -1,    -1,    -1,    59,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,    -1,
      -1,   664,    -1,   270,    -1,    -1,   664,    -1,   574,    -1,
       0,    -1,   117,   398,   399,    -1,   579,    -1,    -1,    -1,
     398,   399,   117,    -1,   409,   410,   704,   294,   691,    -1,
     297,   409,   410,   691,   419,    -1,   714,    -1,   322,     0,
     418,    -1,    -1,    -1,   311,   312,   438,   314,    65,    -1,
      -1,    -1,    -1,   158,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   158,     0,   332,    -1,    -1,    -1,    59,
     337,    -1,    -1,   340,    -1,    -1,   343,    -1,    -1,   464,
       0,   348,   349,   350,    -1,   463,   353,   354,    -1,   356,
      -1,    -1,    -1,   360,    -1,    -1,    -1,   364,    59,    -1,
     117,    -1,   494,   288,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,   398,   399,    -1,    -1,    -1,    -1,
      -1,   388,    -1,    59,    -1,   409,   410,    -1,     0,    -1,
     397,   398,   399,    -1,    -1,    -1,   403,   322,    -1,    59,
     245,   158,   409,   410,    -1,    -1,   538,    -1,    -1,   541,
     245,   256,    -1,    -1,   288,   260,    -1,    -1,   263,   264,
     427,   256,   117,    -1,   556,   260,    -1,    -1,   263,   264,
      -1,    -1,    -1,   440,    -1,    -1,   443,    -1,    -1,   446,
      -1,   322,   449,   450,    -1,    -1,    -1,    59,   322,    -1,
      -1,    -1,    -1,    65,   579,    -1,    -1,    -1,    -1,    -1,
     578,    -1,    -1,   158,   471,   472,   311,   312,    -1,   314,
      -1,    -1,   283,   398,   399,    -1,   311,   312,   485,   314,
      -1,    -1,   489,    -1,   409,   410,     0,    -1,   245,    -1,
      -1,    -1,   499,   418,    -1,    -1,    -1,   629,    -1,   256,
     632,    -1,    -1,   260,    -1,   117,   263,   264,     0,    -1,
      -1,   322,    -1,    -1,   646,    -1,    -1,   398,   399,    -1,
      -1,    -1,    -1,    -1,   398,   399,    -1,    -1,   409,   410,
      -1,   538,    -1,   540,   541,   409,   410,   544,   463,    -1,
      -1,   548,   549,   550,   418,    59,   158,    -1,   555,    -1,
     245,    -1,   282,    -1,   311,   312,    -1,   314,    -1,    -1,
     692,   256,    -1,    -1,    -1,   260,    -1,    59,   263,   264,
      -1,    -1,   453,    65,    -1,    -1,    -1,     0,    -1,    -1,
     587,   282,    -1,   715,    -1,   717,    -1,   398,   399,   463,
      -1,    -1,   322,    -1,    -1,    -1,   603,    -1,   409,   410,
      -1,   412,     0,   610,   611,   612,   613,    -1,    -1,    -1,
      -1,    -1,   619,   620,    -1,    -1,   311,   312,    -1,   314,
      -1,   322,    -1,    -1,    -1,   117,    -1,    -1,   635,   636,
       0,    -1,    -1,   245,    -1,    -1,    59,    -1,    -1,   646,
      -1,   648,    -1,    -1,   256,   257,   322,   458,   260,    -1,
     657,   263,   264,   578,    -1,    -1,    -1,   664,   270,   666,
      -1,    59,   322,    -1,    -1,    -1,   158,    65,   398,   399,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   685,   409,
     410,     0,   294,     0,   691,   297,    -1,     0,    -1,    59,
      -1,    -1,    -1,   538,    -1,    65,   541,   398,   399,   311,
     312,    -1,   314,   538,   578,    -1,   541,    -1,   409,   410,
     322,   323,   324,   325,   326,   327,   328,   329,    -1,   117,
     332,     0,   398,   399,    -1,   337,    -1,   457,   340,    -1,
      -1,   343,    -1,   409,   410,    -1,   348,    -1,   398,   399,
      59,    -1,    59,    -1,    -1,    -1,    59,   117,    65,   409,
     410,    -1,    -1,   245,    -1,    -1,   457,    -1,    -1,    -1,
     158,   572,    -1,    -1,   256,   257,    -1,    -1,   260,    -1,
      -1,   263,   264,    -1,   288,    -1,    -1,   453,   270,    -1,
      59,   538,    -1,    -1,   541,    -1,   398,   399,   158,    -1,
      -1,    -1,    -1,   453,    -1,    -1,    -1,   409,   410,    -1,
     117,   646,   294,    -1,     0,   297,    -1,    -1,   322,    -1,
       0,   646,    -1,     0,    -1,   427,    -1,    -1,    -1,   311,
     312,    -1,   314,    -1,    -1,    -1,    -1,    -1,   440,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,    -1,    -1,
     332,   158,    -1,   538,   555,   337,   541,   245,   340,    -1,
      -1,   343,    -1,    -1,    -1,    -1,   348,    -1,   256,    -1,
      -1,    -1,   260,    59,    -1,   263,   264,    -1,    -1,    59,
      -1,    -1,    59,   485,    -1,   245,    -1,    -1,    65,     0,
      -1,    -1,    -1,    -1,   398,   399,   256,    -1,   286,   646,
     260,    -1,    -1,   263,   264,   409,   410,    -1,    -1,   322,
     611,   612,   613,    -1,   418,   555,   398,   399,   619,   620,
      -1,    -1,    -1,   311,   312,    -1,   314,   409,   410,    -1,
     290,    -1,    -1,    -1,   322,     0,   538,    -1,   245,   541,
     117,    -1,   544,    -1,    -1,   427,   548,    -1,    59,   256,
      -1,   311,   312,   260,   314,    -1,   263,   264,   440,   463,
      -1,   646,   322,   664,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   611,   612,   613,    -1,    -1,    -1,    -1,     0,   619,
     620,   158,    -1,   290,    -1,   398,   399,    -1,    -1,    -1,
     691,    65,   295,    -1,    59,    -1,   409,   410,    -1,     0,
      65,    -1,    -1,   485,   311,   312,    -1,   314,   610,    -1,
     398,   399,    -1,   322,    -1,   322,     0,    -1,    -1,   322,
      -1,   409,   410,    -1,   664,    -1,    -1,    -1,   416,     0,
      -1,    -1,    -1,    -1,   636,    -1,    -1,    59,   398,   399,
     453,    -1,    -1,   117,   646,     0,   648,    -1,    -1,   409,
     410,   691,   117,   322,    -1,   657,   538,    -1,    59,   541,
     420,   555,   544,    -1,    65,    -1,   548,    -1,   245,    -1,
      -1,    -1,    -1,   461,   578,    59,    -1,    -1,    -1,   256,
      -1,    65,   385,   260,   158,    -1,   263,   264,    59,   398,
     399,   398,   399,   158,    65,   398,   399,    -1,    -1,    -1,
     409,   410,   409,   410,    59,   465,   409,   410,     0,    -1,
      65,    -1,    -1,   420,    -1,    -1,   117,   611,   612,   613,
      -1,    -1,    -1,    -1,    65,   619,   620,    -1,   610,   398,
     399,    -1,    -1,   117,   311,   312,   322,   314,    -1,    -1,
     409,   410,   322,    -1,   453,   322,   117,    -1,    -1,    -1,
     538,    -1,    -1,   541,   636,    65,    -1,   158,   465,    -1,
      -1,    -1,   117,    -1,   646,    -1,   648,    59,    -1,    -1,
     664,   245,    -1,    -1,   158,   657,   117,    -1,   538,    -1,
     245,   541,   256,    -1,   453,    -1,   260,   158,   576,   263,
     264,   256,    -1,    -1,    -1,   260,    -1,   691,   263,   264,
      -1,    65,    -1,   158,    -1,   385,    -1,   117,    -1,    -1,
      -1,   322,   398,   399,    -1,    -1,    -1,   158,   398,   399,
     580,   398,   399,   409,   410,    65,    -1,    -1,    -1,   409,
     410,   538,   409,   410,   541,    -1,    -1,   311,   312,    -1,
     314,    -1,    -1,    -1,   245,    -1,   311,   312,   158,   314,
      -1,    -1,    -1,   117,    65,   256,    -1,   322,   646,   260,
      -1,   245,   263,   264,    -1,    -1,    -1,   453,    -1,    -1,
      -1,    -1,   256,   580,   245,    -1,   260,   117,    -1,   263,
     264,    -1,    -1,    -1,    -1,   256,   646,   398,   399,   260,
     245,    -1,   263,   264,   158,    -1,    -1,    65,   409,   410,
     322,   256,    -1,    -1,   245,   260,   117,    -1,   263,   264,
     311,   312,    -1,   314,    65,   256,    -1,    -1,   158,   260,
      -1,   322,   263,   264,    -1,    -1,    -1,   311,   312,    -1,
     314,    -1,    -1,   398,   399,   245,    -1,    -1,   322,   646,
     311,   312,   453,   314,   409,   410,   256,   158,    -1,   117,
     260,   322,    -1,   263,   264,    -1,   311,   312,    -1,   314,
      -1,   538,    -1,    -1,   541,    -1,   117,   322,    -1,    -1,
     311,   312,    -1,   314,    -1,    -1,   398,   399,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   409,   410,    65,
     158,    -1,   256,    -1,    65,    -1,   260,   398,   399,   263,
     264,   311,   312,    -1,   314,   245,    -1,   158,   409,   410,
      -1,    -1,    -1,    -1,   398,   399,   256,    -1,    -1,   257,
     260,    -1,    -1,   263,   264,   409,   410,   398,   399,    -1,
     322,   453,   270,    -1,   245,    -1,    -1,    -1,   409,   410,
      -1,   117,    -1,   398,   399,   256,   117,   311,   312,   260,
     314,    -1,   263,   264,   409,   410,    -1,    -1,    -1,   297,
      -1,    -1,    -1,    -1,   538,    -1,    -1,   541,    -1,   646,
      -1,   311,   312,   538,   314,    -1,   541,   245,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,   324,   158,   256,    -1,
      -1,    -1,   260,   385,   245,   263,   264,    -1,    -1,    -1,
     311,   312,    -1,   314,    -1,   256,   398,   399,    -1,   260,
     348,    -1,   263,   264,    -1,    -1,    -1,   409,   410,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   538,    -1,   257,
     541,    -1,   307,   311,   312,    -1,   314,    -1,    -1,    -1,
      -1,    -1,   270,    -1,   538,    -1,    -1,   541,    -1,    -1,
     311,   312,    -1,   314,    -1,    -1,    -1,   538,    -1,   245,
     541,    -1,   646,    -1,   245,    -1,   294,    -1,    -1,   297,
     256,   646,    -1,   538,   260,   256,   541,   263,   264,   260,
      -1,    -1,   263,   264,    -1,    -1,    -1,   538,    -1,    -1,
     541,    -1,   440,   438,    -1,   323,   324,   325,   326,   327,
     328,   329,    -1,   257,   332,    -1,    -1,    -1,   383,   337,
      -1,    -1,   340,    -1,    -1,   343,   270,    -1,   538,   394,
     348,   541,    -1,    -1,    -1,   311,   312,    -1,   314,    -1,
     311,   312,    -1,   314,    -1,   646,    -1,    -1,    -1,    -1,
     294,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,   494,
      -1,    -1,   646,   307,   308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   538,   646,    -1,   541,    -1,   323,
     324,   325,   326,   327,   328,   329,    -1,    -1,   332,    -1,
      -1,   646,    -1,   337,    -1,    -1,   340,    -1,   538,   343,
      -1,   541,    -1,    -1,   348,   646,    -1,    -1,    -1,   427,
     548,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,
     555,   556,   440,    -1,    -1,    -1,    -1,   538,    -1,    -1,
     541,    -1,    -1,    -1,   378,    -1,   646,    -1,    -1,    -1,
      -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     394,   395,   396,    -1,    -1,   520,    -1,   522,   523,   524,
     525,   526,   527,   528,   529,   530,    -1,   485,    -1,    -1,
     538,    -1,   610,   541,    -1,    -1,   611,   612,   613,    -1,
     555,   556,   646,   427,   619,   620,    -1,   538,    -1,    -1,
     541,    -1,   436,    -1,   629,    -1,   440,   632,   636,    -1,
      -1,    -1,   567,    -1,    -1,    -1,   646,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   657,
      -1,    -1,    -1,    -1,    -1,    -1,   544,    -1,    -1,   664,
     548,    -1,    -1,    -1,    -1,   646,   611,   612,   613,    -1,
      -1,   485,    -1,    -1,   619,   620,    -1,   491,    -1,    -1,
      -1,    -1,    -1,    -1,   629,    -1,   691,   692,    -1,    -1,
      -1,    -1,   538,    -1,    -1,   541,    -1,   538,    -1,    -1,
     541,    -1,    -1,    -1,   639,    -1,    -1,    -1,   646,    -1,
     715,    -1,   717,    -1,    -1,    -1,    -1,    -1,    -1,   664,
      -1,    -1,   610,    -1,    -1,   646,    -1,    -1,    -1,    -1,
     544,    -1,    -1,    -1,   548,     6,     7,     8,     9,    10,
     554,    -1,    13,    14,    -1,    16,   691,   692,   636,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
     648,    -1,    -1,    -1,     6,     7,     8,     9,    10,   657,
     715,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,   603,
      -1,    -1,    -1,    -1,    -1,    -1,   610,    -1,    -1,    -1,
     646,    72,    73,    74,    -1,   646,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   636,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,   648,    -1,    -1,    -1,   652,    -1,
      -1,    -1,    -1,   657,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,   666,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    69,    -1,    71,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     3,     6,    -1,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     6,    -1,     6,     7,     8,
       9,    10,    11,    12,   103,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     6,    -1,     6,     7,     8,
       9,    10,    11,    12,   103,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     6,    -1,     6,     7,     8,
       9,    10,    11,    12,   103,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,    -1,    -1,     6,     7,     8,
       9,    10,    11,    12,   103,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,     8,
       9,    10,    11,    12,   103,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     6,     6,     7,     8,
       9,    10,    11,    12,   103,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    96,    97,    98,    99,
     100,   101,   102,     4,   103,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    45,     6,     6,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,     6,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,     6,    96,    97,    98,    99,   100,   101,
     102,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     6,    96,    97,    98,    99,   100,   101,   102,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       6,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    17,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     6,    96,    97,    98,    99,   100,   101,   102,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     6,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    -1,     6,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,     6,    -1,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    72,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    72,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     6,    -1,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    72,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    12,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    72,    73,   103,   105,   106,   107,
     108,   109,   112,   117,   118,   125,   223,   225,   226,   227,
     228,   229,   230,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   278,   279,
     280,     0,   108,   110,   113,   114,   276,     4,    59,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   121,   122,   126,
     223,   224,   225,   226,   227,   228,   229,   230,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     1,     3,    60,    61,    62,
      63,    64,    68,    69,    71,   119,   122,   281,   282,   283,
     287,   288,   289,   290,   291,   111,   115,   276,   114,    65,
     284,     3,   126,   121,     3,     7,     8,     9,    10,    13,
     127,   128,   129,   130,   131,   132,   133,   134,   136,   138,
     140,   142,   144,   145,   146,   147,   148,   222,   223,   231,
     232,   240,   241,   242,   243,   244,   245,   278,   279,   223,
     223,   122,   223,   223,   122,   121,   116,   276,    66,   285,
     127,     3,     3,   259,   260,   258,   257,   256,   240,   135,
     254,   255,   137,   250,   251,   252,   253,   139,   248,   249,
     141,   242,   243,   143,   241,   246,   247,   144,   229,   236,
     237,   127,   180,   186,   191,   192,   193,   196,   201,   206,
     208,   216,   223,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    74,   146,   149,   151,   152,   153,   222,   223,
     225,   226,   227,   228,   278,   279,   320,   222,     3,     3,
       3,   120,   121,   231,     3,     3,     3,    67,   286,     3,
       3,   106,   130,   127,   131,   132,   133,   134,   136,   138,
     140,   142,   144,   127,   223,   223,   233,   233,   196,   211,
     223,   211,   203,   223,   181,   182,   188,   189,   241,   211,
     222,   203,   223,   222,   149,   150,   222,   222,   229,   236,
     237,   238,   239,   149,   150,   156,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   180,   223,
     149,   222,   222,   222,   180,   106,   106,     3,   123,   124,
     223,   263,     3,   106,   106,   261,   230,   144,   234,   234,
     183,   184,   222,   186,   187,   190,   315,   127,   180,   234,
     180,   180,   156,   170,   171,   169,   223,   223,   157,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     259,   260,   258,   257,   256,   240,   135,   137,   139,   141,
     143,   233,   275,   233,   180,   180,   156,   233,   233,   275,
     275,   233,   128,   172,   173,   177,   178,   179,   229,   236,
     194,   195,   196,   217,   299,   222,   229,   182,   186,   189,
     233,   233,   204,   205,   207,   223,   233,   233,   233,   275,
     230,   156,   160,   169,   161,   162,   163,   164,   165,   166,
     167,   168,   150,   156,   234,   233,   233,   275,   120,   263,
     124,   120,   235,   275,   127,   174,   234,   179,   264,   127,
     223,   195,   235,   188,   189,   197,   198,   199,   200,   209,
     222,   186,   191,   208,   212,   213,   214,   215,   218,   220,
     221,   292,   293,   294,   295,   296,   297,   298,   319,   187,
     190,   241,   319,   233,   202,   275,   264,   150,   156,   261,
     173,   175,   154,   155,   180,     3,   233,     3,   173,   235,
     172,   230,   210,   222,   223,   275,   262,   261,   127,   218,
     219,   219,   219,   233,   275,   181,   188,   209,   219,   219,
     319,   156,   185,   230,   190,   235,   205,   127,   158,   156,
     176,   234,   235,   275,   233,   275,   261,   120,   174,   235,
     275,   222,   229,   209,   199,   127,   233,   275,   215,   263,
     222,   156,   230,   156,   175,   173,   235,   155,   156,     3,
     235,   123,   124,   213,   223,   187,   190,   319,   233,   228,
     230,   230,   235,   275,   176,   233,   233,   319,   185,   241,
     190,   233,   235,   156,   230,   230,   156,   262,   230,   230
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   104,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   109,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   114,   115,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     143,   144,   144,   145,   145,   145,   145,   145,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   147,   147,
     148,   148,   148,   148,   148,   148,   149,   149,   149,   149,
     149,   150,   150,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   152,   152,   152,   152,   152,   152,   152,   153,
     154,   154,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     174,   175,   175,   176,   176,   176,   177,   178,   178,   179,
     179,   180,   181,   181,   182,   182,   183,   183,   183,   183,
     183,   183,   184,   184,   185,   185,   186,   186,   186,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   207,   208,   208,   209,   210,   210,   210,
     210,   210,   210,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   214,   215,   215,   216,   217,   217,   218,   218,
     218,   218,   218,   219,   219,   220,   220,   220,   220,   220,
     220,   221,   221,   222,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     1,     2,     1,     1,     1,
       2,     4,     1,     0,     1,     0,     5,     5,     5,     1,
       2,     5,     4,     3,     4,     5,     8,     8,    10,     4,
       4,     4,     4,     2,     3,     1,     2,     1,     1,     0,
       1,     2,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     3,     6,     7,
       1,     1,     1,     1,     1,     3,     1,     2,     2,     4,
       4,     1,     4,     1,     4,     3,     3,     4,     2,     2,
       6,     7,     1,     1,     1,     1,     1,     3,     1,     6,
       1,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     0,     1,     3,     2,     4,     1,     0,     1,     3,
       4,     2,     4,     1,     3,     4,     2,     1,     2,     3,
       2,     2,     1,     0,     1,     2,     3,     5,     6,     6,
       4,     4,     1,     0,     1,     0,     1,     1,     1,     1,
       1,     2,     1,     0,     2,     3,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     2,     1,     1,     1,     2,     3,
       1,     2,     2,     2,     1,     3,     1,     0,     1,     3,
       1,     0,     6,     2,     1,     0,     1,     0,     1,     3,
       1,     3,     4,     1,     4,     4,     2,     1,     3,     5,
       6,     6,     5,     4,     4,     1,     0,     1,     0,     1,
       3,     1,     3,     2,     2,     1,     7,     4,     2,     2,
       2,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    65,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    41,    43,    45,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,     3,     0,    13,     0,    15,     0,    12,     0,     4,
       0,   416,     0,   416,     0,   416,     0,   425,     0,   425,
       0,   425,     0,   349,     0,   349,     0,     4,     0,     4,
       0,     4,     0,     4,     0,   343,     0,   343,     0,   425,
       0,   425,     0,   425,     0,   425,     0,   425,     0,    45,
       0,   357,     0,   434,     0,   434,     0,   434,     0,   434,
       0,   434,     0,   343,     0,   343,     0,   425,     0,   425,
       0
};


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)



#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)
#define phase4nerrs yynerrs
#define phase4char yychar
#define phase4lval yylval
#define phase4lloc yylloc

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != PP_PHASE4EMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, yyscan_t scanner, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yylocp, scanner, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "EOL", "HEADER_NAME",
  "UCHAR_NAME", "IDENTIFIER", "INTEGRAL_CONSTANT", "FLOATING_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "\"[\"", "\"]\"", "\"=(\"",
  "\"(\"", "\")\"", "\"{\"", "\"}\"", "\".\"", "\"->\"", "\"++\"",
  "\"--\"", "\"&\"", "\"*\"", "\"+\"", "\"-\"", "\"~\"", "\"!\"", "\"/\"",
  "\"%\"", "\"<<\"", "\">>\"", "\"<\"", "\">\"", "\"<=\"", "\">=\"",
  "\"==\"", "\"!=\"", "\"^\"", "\"|\"", "\"&&\"", "\"||\"", "\"?\"",
  "\":\"", "\";\"", "\"...\"", "\"=\"", "\"*=\"", "\"/=\"", "\"%=\"",
  "\"+=\"", "\"-=\"", "\"<<=\"", "\">>=\"", "\"&=\"", "\"^=\"", "\"|=\"",
  "\",\"", "\"#\"", "\"##\"", "\"include\"", "\"define\"", "\"if\"",
  "\"ifdef\"", "\"ifndef\"", "\"elif\"", "\"else\"", "\"endif\"",
  "\"undef\"", "\"line\"", "\"error\"", "\"pragma\"", "\"sizeof\"",
  "\"_Alignof\"", "\"_Generic\"", "\"static\"", "\"const\"",
  "\"restrict\"", "\"volatile\"", "\"_Atomic\"", "\"void\"", "\"char\"",
  "\"short\"", "\"int\"", "\"long\"", "\"float\"", "\"double\"",
  "\"signed\"", "\"unsigned\"", "\"_Bool\"", "\"_Complex\"", "\"struct\"",
  "\"union\"", "\"enum\"", "\"_Alignas\"", "\"_Static_assert\"",
  "\"typedef\"", "\"extern\"", "\"_Thread_local\"", "\"auto\"",
  "\"register\"", "\"inline\"", "\"_Noreturn\"", "OTHER_CHAR", "$accept",
  "file", "group_opt", "group", "group_part", "if_section",
  "elif_groups_opt", "else_group_opt", "if_group", "elif_groups",
  "elif_group", "else_group", "endif_line", "control_line", "text_line",
  "non_directive", "replacement_list", "pp_tokens_opt", "pp_tokens",
  "identifier_list_opt", "identifier_list", "not_hash_symbol",
  "preprocessing_token", "constant_expression",
  "constant_conditional_expression", "constant_logical_or_expression",
  "constant_logical_and_expression", "constant_inclusive_or_expression",
  "constant_exclusive_or_expression", "constant_and_expression",
  "constant_equality_expression", "equality_operator",
  "constant_relational_expression", "relational_operator",
  "constant_shift_expression", "shift_operator",
  "constant_additive_expression", "additive_operator",
  "constant_multiplicative_expression", "multiplicative_operator",
  "constant_cast_expression", "constant_unary_expression",
  "unary_operator", "constant_postfix_expression",
  "constant_primary_expression", "unary_expression", "cast_expression",
  "postfix_expression", "primary_expression", "generic_selection",
  "generic_assoc_list", "generic_association", "assignment_expression",
  "assignment_operator", "conditional_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "expression",
  "argument_expression_list_opt", "argument_expression_list",
  "constant_initializer_list", "designation_opt", "constant_initializer",
  "initializer_list", "initializer", "designation", "designator_list",
  "designator", "type_name", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "direct_abstract_declarator_opt", "assignment_expression_opt",
  "type_qualifier", "type_qualifier_list", "pointer_opt", "pointer",
  "type_qualifier_list_opt", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator_list_opt", "struct_declarator", "declarator_opt",
  "enum_specifier", "comma_opt", "identifier_opt", "enumerator_list",
  "enumerator", "atomic_type_specifier", "enumeration_constant",
  "alignment_specifier", "declarator", "direct_declarator",
  "specifier_qualifier_list_opt", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "typedef_name", "static_assert_declaration", "declaration_specifiers",
  "declaration_specifiers_opt", "storage_class_specifier",
  "function_specifier", "any_lparen", "identifier", "header_name",
  "integral_constant", "floating_constant", "character_constant",
  "string_literal", "lbrack", "rbrack", "connected_lparen", "lparen",
  "rparen", "lbrace", "rbrace", "dot", "arrow", "plusplus", "minusminus",
  "amp", "star", "plus", "minus", "tilde", "bang", "slash", "percent",
  "leftleft", "rightright", "left", "right", "leftequals", "rightequals",
  "equalsequals", "bangequals", "carat", "pipe", "ampamp", "pipepipe",
  "question", "colon", "semicolon", "ellipsis", "equals", "starequals",
  "slashequals", "percentequals", "plusequals", "minusequals",
  "leftleftequals", "rightrightequals", "ampequals", "caratequals",
  "pipeequals", "comma", "hash", "hashhash", "sizeof", "alignof",
  "other_char", "if", "ifdef", "ifndef", "elif", "else", "endif",
  "include", "define", "undef", "line", "pragma", "noreturn", "inline",
  "register", "auto", "thread_local", "extern", "typedef", "static_assert",
  "alignas", "enum", "union", "struct", "complex", "bool", "unsigned",
  "signed", "double", "float", "long", "int", "short", "char", "void",
  "atomic", "volatile", "restrict", "const", "static", "generic", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#if PHASE4DEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined PHASE4LTYPE_IS_TRIVIAL && PHASE4LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */



/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value, Location, scanner);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !PHASE4DEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)

#endif /* !PHASE4DEBUG */

#ifndef yystrlen
# define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if PHASE4DEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp, yyGLRStack* yystackp, yyscan_t scanner)
{
  yysymbol_kind_t yytoken;
  YY_USE (scanner);
  if (*yycharp == PP_PHASE4EMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex (&yylval, &yylloc, scanner);
    }
  if (*yycharp <= PP_YYEOF)
    {
      *yycharp = PP_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow;
  YY_USE (yyvalp);
  YY_USE (yylocp);
  YY_USE (scanner);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = PP_PHASE4EMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (yylocp, scanner, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  /* Default location. */
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
  case 2: /* file: group_opt  */
#line 255 "phase4.y"
                { printf("EOF\n"); }
#line 3422 "phase4.tab.c"
    break;

  case 7: /* group_part: if_section  */
#line 261 "phase4.y"
                       { printf("end if section (line %d)\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line); }
#line 3428 "phase4.tab.c"
    break;

  case 8: /* group_part: control_line  */
#line 262 "phase4.y"
                   { printf("end control line %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line); }
#line 3434 "phase4.tab.c"
    break;

  case 9: /* group_part: text_line  */
#line 263 "phase4.y"
                { printf("macro references on line %d: %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line, mac_ref_count); }
#line 3440 "phase4.tab.c"
    break;

  case 10: /* group_part: hash non_directive  */
#line 264 "phase4.y"
                         { printf("end non-directive\n"); }
#line 3446 "phase4.tab.c"
    break;

  case 16: /* if_group: hash if constant_expression EOL group_opt  */
#line 273 "phase4.y"
                                                    { printf("end if group (line %d)\n"); }
#line 3452 "phase4.tab.c"
    break;

  case 24: /* control_line: hash include pp_tokens EOL  */
#line 286 "phase4.y"
                                         { include_file((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 3458 "phase4.tab.c"
    break;

  case 25: /* control_line: hash define identifier replacement_list EOL  */
#line 287 "phase4.y"
                                                  { define_simple_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 3464 "phase4.tab.c"
    break;

  case 26: /* control_line: hash define identifier connected_lparen identifier_list_opt rparen replacement_list EOL  */
#line 288 "phase4.y"
                                                                                              { define_function_like_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.identifier_list), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 3470 "phase4.tab.c"
    break;

  case 27: /* control_line: hash define identifier connected_lparen ellipsis rparen replacement_list EOL  */
#line 289 "phase4.y"
                                                                                   { define_function_like_variadic_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 3476 "phase4.tab.c"
    break;

  case 28: /* control_line: hash define identifier connected_lparen identifier_list comma ellipsis rparen replacement_list EOL  */
#line 290 "phase4.y"
                                                                                                         { define_function_like_variadic_macro_with_args((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.identifier_list), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 3482 "phase4.tab.c"
    break;

  case 29: /* control_line: hash undef identifier EOL  */
#line 291 "phase4.y"
                                { undefine_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token)); }
#line 3488 "phase4.tab.c"
    break;

  case 38: /* pp_tokens_opt: pp_tokens  */
#line 304 "phase4.y"
                         { ((*yyvalp).token_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.token_list); }
#line 3494 "phase4.tab.c"
    break;

  case 39: /* pp_tokens_opt: %empty  */
#line 305 "phase4.y"
      { ((*yyvalp).token_list) = NULL; }
#line 3500 "phase4.tab.c"
    break;

  case 40: /* pp_tokens: preprocessing_token  */
#line 308 "phase4.y"
                               {
        ((*yyvalp).token_list) = malloc(sizeof(struct token_list));
        ((*yyvalp).token_list)->token = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.token);
        ((*yyvalp).token_list)->next = NULL;
    }
#line 3510 "phase4.tab.c"
    break;

  case 41: /* pp_tokens: pp_tokens preprocessing_token  */
#line 313 "phase4.y"
                                    { 
        ((*yyvalp).token_list) = malloc(sizeof(struct token_list));
        ((*yyvalp).token_list)->token = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.token);
        ((*yyvalp).token_list)->next = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list);
    }
#line 3520 "phase4.tab.c"
    break;

  case 42: /* identifier_list_opt: identifier_list  */
#line 320 "phase4.y"
                                     { ((*yyvalp).identifier_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.identifier_list); }
#line 3526 "phase4.tab.c"
    break;

  case 43: /* identifier_list_opt: %empty  */
#line 321 "phase4.y"
      { ((*yyvalp).identifier_list) = NULL; }
#line 3532 "phase4.tab.c"
    break;

  case 44: /* identifier_list: identifier comma identifier_list  */
#line 324 "phase4.y"
                                                  {
        ((*yyvalp).identifier_list) = malloc(sizeof(struct identifier_list));
        ((*yyvalp).identifier_list)->text = strdup((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.token)->text);
        ((*yyvalp).identifier_list)->next = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.identifier_list);
    }
#line 3542 "phase4.tab.c"
    break;

  case 45: /* identifier_list: identifier  */
#line 329 "phase4.y"
                 {
        ((*yyvalp).identifier_list) = malloc(sizeof(struct identifier_list));
        ((*yyvalp).identifier_list)->text = strdup((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.token)->text);
        ((*yyvalp).identifier_list)->next = NULL;
    }
#line 3552 "phase4.tab.c"
    break;

  case 445: /* identifier: IDENTIFIER  */
#line 775 "phase4.y"
                       { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_IDENTIFIER; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3562 "phase4.tab.c"
    break;

  case 446: /* header_name: HEADER_NAME  */
#line 781 "phase4.y"
                         { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_HEADER_NAME; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3572 "phase4.tab.c"
    break;

  case 447: /* integral_constant: INTEGRAL_CONSTANT  */
#line 787 "phase4.y"
                                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_INTEGRAL_CONSTANT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3582 "phase4.tab.c"
    break;

  case 448: /* floating_constant: FLOATING_CONSTANT  */
#line 793 "phase4.y"
                                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_FLOATING_CONSTANT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3592 "phase4.tab.c"
    break;

  case 449: /* character_constant: CHARACTER_CONSTANT  */
#line 799 "phase4.y"
                                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CHARACTER_CONSTANT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3602 "phase4.tab.c"
    break;

  case 450: /* string_literal: STRING_LITERAL  */
#line 805 "phase4.y"
                              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_STRING_LITERAL; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3612 "phase4.tab.c"
    break;

  case 451: /* lbrack: "["  */
#line 811 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LBRACK; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3622 "phase4.tab.c"
    break;

  case 452: /* rbrack: "]"  */
#line 817 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RBRACK; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3632 "phase4.tab.c"
    break;

  case 453: /* connected_lparen: "=("  */
#line 823 "phase4.y"
                                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CONNECTED_LPAREN; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3642 "phase4.tab.c"
    break;

  case 454: /* lparen: "("  */
#line 829 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LPAREN; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3652 "phase4.tab.c"
    break;

  case 455: /* rparen: ")"  */
#line 835 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RPAREN; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3662 "phase4.tab.c"
    break;

  case 456: /* lbrace: "{"  */
#line 841 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LBRACE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3672 "phase4.tab.c"
    break;

  case 457: /* rbrace: "}"  */
#line 847 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RBRACE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3682 "phase4.tab.c"
    break;

  case 458: /* dot: "."  */
#line 853 "phase4.y"
        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_DOT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3692 "phase4.tab.c"
    break;

  case 459: /* arrow: "->"  */
#line 859 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ARROW; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3702 "phase4.tab.c"
    break;

  case 460: /* plusplus: "++"  */
#line 865 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PLUSPLUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3712 "phase4.tab.c"
    break;

  case 461: /* minusminus: "--"  */
#line 871 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_MINUSMINUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3722 "phase4.tab.c"
    break;

  case 462: /* amp: "&"  */
#line 877 "phase4.y"
        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_AMP; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3732 "phase4.tab.c"
    break;

  case 463: /* star: "*"  */
#line 883 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_STAR; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3742 "phase4.tab.c"
    break;

  case 464: /* plus: "+"  */
#line 889 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PLUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3752 "phase4.tab.c"
    break;

  case 465: /* minus: "-"  */
#line 895 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_MINUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3762 "phase4.tab.c"
    break;

  case 466: /* tilde: "~"  */
#line 901 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_TILDE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3772 "phase4.tab.c"
    break;

  case 467: /* bang: "!"  */
#line 907 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_BANG; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3782 "phase4.tab.c"
    break;

  case 468: /* slash: "/"  */
#line 913 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SLASH; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3792 "phase4.tab.c"
    break;

  case 469: /* percent: "%"  */
#line 919 "phase4.y"
                { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PERCENT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3802 "phase4.tab.c"
    break;

  case 470: /* leftleft: "<<"  */
#line 925 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFTLEFT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3812 "phase4.tab.c"
    break;

  case 471: /* rightright: ">>"  */
#line 931 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHTRIGHT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3822 "phase4.tab.c"
    break;

  case 472: /* left: "<"  */
#line 937 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3832 "phase4.tab.c"
    break;

  case 473: /* right: ">"  */
#line 943 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3842 "phase4.tab.c"
    break;

  case 474: /* leftequals: "<="  */
#line 949 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3852 "phase4.tab.c"
    break;

  case 475: /* rightequals: ">="  */
#line 955 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3862 "phase4.tab.c"
    break;

  case 476: /* equalsequals: "=="  */
#line 961 "phase4.y"
                          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_EQUALSEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3872 "phase4.tab.c"
    break;

  case 477: /* bangequals: "!="  */
#line 967 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_BANGEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3882 "phase4.tab.c"
    break;

  case 478: /* carat: "^"  */
#line 973 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CARAT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3892 "phase4.tab.c"
    break;

  case 479: /* pipe: "|"  */
#line 979 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PIPE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3902 "phase4.tab.c"
    break;

  case 480: /* ampamp: "&&"  */
#line 985 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_AMPAMP; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3912 "phase4.tab.c"
    break;

  case 481: /* pipepipe: "||"  */
#line 991 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PIPEPIPE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3922 "phase4.tab.c"
    break;

  case 482: /* question: "?"  */
#line 997 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_QUESTION; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3932 "phase4.tab.c"
    break;

  case 483: /* colon: ":"  */
#line 1003 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_COLON; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3942 "phase4.tab.c"
    break;

  case 484: /* semicolon: ";"  */
#line 1009 "phase4.y"
                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SEMICOLON; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3952 "phase4.tab.c"
    break;

  case 485: /* ellipsis: "..."  */
#line 1015 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ELLIPSIS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3962 "phase4.tab.c"
    break;

  case 486: /* equals: "="  */
#line 1021 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_EQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3972 "phase4.tab.c"
    break;

  case 487: /* starequals: "*="  */
#line 1027 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_STAREQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3982 "phase4.tab.c"
    break;

  case 488: /* slashequals: "/="  */
#line 1033 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SLASHEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3992 "phase4.tab.c"
    break;

  case 489: /* percentequals: "%="  */
#line 1039 "phase4.y"
                            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PERCENTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4002 "phase4.tab.c"
    break;

  case 490: /* plusequals: "+="  */
#line 1045 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PLUSEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4012 "phase4.tab.c"
    break;

  case 491: /* minusequals: "-="  */
#line 1051 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_MINUSEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4022 "phase4.tab.c"
    break;

  case 492: /* leftleftequals: "<<="  */
#line 1057 "phase4.y"
                              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFTLEFTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4032 "phase4.tab.c"
    break;

  case 493: /* rightrightequals: ">>="  */
#line 1063 "phase4.y"
                                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHTRIGHTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4042 "phase4.tab.c"
    break;

  case 494: /* ampequals: "&="  */
#line 1069 "phase4.y"
                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_AMPEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4052 "phase4.tab.c"
    break;

  case 495: /* caratequals: "^="  */
#line 1075 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CARATEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4062 "phase4.tab.c"
    break;

  case 496: /* pipeequals: "|="  */
#line 1081 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PIPEEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4072 "phase4.tab.c"
    break;

  case 497: /* comma: ","  */
#line 1087 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_COMMA; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4082 "phase4.tab.c"
    break;

  case 498: /* hash: "#"  */
#line 1093 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_HASH; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4092 "phase4.tab.c"
    break;

  case 499: /* hashhash: "##"  */
#line 1099 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_HASHHASH; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4102 "phase4.tab.c"
    break;

  case 500: /* sizeof: "sizeof"  */
#line 1105 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SIZEOF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4112 "phase4.tab.c"
    break;

  case 501: /* alignof: "_Alignof"  */
#line 1111 "phase4.y"
                { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ALIGNOF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4122 "phase4.tab.c"
    break;

  case 502: /* other_char: OTHER_CHAR  */
#line 1117 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_OTHER_CHAR; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4132 "phase4.tab.c"
    break;

  case 503: /* if: "if"  */
#line 1123 "phase4.y"
      {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_IF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4142 "phase4.tab.c"
    break;

  case 504: /* ifdef: "ifdef"  */
#line 1129 "phase4.y"
            {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_IFDEF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4152 "phase4.tab.c"
    break;

  case 505: /* ifndef: "ifndef"  */
#line 1135 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_IFNDEF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4162 "phase4.tab.c"
    break;

  case 506: /* elif: "elif"  */
#line 1141 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ELIF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4172 "phase4.tab.c"
    break;

  case 507: /* else: "else"  */
#line 1147 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ELSE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4182 "phase4.tab.c"
    break;

  case 508: /* endif: "endif"  */
#line 1153 "phase4.y"
            {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ENDIF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4192 "phase4.tab.c"
    break;

  case 509: /* include: "include"  */
#line 1159 "phase4.y"
                {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_INCLUDE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4202 "phase4.tab.c"
    break;

  case 510: /* define: "define"  */
#line 1165 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_DEFINE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4212 "phase4.tab.c"
    break;

  case 511: /* undef: "undef"  */
#line 1171 "phase4.y"
            {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_UNDEF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4222 "phase4.tab.c"
    break;

  case 512: /* line: "line"  */
#line 1177 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LINE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4232 "phase4.tab.c"
    break;

  case 513: /* pragma: "pragma"  */
#line 1183 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PRAGMA; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4242 "phase4.tab.c"
    break;

  case 514: /* noreturn: "_Noreturn"  */
#line 1189 "phase4.y"
                  {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_NORETURN; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4252 "phase4.tab.c"
    break;

  case 515: /* inline: "inline"  */
#line 1195 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_INLINE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 4262 "phase4.tab.c"
    break;

  case 516: /* register: "register"  */
#line 1201 "phase4.y"
                  {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_REGISTER;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4272 "phase4.tab.c"
    break;

  case 517: /* auto: "auto"  */
#line 1207 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_AUTO;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4282 "phase4.tab.c"
    break;

  case 518: /* thread_local: "_Thread_local"  */
#line 1213 "phase4.y"
                          {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_THREAD_LOCAL;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4292 "phase4.tab.c"
    break;

  case 519: /* extern: "extern"  */
#line 1219 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_EXTERN;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4302 "phase4.tab.c"
    break;

  case 520: /* typedef: "typedef"  */
#line 1225 "phase4.y"
                {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_TYPEDEF;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4312 "phase4.tab.c"
    break;

  case 521: /* static_assert: "_Static_assert"  */
#line 1231 "phase4.y"
                            {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_STATIC_ASSERT;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4322 "phase4.tab.c"
    break;

  case 522: /* alignas: "_Alignas"  */
#line 1237 "phase4.y"
                {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_ALIGNAS;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4332 "phase4.tab.c"
    break;

  case 523: /* enum: "enum"  */
#line 1243 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_ENUM;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4342 "phase4.tab.c"
    break;

  case 524: /* union: "union"  */
#line 1249 "phase4.y"
            {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_UNION;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4352 "phase4.tab.c"
    break;

  case 525: /* struct: "struct"  */
#line 1255 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_STRUCT;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4362 "phase4.tab.c"
    break;

  case 526: /* complex: "_Complex"  */
#line 1261 "phase4.y"
                {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_COMPLEX;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4372 "phase4.tab.c"
    break;

  case 527: /* bool: "_Bool"  */
#line 1267 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_BOOL;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4382 "phase4.tab.c"
    break;

  case 528: /* unsigned: "unsigned"  */
#line 1273 "phase4.y"
                  {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_UNSIGNED;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4392 "phase4.tab.c"
    break;

  case 529: /* signed: "signed"  */
#line 1279 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_SIGNED;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4402 "phase4.tab.c"
    break;

  case 530: /* double: "double"  */
#line 1285 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_DOUBLE;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4412 "phase4.tab.c"
    break;

  case 531: /* float: "float"  */
#line 1291 "phase4.y"
            {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_FLOAT;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4422 "phase4.tab.c"
    break;

  case 532: /* long: "long"  */
#line 1297 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_LONG;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4432 "phase4.tab.c"
    break;

  case 533: /* int: "int"  */
#line 1303 "phase4.y"
        {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_INT;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4442 "phase4.tab.c"
    break;

  case 534: /* short: "short"  */
#line 1309 "phase4.y"
            {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_SHORT;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4452 "phase4.tab.c"
    break;

  case 535: /* char: "char"  */
#line 1315 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_CHAR;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4462 "phase4.tab.c"
    break;

  case 536: /* void: "void"  */
#line 1321 "phase4.y"
          {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_VOID;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4472 "phase4.tab.c"
    break;

  case 537: /* atomic: "_Atomic"  */
#line 1327 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_ATOMIC;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4482 "phase4.tab.c"
    break;

  case 538: /* volatile: "volatile"  */
#line 1333 "phase4.y"
                  {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_VOLATILE;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4492 "phase4.tab.c"
    break;

  case 539: /* restrict: "restrict"  */
#line 1339 "phase4.y"
                  {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_RESTRICT;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4502 "phase4.tab.c"
    break;

  case 540: /* const: "const"  */
#line 1345 "phase4.y"
            {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_CONST;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4512 "phase4.tab.c"
    break;

  case 541: /* static: "static"  */
#line 1351 "phase4.y"
              {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_STATIC;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4522 "phase4.tab.c"
    break;

  case 542: /* generic: "_Generic"  */
#line 1357 "phase4.y"
                {
    ((*yyvalp).token) = malloc(sizeof(struct token));
    ((*yyvalp).token)->type = PP_GENERIC;
    ((*yyvalp).token)->text = mycopystr(scanner);
}
#line 4532 "phase4.tab.c"
    break;


#line 4536 "phase4.tab.c"

      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_replacement_list: /* replacement_list  */
#line 120 "phase4.y"
            { free(((*yyvaluep).token_list)); }
#line 4588 "phase4.tab.c"
        break;

    case YYSYMBOL_pp_tokens_opt: /* pp_tokens_opt  */
#line 120 "phase4.y"
            { free(((*yyvaluep).token_list)); }
#line 4594 "phase4.tab.c"
        break;

    case YYSYMBOL_pp_tokens: /* pp_tokens  */
#line 120 "phase4.y"
            { free(((*yyvaluep).token_list)); }
#line 4600 "phase4.tab.c"
        break;

    case YYSYMBOL_identifier_list_opt: /* identifier_list_opt  */
#line 122 "phase4.y"
            { free(((*yyvaluep).identifier_list)->text); free(((*yyvaluep).identifier_list)); }
#line 4606 "phase4.tab.c"
        break;

    case YYSYMBOL_identifier_list: /* identifier_list  */
#line 122 "phase4.y"
            { free(((*yyvaluep).identifier_list)->text); free(((*yyvaluep).identifier_list)); }
#line 4612 "phase4.tab.c"
        break;

    case YYSYMBOL_preprocessing_token: /* preprocessing_token  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4618 "phase4.tab.c"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4624 "phase4.tab.c"
        break;

    case YYSYMBOL_header_name: /* header_name  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4630 "phase4.tab.c"
        break;

    case YYSYMBOL_integral_constant: /* integral_constant  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4636 "phase4.tab.c"
        break;

    case YYSYMBOL_floating_constant: /* floating_constant  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4642 "phase4.tab.c"
        break;

    case YYSYMBOL_character_constant: /* character_constant  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4648 "phase4.tab.c"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4654 "phase4.tab.c"
        break;

    case YYSYMBOL_lbrack: /* lbrack  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4660 "phase4.tab.c"
        break;

    case YYSYMBOL_rbrack: /* rbrack  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4666 "phase4.tab.c"
        break;

    case YYSYMBOL_connected_lparen: /* connected_lparen  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4672 "phase4.tab.c"
        break;

    case YYSYMBOL_lparen: /* lparen  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4678 "phase4.tab.c"
        break;

    case YYSYMBOL_rparen: /* rparen  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4684 "phase4.tab.c"
        break;

    case YYSYMBOL_lbrace: /* lbrace  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4690 "phase4.tab.c"
        break;

    case YYSYMBOL_rbrace: /* rbrace  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4696 "phase4.tab.c"
        break;

    case YYSYMBOL_dot: /* dot  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4702 "phase4.tab.c"
        break;

    case YYSYMBOL_arrow: /* arrow  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4708 "phase4.tab.c"
        break;

    case YYSYMBOL_plusplus: /* plusplus  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4714 "phase4.tab.c"
        break;

    case YYSYMBOL_minusminus: /* minusminus  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4720 "phase4.tab.c"
        break;

    case YYSYMBOL_amp: /* amp  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4726 "phase4.tab.c"
        break;

    case YYSYMBOL_star: /* star  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4732 "phase4.tab.c"
        break;

    case YYSYMBOL_plus: /* plus  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4738 "phase4.tab.c"
        break;

    case YYSYMBOL_minus: /* minus  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4744 "phase4.tab.c"
        break;

    case YYSYMBOL_tilde: /* tilde  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4750 "phase4.tab.c"
        break;

    case YYSYMBOL_bang: /* bang  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4756 "phase4.tab.c"
        break;

    case YYSYMBOL_slash: /* slash  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4762 "phase4.tab.c"
        break;

    case YYSYMBOL_percent: /* percent  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4768 "phase4.tab.c"
        break;

    case YYSYMBOL_leftleft: /* leftleft  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4774 "phase4.tab.c"
        break;

    case YYSYMBOL_rightright: /* rightright  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4780 "phase4.tab.c"
        break;

    case YYSYMBOL_left: /* left  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4786 "phase4.tab.c"
        break;

    case YYSYMBOL_right: /* right  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4792 "phase4.tab.c"
        break;

    case YYSYMBOL_leftequals: /* leftequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4798 "phase4.tab.c"
        break;

    case YYSYMBOL_rightequals: /* rightequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4804 "phase4.tab.c"
        break;

    case YYSYMBOL_equalsequals: /* equalsequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4810 "phase4.tab.c"
        break;

    case YYSYMBOL_bangequals: /* bangequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4816 "phase4.tab.c"
        break;

    case YYSYMBOL_carat: /* carat  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4822 "phase4.tab.c"
        break;

    case YYSYMBOL_pipe: /* pipe  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4828 "phase4.tab.c"
        break;

    case YYSYMBOL_ampamp: /* ampamp  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4834 "phase4.tab.c"
        break;

    case YYSYMBOL_pipepipe: /* pipepipe  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4840 "phase4.tab.c"
        break;

    case YYSYMBOL_question: /* question  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4846 "phase4.tab.c"
        break;

    case YYSYMBOL_colon: /* colon  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4852 "phase4.tab.c"
        break;

    case YYSYMBOL_semicolon: /* semicolon  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4858 "phase4.tab.c"
        break;

    case YYSYMBOL_ellipsis: /* ellipsis  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4864 "phase4.tab.c"
        break;

    case YYSYMBOL_equals: /* equals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4870 "phase4.tab.c"
        break;

    case YYSYMBOL_starequals: /* starequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4876 "phase4.tab.c"
        break;

    case YYSYMBOL_slashequals: /* slashequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4882 "phase4.tab.c"
        break;

    case YYSYMBOL_percentequals: /* percentequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4888 "phase4.tab.c"
        break;

    case YYSYMBOL_plusequals: /* plusequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4894 "phase4.tab.c"
        break;

    case YYSYMBOL_minusequals: /* minusequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4900 "phase4.tab.c"
        break;

    case YYSYMBOL_leftleftequals: /* leftleftequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4906 "phase4.tab.c"
        break;

    case YYSYMBOL_rightrightequals: /* rightrightequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4912 "phase4.tab.c"
        break;

    case YYSYMBOL_ampequals: /* ampequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4918 "phase4.tab.c"
        break;

    case YYSYMBOL_caratequals: /* caratequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4924 "phase4.tab.c"
        break;

    case YYSYMBOL_pipeequals: /* pipeequals  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4930 "phase4.tab.c"
        break;

    case YYSYMBOL_comma: /* comma  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4936 "phase4.tab.c"
        break;

    case YYSYMBOL_hash: /* hash  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4942 "phase4.tab.c"
        break;

    case YYSYMBOL_hashhash: /* hashhash  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4948 "phase4.tab.c"
        break;

    case YYSYMBOL_sizeof: /* sizeof  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4954 "phase4.tab.c"
        break;

    case YYSYMBOL_alignof: /* alignof  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4960 "phase4.tab.c"
        break;

    case YYSYMBOL_other_char: /* other_char  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4966 "phase4.tab.c"
        break;

    case YYSYMBOL_if: /* if  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4972 "phase4.tab.c"
        break;

    case YYSYMBOL_ifdef: /* ifdef  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4978 "phase4.tab.c"
        break;

    case YYSYMBOL_ifndef: /* ifndef  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4984 "phase4.tab.c"
        break;

    case YYSYMBOL_elif: /* elif  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4990 "phase4.tab.c"
        break;

    case YYSYMBOL_else: /* else  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 4996 "phase4.tab.c"
        break;

    case YYSYMBOL_endif: /* endif  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5002 "phase4.tab.c"
        break;

    case YYSYMBOL_include: /* include  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5008 "phase4.tab.c"
        break;

    case YYSYMBOL_define: /* define  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5014 "phase4.tab.c"
        break;

    case YYSYMBOL_undef: /* undef  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5020 "phase4.tab.c"
        break;

    case YYSYMBOL_line: /* line  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5026 "phase4.tab.c"
        break;

    case YYSYMBOL_pragma: /* pragma  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5032 "phase4.tab.c"
        break;

    case YYSYMBOL_noreturn: /* noreturn  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5038 "phase4.tab.c"
        break;

    case YYSYMBOL_inline: /* inline  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5044 "phase4.tab.c"
        break;

    case YYSYMBOL_register: /* register  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5050 "phase4.tab.c"
        break;

    case YYSYMBOL_auto: /* auto  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5056 "phase4.tab.c"
        break;

    case YYSYMBOL_thread_local: /* thread_local  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5062 "phase4.tab.c"
        break;

    case YYSYMBOL_extern: /* extern  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5068 "phase4.tab.c"
        break;

    case YYSYMBOL_typedef: /* typedef  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5074 "phase4.tab.c"
        break;

    case YYSYMBOL_static_assert: /* static_assert  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5080 "phase4.tab.c"
        break;

    case YYSYMBOL_alignas: /* alignas  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5086 "phase4.tab.c"
        break;

    case YYSYMBOL_enum: /* enum  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5092 "phase4.tab.c"
        break;

    case YYSYMBOL_union: /* union  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5098 "phase4.tab.c"
        break;

    case YYSYMBOL_struct: /* struct  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5104 "phase4.tab.c"
        break;

    case YYSYMBOL_complex: /* complex  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5110 "phase4.tab.c"
        break;

    case YYSYMBOL_bool: /* bool  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5116 "phase4.tab.c"
        break;

    case YYSYMBOL_unsigned: /* unsigned  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5122 "phase4.tab.c"
        break;

    case YYSYMBOL_signed: /* signed  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5128 "phase4.tab.c"
        break;

    case YYSYMBOL_double: /* double  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5134 "phase4.tab.c"
        break;

    case YYSYMBOL_float: /* float  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5140 "phase4.tab.c"
        break;

    case YYSYMBOL_long: /* long  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5146 "phase4.tab.c"
        break;

    case YYSYMBOL_int: /* int  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5152 "phase4.tab.c"
        break;

    case YYSYMBOL_short: /* short  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5158 "phase4.tab.c"
        break;

    case YYSYMBOL_char: /* char  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5164 "phase4.tab.c"
        break;

    case YYSYMBOL_void: /* void  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5170 "phase4.tab.c"
        break;

    case YYSYMBOL_atomic: /* atomic  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5176 "phase4.tab.c"
        break;

    case YYSYMBOL_volatile: /* volatile  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5182 "phase4.tab.c"
        break;

    case YYSYMBOL_restrict: /* restrict  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5188 "phase4.tab.c"
        break;

    case YYSYMBOL_const: /* const  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5194 "phase4.tab.c"
        break;

    case YYSYMBOL_static: /* static  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5200 "phase4.tab.c"
        break;

    case YYSYMBOL_generic: /* generic  */
#line 121 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 5206 "phase4.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, yyscan_t scanner)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yysval, &yys->yyloc, scanner);
  else
    {
#if PHASE4DEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, scanner);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = PP_PHASE4EMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !PHASE4DEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, yyscan_t scanner)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval,
                       &(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , scanner);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((yytrue, yyrhs, yyk, yyrule, scanner));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp, yylocp, scanner);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((yyfalse, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule, scanner));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, scanner);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval, yyscan_t scanner)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval, &yyloc, scanner);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1]));
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval, &yyloc);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp, yyscan_t scanner);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, yyscan_t scanner)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, scanner));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, scanner));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, yyscan_t scanner)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, scanner);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, scanner);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp, yylocp, scanner);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if PHASE4DEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, YYLTYPE *yylocp, yyscan_t scanner)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if PHASE4DEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (yylocp, scanner, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState *yys1, int yyn1,
                    yyGLRStack *yystackp, yyscan_t scanner)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, scanner);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YY_ASSERT (yyoption);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (0 < yynrhs)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, scanner);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, yyscan_t scanner)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, scanner);
              return yyreportAmbiguity (yybest, yyp, yylocp, scanner);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, scanner);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other, &yydummy, scanner);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yysval, yylocp, scanner);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, scanner);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, yyscan_t scanner)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , scanner));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn, YYLTYPE *yylocp, yyscan_t scanner)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], scanner);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, scanner);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], scanner);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, yylocp, scanner));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], scanner);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYSTACKP, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  */
static int
yypcontext_expected_tokens (const yyGLRStack* yystackp,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}

static int
yy_syntax_error_arguments (const yyGLRStack* yystackp,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  yysymbol_kind_t yytoken = yychar == PP_PHASE4EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.b4_lac_if([
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.], [
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.])
  */
  if (yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yystackp,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}



static void
yyreportSyntaxError (yyGLRStack* yystackp, yyscan_t scanner)
{
  if (yystackp->yyerrState != 0)
    return;
  {
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount
    = yy_syntax_error_arguments (yystackp, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    yyMemoryExhausted (yystackp);

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysz
          = yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (YYSIZE_MAXIMUM - yysize < yysz)
          yysize_overflow = yytrue;
        else
          yysize += yysz;
      }
  }

  if (!yysize_overflow)
    yymsg = YY_CAST (char *, YYMALLOC (YY_CAST (YYSIZE_T, yysize)));

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
              yyformat += 2;
            }
          else
            {
              ++yyp;
              ++yyformat;
            }
        }
      yyerror (&yylloc, scanner, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (&yylloc, scanner, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, yyscan_t scanner)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == PP_YYEOF)
          yyFail (yystackp, &yylloc, scanner, YY_NULLPTR);
        if (yychar != PP_PHASE4EMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, scanner);
            yychar = PP_PHASE4EMPTY;
          }
        yytoken = yygetToken (&yychar, yystackp, scanner);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, &yylloc, scanner, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, scanner);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, &yylloc, scanner, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = PP_PHASE4EMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, scanner);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, scanner));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar, yystackp, scanner);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = PP_PHASE4EMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != PP_PHASE4error)
                    yyreportSyntaxError (&yystack, scanner);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, scanner));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != PP_PHASE4EMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, &yylloc, scanner));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, &yylloc, scanner, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, scanner));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, scanner);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to PP_PHASE4EMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = PP_PHASE4EMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YY_DPRINTF ((stderr, "Stack %ld now in state #%d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, scanner));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, scanner);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != PP_PHASE4EMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, scanner);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, scanner);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if PHASE4DEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yyst);
  YY_FPRINTF ((stderr, "\n"));
}

static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc

/* Substitute the variable and function names.  */
#define yyparse phase4parse
#define yylex   phase4lex
#define yyerror phase4error
#define yylval  phase4lval
#define yychar  phase4char
#define yydebug phase4debug
#define yynerrs phase4nerrs
#define yylloc  phase4lloc


#line 1363 "phase4.y"


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
