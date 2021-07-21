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
  YYSYMBOL_OTHER_CHAR = 74,                /* OTHER_CHAR  */
  YYSYMBOL_75__Generic_ = 75,              /* "_Generic"  */
  YYSYMBOL_76_static_ = 76,                /* "static"  */
  YYSYMBOL_77_const_ = 77,                 /* "const"  */
  YYSYMBOL_78_restrict_ = 78,              /* "restrict"  */
  YYSYMBOL_79_volatile_ = 79,              /* "volatile"  */
  YYSYMBOL_80__Atomic_ = 80,               /* "_Atomic"  */
  YYSYMBOL_81_void_ = 81,                  /* "void"  */
  YYSYMBOL_82_char_ = 82,                  /* "char"  */
  YYSYMBOL_83_short_ = 83,                 /* "short"  */
  YYSYMBOL_84_int_ = 84,                   /* "int"  */
  YYSYMBOL_85_long_ = 85,                  /* "long"  */
  YYSYMBOL_86_float_ = 86,                 /* "float"  */
  YYSYMBOL_87_double_ = 87,                /* "double"  */
  YYSYMBOL_88_signed_ = 88,                /* "signed"  */
  YYSYMBOL_89_unsigned_ = 89,              /* "unsigned"  */
  YYSYMBOL_90__Bool_ = 90,                 /* "_Bool"  */
  YYSYMBOL_91__Complex_ = 91,              /* "_Complex"  */
  YYSYMBOL_92_struct_ = 92,                /* "struct"  */
  YYSYMBOL_93_union_ = 93,                 /* "union"  */
  YYSYMBOL_94_enum_ = 94,                  /* "enum"  */
  YYSYMBOL_95__Alignas_ = 95,              /* "_Alignas"  */
  YYSYMBOL_96__Static_assert_ = 96,        /* "_Static_assert"  */
  YYSYMBOL_97_typedef_ = 97,               /* "typedef"  */
  YYSYMBOL_98_extern_ = 98,                /* "extern"  */
  YYSYMBOL_99__Thread_local_ = 99,         /* "_Thread_local"  */
  YYSYMBOL_100_auto_ = 100,                /* "auto"  */
  YYSYMBOL_101_register_ = 101,            /* "register"  */
  YYSYMBOL_102_inline_ = 102,              /* "inline"  */
  YYSYMBOL_103__Noreturn_ = 103,           /* "_Noreturn"  */
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
  YYSYMBOL_other_char = 280                /* other_char  */
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
#line 94 "phase4.y"

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

#line 404 "phase4.tab.c"

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
#define YYFINAL  195
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  177
/* YYNRULES -- Number of rules.  */
#define YYNRULES  475
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  673
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
       0,   185,   185,   186,   186,   187,   187,   188,   189,   190,
     191,   193,   194,   194,   195,   195,   196,   197,   198,   200,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   215,   215,   216,   217,   218,   219,
     221,   226,   232,   233,   235,   240,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   377,   378,   379,   380,   380,   380,
     380,   381,   382,   383,   383,   384,   385,   386,   386,   387,
     388,   389,   389,   389,   390,   391,   392,   393,   394,   395,
     396,   398,   398,   398,   398,   398,   398,   399,   400,   401,
     402,   403,   404,   406,   407,   408,   409,   410,   411,   413,
     414,   415,   416,   417,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   431,   432,   433,   434,   435,
     436,   437,   439,   440,   440,   441,   442,   442,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   444,
     444,   445,   445,   446,   446,   447,   447,   448,   448,   449,
     449,   450,   450,   451,   451,   452,   452,   453,   453,   454,
     454,   455,   455,   456,   456,   457,   457,   458,   459,   460,
     460,   461,   462,   463,   465,   465,   466,   467,   468,   470,
     471,   471,   472,   472,   473,   474,   474,   475,   475,   476,
     477,   478,   479,   480,   481,   483,   483,   484,   484,   485,
     485,   485,   485,   486,   486,   487,   487,   488,   488,   489,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   506,   507,   509,   509,
     510,   510,   511,   512,   514,   515,   516,   518,   518,   519,
     519,   520,   520,   521,   521,   522,   523,   525,   525,   526,
     526,   527,   527,   528,   528,   529,   530,   531,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   542,   542,
     543,   543,   544,   544,   545,   545,   546,   546,   547,   548,
     549,   551,   552,   553,   554,   555,   557,   557,   558,   558,
     558,   558,   558,   558,   559,   559,   560,   560,   562,   567,
     572,   577,   582,   587,   592,   597,   602,   607,   612,   617,
     622,   627,   632,   637,   642,   647,   652,   657,   662,   667,
     672,   677,   682,   687,   692,   697,   702,   707,   712,   717,
     722,   727,   732,   737,   742,   747,   752,   757,   762,   767,
     772,   777,   782,   787,   792,   797,   802,   807,   812,   817,
     822,   827,   832,   837,   842,   847
};
#endif

#define YYPACT_NINF (-562)
#define YYTABLE_NINF (-399)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2072,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  1784,  -562,  -562,  -562,    25,  -562,  2144,
    -562,  -562,   -31,  -562,  -562,  2575,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  2575,    24,  2850,    24,    24,
      24,  2575,  2575,  2575,  -562,  1856,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,   -20,    -9,    64,
    -562,   123,  2575,  1928,  2646,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  2744,   100,   157,
    -562,   152,    18,   137,   134,   159,   178,   372,   253,   292,
     346,  -562,  -562,  2850,   235,  -562,  1533,  -562,   181,   218,
     225,  2000,   228,   230,  -562,  -562,  2850,   173,   186,  -562,
    -562,  -562,  -562,   180,   238,  -562,  2744,   100,   100,  2744,
    -562,   294,  -562,  -562,  1509,  -562,  -562,  -562,  -562,  -562,
    1601,  2216,  2850,  2850,  2850,  2850,  2850,  2850,  -562,  -562,
    2850,  -562,  -562,  -562,  -562,  2850,  -562,  -562,  2850,  -562,
    -562,  2850,  -562,  -562,  -562,  2850,  -562,  2850,    24,    24,
    -562,  -562,  -562,   351,  -562,  -562,  -562,  -562,  -562,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,    24,   100,   234,
     250,  1623,  1664,  -562,    24,   217,  -562,  -562,  1691,  -562,
    1555,  2288,  2360,  -562,  -562,  -562,  -562,   277,   286,   227,
    -562,   270,   288,   249,   261,  -562,  -562,  1509,  1601,  2744,
    -562,  -562,  1509,  2744,    24,    24,  -562,  -562,  2744,  1063,
    -562,  -562,  -562,   330,   269,   283,   254,   305,   178,   372,
     253,   292,   346,    14,   325,  1645,   328,  -562,  -562,    18,
     302,   137,   134,   159,   178,   372,   253,   292,   346,  -562,
     341,  -562,  -562,  1601,   339,   345,  1533,  -562,  2798,  -562,
    -562,  -562,   352,   345,   427,  -562,  -562,   388,    19,  -562,
    -562,  -562,  2432,  2504,   380,  2575,  2575,   354,    24,   395,
     396,   362,   409,     6,  -562,  -562,  -562,   411,   377,  -562,
    -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    2744,  2744,  2744,  2744,  2744,  2744,  2744,  2744,  2744,  2744,
    2744,  2744,  -562,  2744,   413,  -562,  2850,  -562,   424,    24,
     431,   441,    35,  -562,  1390,  -562,  -562,   427,   417,   373,
     379,   417,  -562,  -562,  -562,   439,   454,   445,  -562,   413,
    -562,  1601,  2700,  -562,  -562,  2744,  -562,   269,    -3,   283,
     254,   305,   178,   372,   253,   292,   346,  -562,  -562,    35,
    -562,  -562,   407,  -562,   419,  -562,  -562,  -562,  2850,    24,
       9,  2820,  -562,   174,  -562,   100,  1418,  -562,   164,  -562,
    -562,  -562,   133,  1210,   453,  -562,  -562,  2575,    21,  -562,
     429,  -562,  -562,  2744,  2722,    47,    24,   456,  2850,   464,
    -562,  -562,    85,    35,  -562,  -562,  -562,  -562,  2850,  -562,
    -562,   244,  -562,   421,   435,  -562,   442,   448,   469,   427,
     259,  2744,  -562,  -562,  -562,  -562,  -562,  -562,  -562,  -562,
    1238,  1271,  1300,   473,  -562,   452,  -562,    37,  1328,  1361,
    -562,   489,  -562,  1601,  2744,  -562,    35,  -562,  -562,  -562,
      90,  -562,  -562,  -562,  -562,  -562,  2820,    55,    27,   383,
     417,  -562,    -2,  -562,  2850,  -562,  2744,  2744,  -562,   484,
    -562,  -562,  -562,  -562,  -562,  1173,  -562,   282,  -562,  -562,
    -562,  -562,  -562,  -562,    82,  -562,  2722,  -562,  -562,   219,
    -562,   488,   625,  1210,   479,  -562,  -562,   505,   509,  -562,
    -562,  -562,   417,  -562,   252,  -562,  -562,   497,   427,   711,
    2776,   511,  -562,   512,    36,  -562,  -562,  -562,  -562,   455,
    2744,  2744,   516,   524,  -562,  -562,  -562,   525,   527,  -562,
    -562,  -562,  -562
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,    35,   418,   420,   421,   422,   423,   424,   425,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,     0,   473,   474,   475,     0,     2,     3,
       5,     7,     0,     8,     9,    39,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      33,   419,   426,   471,   472,     0,     0,     0,     0,     0,
       0,     0,    39,    39,    10,     0,    40,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,     1,     6,     0,     0,     0,
      19,     0,    38,     0,    39,   214,   215,   216,   217,   416,
     417,   204,   205,   202,   201,   203,   206,     0,     0,     0,
     158,   159,   161,   163,   165,   167,   169,   171,   175,   181,
     185,   189,   194,     0,   196,   207,     0,   213,     0,     0,
       0,     0,     0,     0,    36,    41,     0,     0,     0,    14,
      20,    34,    24,   426,     0,    37,     0,     0,     0,     0,
     198,   219,   226,   241,     0,   235,   236,   237,   238,   239,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
       0,   177,   178,   179,   180,     0,   183,   184,     0,   187,
     188,     0,   191,   192,   193,     0,   197,     0,     0,     0,
     319,   320,   321,   322,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   348,   349,   370,     0,     0,
       0,   389,   389,   343,   370,   326,   344,   342,   389,   345,
     213,     0,     0,    29,    30,    31,    32,     0,     0,     0,
      11,     0,     0,    42,    45,    25,   221,     0,     0,     0,
     224,   220,     0,     0,     0,     0,   231,   232,   284,   224,
     279,   281,   246,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   277,     0,     0,   235,     0,   398,    16,   162,
       0,   164,   166,   168,   170,   172,   176,   182,   186,   190,
       0,   209,   210,     0,     0,   366,     0,   218,     0,   388,
     355,   354,     0,   347,   330,   304,   305,   316,   325,   356,
      17,    18,     0,     0,     0,    39,    39,     0,     0,     0,
       0,     0,     0,     0,   228,   229,   285,     0,   283,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,     0,   199,   200,     0,   208,     0,     0,
       0,     0,   290,   195,     0,   322,   323,   329,   327,   308,
       0,   326,    21,    22,    23,     0,     0,     0,    44,   222,
     223,     0,     0,   227,   230,     0,   247,   262,     0,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   290,
     160,   375,   368,   371,   373,   376,   378,   377,     0,     0,
       0,     0,   289,     0,   300,     0,     0,   350,   326,   353,
     324,   328,   330,   391,     0,    27,    26,    39,     0,   243,
       0,   225,   286,     0,     0,     0,   367,     0,     0,     0,
     303,   211,   290,   290,   291,   287,   299,   301,     0,   346,
     351,     0,   325,   359,     0,   357,     0,   361,     0,   330,
     329,   318,   410,   408,   409,   411,   412,   413,   414,   415,
     407,   407,   407,     0,   390,   392,   394,   326,   407,   407,
     309,     0,   242,     0,     0,   260,   290,   296,   294,   233,
     290,   372,   365,   374,   302,   212,     0,     0,     0,   379,
     326,   380,   326,   352,     0,   313,     0,     0,   317,     0,
     406,   403,   402,   405,   314,     0,   397,   316,   396,   401,
     404,    28,   244,   245,     0,   234,     0,   288,   292,   290,
     400,     0,   330,    43,     0,   358,   362,     0,     0,   310,
     393,   395,   326,   297,   290,   295,   293,     0,   330,   329,
     318,     0,    42,     0,   398,   381,   311,   312,   298,     0,
       0,     0,   205,     0,   387,   386,   399,     0,     0,   385,
     382,   383,   384
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -562,  -562,  -249,  -562,   485,  -562,  -562,  -562,  -562,  -562,
     344,  -562,  -562,  -562,  -562,  -562,  -328,   -41,   -36,   -88,
    -417,  -562,   -97,   -71,    92,  -562,   279,   281,   285,   280,
     287,  -349,   278,  -336,   272,  -335,   275,  -327,   284,  -325,
    -225,  -562,   403,  -562,  -562,   752,  -255,  -562,  -562,  -562,
    -562,   -17,   437,  -562,    46,  -562,   127,   126,   140,   142,
     144,   141,   145,   143,   147,  -342,  -562,  -562,    51,  -467,
       7,    16,   -21,  -562,  -562,   105,  -227,    43,  -468,  -562,
    -562,   -29,  -381,  -508,  -313,  -420,  -494,  -212,  -562,  -562,
    -562,   107,  -315,  -562,  -562,    29,  -562,  -562,  -562,   308,
    -562,    98,  -562,  -562,   599,  -561,  -562,  -161,  -562,    12,
    -562,    28,  -562,  -562,  -518,  -461,  -562,  -562,   353,     2,
    -562,    20,   245,   320,    15,    10,    31,  -562,    50,    57,
      77,   170,   183,   188,   200,   203,   391,   416,   425,   438,
     482,   487,   493,   495,   500,   503,   508,   549,   565,   578,
     604,   607,   622,   653,   655,   669,   672,   693,   695,   708,
     717,   721,   724,   726,   738,   741,   743,   762,   793,   812,
     815,     0,  -562,  -562,   817,   830,   833
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    57,    58,    59,    60,    61,   198,   248,    62,   199,
     200,   249,   340,    63,    64,   134,   254,   255,   202,   342,
     343,    65,   136,   544,   220,   221,   222,   223,   224,   225,
     226,   280,   227,   285,   228,   288,   229,   291,   230,   295,
     231,   232,   259,   234,   235,   359,   360,   261,   262,   263,
     528,   529,   361,   440,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   427,   428,   510,   511,
     545,   535,   588,   512,   513,   514,   530,   405,   406,   469,
     470,   609,   321,   467,   551,   408,   468,   322,   323,   324,
     516,   517,   325,   553,   554,   555,   556,   326,   537,   394,
     502,   503,   327,   504,   328,   557,   599,   400,   573,   574,
     575,   576,   329,   519,   610,   611,   578,   579,   352,   265,
     138,   266,   267,   268,   269,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,   478,    66,   524,   351,   577,   399,   399,   296,   320,
      71,   423,   407,   399,   560,    70,   618,   135,   483,   447,
      67,   404,   378,   466,   201,   195,   541,   197,   561,   452,
       2,    72,   534,   448,  -307,   449,   582,   374,   245,   634,
     533,  -364,   630,   376,   450,   246,   508,   451,   521,   247,
      73,   -45,  -306,   509,   453,   137,   219,    74,   274,   116,
     404,    66,  -307,   453,   589,   606,   542,   137,   142,    71,
     389,   453,   628,   139,    70,   596,  -307,    75,   583,    67,
     142,   634,   410,   411,   631,   139,   520,   475,   476,   203,
      72,   242,   243,    52,  -306,   241,   508,   577,   552,   643,
     488,   508,   595,   509,   590,   245,   245,   625,   509,    73,
     612,   613,   629,   209,   210,   577,    74,   619,   620,   534,
     419,   420,   197,   626,   649,   422,   251,   137,   204,   237,
     238,   239,   240,   137,   137,   137,    75,   137,   650,   644,
     142,   466,   570,   447,   245,   139,   142,   142,   142,   518,
     142,   139,   139,   139,   660,   139,   558,   448,   407,   449,
     271,   401,   596,   472,   473,   319,   458,   409,   450,   461,
      76,   451,   276,   463,   524,   337,   275,   626,   466,   520,
     552,   277,   552,    77,   331,   508,     2,   404,    78,   570,
     570,   570,   509,   272,   273,   -43,   497,   570,   570,   581,
      79,   518,   380,    80,   137,   137,   137,  -364,  -360,   559,
     300,   301,   302,   465,   278,   279,   652,   142,   142,   142,
     546,   332,   139,   139,   139,   341,   390,   531,   333,    76,
     508,   335,  -306,   336,   570,   237,   646,   509,   330,   338,
     404,   345,    77,   137,   339,    68,   297,    78,   237,   397,
       2,   466,   570,   298,   299,   344,   142,   209,   210,    79,
    -306,   139,    80,   508,   617,   398,   375,   466,   520,   658,
     509,   116,   377,    66,   237,   237,   237,   237,   237,   237,
     412,    71,   237,   286,   287,   415,    70,   237,     2,   413,
     237,    67,   445,   237,   414,   209,   210,   237,   140,   237,
     391,   392,    72,   416,    68,   353,   417,   209,   210,   443,
     140,   571,   354,   355,   356,   357,   289,   290,    52,   395,
      69,    73,   444,   377,   377,   460,   403,   446,    74,   617,
     377,   116,   116,    66,    66,   607,   300,   301,   302,   465,
     454,    71,    71,   455,   418,   456,    70,    70,    75,   375,
     377,    67,    67,   457,   375,   459,   424,   425,   571,   571,
     571,  -369,    72,    72,   209,   210,   571,   571,   464,   292,
     140,   441,   442,   141,   293,   294,   140,   140,   140,    69,
     140,    73,    73,   474,  -315,   141,  -315,  -315,    74,    74,
     522,    81,   209,   210,   632,   377,   209,   210,   330,   477,
     237,   209,   210,   571,   281,   282,   283,   284,    75,    75,
     479,   480,   116,   116,    66,    66,    82,   137,   137,   481,
     344,   571,    71,    71,   482,    83,   484,    70,    70,   499,
     142,   142,    67,    67,   485,   139,   139,   539,    84,   501,
     404,    76,   525,    72,    72,   141,   506,   140,   140,   140,
      81,   141,   141,   141,    77,   141,   507,   526,   237,    78,
     527,   505,    73,    73,   536,   538,   377,   593,   580,    74,
      74,    79,   584,   592,    80,    82,   594,   598,   602,   603,
     236,   605,    85,   377,    83,   604,   140,    86,   614,    75,
      75,  -363,   621,    87,   655,    88,   639,    84,     6,   666,
      89,    76,    76,    90,   300,   301,   302,   465,    91,   615,
     237,   540,   659,   237,    77,    77,    68,   656,   377,    78,
      78,   657,   141,   141,   141,   377,   664,   665,   669,   137,
     233,    79,    79,   636,    80,    80,   670,   671,   505,   672,
     237,    85,   142,   250,   196,   651,    86,   139,   500,    92,
     237,   379,    87,   601,    88,   381,   383,   386,   385,    89,
     382,   141,    90,   387,   384,    93,   622,    91,   487,   489,
     264,   270,   377,   377,   377,   388,    68,    68,    94,   585,
     377,   377,    76,    76,   490,   377,   236,   491,   493,   236,
     492,    69,   495,   494,   597,    77,    77,   496,   237,   236,
      78,    78,   624,   627,    95,   645,   237,    96,    92,   347,
     348,   349,    79,    79,   358,    80,    80,   377,   547,   601,
     616,   663,    97,   550,    93,   236,   236,   236,   236,   236,
     236,   635,   402,   236,   591,   654,   233,    94,   236,   233,
       0,   236,     0,   641,   236,   653,   647,     0,   236,   233,
     236,    69,    69,    98,   418,    99,   393,    68,    68,     0,
     140,   140,    81,    95,     0,     0,    96,     0,     0,   100,
       0,   396,   101,     0,     0,   233,   233,   233,   233,   233,
     233,    97,     0,   233,     0,     0,     0,    82,   233,     0,
       0,   233,     0,   102,   233,   103,    83,     0,   233,     0,
     233,   648,   300,   301,   302,   465,     0,     0,   104,    84,
       0,     0,    98,     0,    99,     0,     0,   105,     0,     0,
       0,   106,    81,    81,   107,     0,   108,     0,   100,     0,
       0,   101,    69,    69,     0,   141,   141,     0,   109,     0,
       0,   110,     0,   111,     0,     0,     0,    82,    82,   236,
       0,   236,   102,    85,   103,     0,    83,    83,    86,     0,
     471,     0,   112,     0,    87,     0,    88,   104,     0,    84,
      84,    89,   140,     0,    90,     0,   105,     0,     0,    91,
     106,     0,     0,   107,     0,   108,   421,   661,   300,   301,
     302,   465,     0,   113,     0,   426,     0,   109,     0,   233,
     110,   233,   111,    81,    81,     0,     0,     0,     0,   236,
       0,     0,   114,    85,    85,   115,     0,   117,    86,    86,
      92,   112,     0,   523,    87,    87,    88,    88,    82,    82,
     118,    89,    89,   119,    90,    90,    93,    83,    83,    91,
      91,     0,     0,     0,     0,     0,     0,   141,     0,    94,
      84,    84,   113,     0,     0,     0,     0,     0,     0,   233,
       0,   236,     0,     0,   236,     0,     0,     0,   548,     0,
       0,   114,     0,     0,   115,    95,   117,   486,    96,     0,
      92,    92,     0,     0,     0,     0,     0,     0,     0,   118,
     498,   236,   119,    97,    85,    85,    93,    93,     0,    86,
      86,   236,     0,     0,   600,    87,    87,    88,    88,    94,
      94,   233,    89,    89,   233,    90,    90,     0,     0,     0,
      91,    91,   532,     0,    98,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    95,     0,    96,    96,
     100,   233,     0,   101,     0,     0,     0,     0,     0,   236,
       0,   233,   633,    97,    97,     0,     0,   236,     0,     0,
       0,    92,    92,     0,   102,     0,   103,     0,     0,   260,
     642,   587,     0,     0,     0,     0,     0,    93,    93,   104,
       0,     0,     0,     0,    98,    98,    99,    99,   105,     0,
      94,    94,   106,     0,     0,   107,     0,   108,   608,   233,
     100,   100,     0,   101,   101,     0,     0,   233,   346,   109,
       0,   350,   110,     0,   111,     0,    95,    95,     0,    96,
      96,   623,     0,     0,   102,   102,   103,   103,     0,     0,
       0,     0,     0,   112,    97,    97,     0,     0,     0,   104,
     104,     0,     0,   637,   638,     0,     0,     0,   105,   105,
       0,     0,   106,   106,     0,   107,   107,   108,   108,     0,
       0,     0,     0,   587,   113,    98,    98,    99,    99,   109,
     109,     0,   110,   110,   111,   111,     0,     0,     0,     0,
       0,   100,   100,   114,   101,   101,   115,   608,   117,     0,
       0,     0,     0,   112,   112,     0,     0,   667,   668,     0,
       0,   118,     0,     0,   119,   102,   102,   103,   103,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     104,   104,   572,     0,   113,   113,     0,     0,     0,   105,
     105,     0,     0,   106,   106,     0,   107,   107,   108,   108,
       0,     0,     0,   114,   114,     0,   115,   115,   117,   117,
     109,   109,     0,   110,   110,   111,   111,     0,     0,     0,
       0,   118,   118,     0,   119,   119,     0,     0,     0,   572,
     572,   572,     0,     0,   112,   112,     0,   572,   572,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   350,     0,   350,   350,   350,   350,   350,
     350,   350,   350,   350,     0,   113,   113,     0,     0,     0,
       0,     0,     0,     0,   572,     0,     2,     0,   640,     0,
       0,     0,     0,     0,   114,   114,     0,   115,   115,   117,
     117,     0,   572,     0,   350,     0,     0,     0,     0,     0,
       0,     0,   118,   118,     2,   119,   119,     0,     0,   562,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
     563,   564,   565,   566,   567,   568,   569,     2,     0,     0,
       0,     0,     0,     0,     0,   350,   562,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,     2,   563,   564,   565,
     566,   567,   568,   569,   562,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,     2,   563,   564,   565,   566,   567,
     568,   569,     0,     0,     0,     0,     0,   562,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     2,   563,   564,
     565,   566,   567,   568,   569,     0,   562,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,     2,   563,   564,   565,
     566,   567,   568,   569,   562,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,     2,   563,   564,   565,   566,   567,
     568,   569,     0,     0,     0,   549,     0,   562,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,   563,   564,
     565,   566,   567,   568,   569,     0,     0,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   515,     0,     0,     0,
       0,     0,     0,     0,     0,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   515,     2,     3,     4,     5,     6,
       0,     0,   209,   210,     0,     0,     0,     0,     0,     0,
       0,   211,   212,   213,   214,   215,   216,     0,     0,     2,
     205,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,     0,   211,   212,   213,   214,   215,
     216,  -398,     0,     0,     0,     0,  -213,     0,  -398,  -398,
    -213,     0,     0,     0,     0,     0,     0,     0,  -213,     0,
       0,   256,   257,     0,   258,     0,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   217,   218,     2,     0,     0,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     2,
       0,     0,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,     0,     0,     0,     0,  -235,     0,  -235,  -235,
    -235,     0,     0,     0,     0,     0,     0,     0,  -235,     0,
       2,     0,     0,     0,     0,     0,     0,     0,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     2,     0,     0,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
       0,     0,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
       0,     0,     0,     0,     0,     0,     0,     0,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   120,   121,     0,
       2,     3,     4,     5,     6,     7,     8,   122,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   123,   124,   125,   126,   127,   128,   129,     0,
       0,     0,   130,   131,   132,   133,    54,    55,    56,   244,
     121,     0,     2,     3,     4,     5,     6,     7,     8,   122,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,   252,   121,     0,     2,     3,     4,     5,     6,     7,
       8,   122,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,   123,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,   334,   121,     0,     2,     3,     4,     5,
       6,     7,     8,   122,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     1,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,     1,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     1,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,     1,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,     1,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     1,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,     1,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,   121,
       0,     2,     3,     4,     5,     6,     7,     8,   122,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
     121,     0,     2,     3,     4,     5,     6,     7,     8,   253,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,   123,   124,     2,     3,     4,     5,
       6,     0,     0,   209,   210,     0,   499,     0,    54,    55,
      56,     0,   211,   212,   213,   214,   215,   216,     2,     3,
       4,     5,     6,     0,     0,   209,   210,     0,   586,     0,
       0,     0,     0,     0,   211,   212,   213,   214,   215,   216,
       2,     3,     4,     5,     6,     0,     0,   209,   210,     0,
       0,     0,     0,     0,     0,     0,   211,   212,   213,   214,
     215,   216,   256,   257,     0,   258,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     0,     0,   209,
     210,     0,     0,     0,   256,   257,     0,   258,   211,   662,
     213,   214,   215,   216,     2,   205,   206,   207,   208,     0,
       0,   209,   210,     0,   462,     0,   256,   257,     0,   258,
     211,   212,   213,   214,   215,   216,     2,   205,   206,   207,
     208,     0,     0,   209,   210,     0,   543,     0,     0,     0,
       0,     0,   211,   212,   213,   214,   215,   216,   256,   257,
       0,   258,     0,     0,     0,     0,     2,   205,   206,   207,
     208,     0,     0,   209,   210,     0,     0,     0,     0,     0,
     217,   218,   211,   212,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218
};

static const yytype_int16 yycheck[] =
{
       0,   418,     0,   471,   259,   523,   321,   322,   233,   236,
       0,   353,   325,   328,   522,     0,   577,    53,    12,   368,
       0,    23,   271,   404,    65,     0,    17,    58,   522,    15,
       6,     0,   499,   369,    15,   370,    15,   264,   135,   600,
      43,    43,    15,   270,   371,    65,    11,   372,   468,    58,
       0,    15,    15,    18,    57,    53,   127,     0,    40,    59,
      23,    59,    43,    57,    17,   559,    57,    65,    53,    59,
     295,    57,    17,    53,    59,   542,    57,     0,    57,    59,
      65,   642,   331,   332,    57,    65,   467,   415,   416,   125,
      59,   132,   133,    57,    57,   131,    11,   615,   518,    17,
     442,    11,    17,    18,    57,   202,   203,    17,    18,    59,
     571,   572,    57,    13,    14,   633,    59,   578,   579,   586,
     347,   348,    58,   590,   632,   352,     3,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    59,   135,   632,    57,
     125,   522,   523,   492,   241,   125,   131,   132,   133,   464,
     135,   131,   132,   133,   648,   135,    23,   493,   471,   494,
       3,   322,   629,   412,   413,   236,   393,   328,   495,   396,
       0,   496,    38,   398,   642,   246,    39,   644,   559,   560,
     600,    22,   602,     0,     3,    11,     6,    23,     0,   570,
     571,   572,    18,    41,    42,    15,   451,   578,   579,   527,
       0,   516,   273,     0,   202,   203,   204,    43,    44,    76,
      77,    78,    79,    80,    36,    37,   633,   202,   203,   204,
      46,     3,   202,   203,   204,    45,   297,   482,     3,    59,
      11,     3,    15,     3,   615,   233,    17,    18,   236,    66,
      23,     3,    59,   241,    58,     0,    11,    59,   246,    15,
       6,   632,   633,    18,    19,   253,   241,    13,    14,    59,
      43,   241,    59,    11,   577,    15,   264,   648,   649,    17,
      18,   271,   270,   271,   272,   273,   274,   275,   276,   277,
       3,   271,   280,    30,    31,    15,   271,   285,     6,     3,
     288,   271,    38,   291,    67,    13,    14,   295,    53,   297,
     298,   299,   271,    15,    59,    11,    57,    13,    14,    40,
      65,   523,    18,    19,    20,    21,    24,    25,    57,   317,
       0,   271,    39,   321,   322,   396,   324,    22,   271,   642,
     328,   331,   332,   331,   332,    76,    77,    78,    79,    80,
      15,   331,   332,    15,   344,    43,   331,   332,   271,   347,
     348,   331,   332,    12,   352,    16,   354,   355,   570,   571,
     572,    16,   331,   332,    13,    14,   578,   579,    16,    23,
     125,    41,    42,    53,    28,    29,   131,   132,   133,    59,
     135,   331,   332,     3,    11,    65,    13,    14,   331,   332,
      11,     0,    13,    14,    11,   393,    13,    14,   396,    45,
     398,    13,    14,   615,    32,    33,    34,    35,   331,   332,
      15,    15,   412,   413,   412,   413,     0,   415,   416,    57,
     418,   633,   412,   413,    15,     0,    15,   412,   413,    16,
     415,   416,   412,   413,    57,   415,   416,   508,     0,    15,
      23,   271,     3,   412,   413,   125,    15,   202,   203,   204,
      59,   131,   132,   133,   271,   135,    15,     3,   456,   271,
      15,   459,   412,   413,    57,    46,   464,   538,    15,   412,
     413,   271,    43,    17,   271,    59,    12,   548,    57,    44,
     127,    12,     0,   481,    59,    43,   241,     0,    15,   412,
     413,    43,     3,     0,    15,     0,    12,    59,    10,    44,
       0,   331,   332,     0,    77,    78,    79,    80,     0,    57,
     508,   509,    15,   511,   331,   332,   271,    12,   516,   331,
     332,    12,   202,   203,   204,   523,    15,    15,    12,   527,
     127,   331,   332,   604,   331,   332,    12,    12,   536,    12,
     538,    59,   527,   199,    59,   633,    59,   527,   456,     0,
     548,   272,    59,   551,    59,   274,   276,   285,   280,    59,
     275,   241,    59,   288,   277,     0,   583,    59,   441,   443,
     217,   218,   570,   571,   572,   291,   331,   332,     0,   533,
     578,   579,   412,   413,   444,   583,   233,   445,   447,   236,
     446,   271,   449,   448,   543,   412,   413,   450,   596,   246,
     412,   413,   586,   596,     0,   626,   604,     0,    59,   256,
     257,   258,   412,   413,   261,   412,   413,   615,   513,   617,
     577,   650,     0,   516,    59,   272,   273,   274,   275,   276,
     277,   602,   324,   280,   536,   633,   233,    59,   285,   236,
      -1,   288,    -1,   615,   291,   633,   631,    -1,   295,   246,
     297,   331,   332,     0,   654,     0,   303,   412,   413,    -1,
     415,   416,   271,    59,    -1,    -1,    59,    -1,    -1,     0,
      -1,   318,     0,    -1,    -1,   272,   273,   274,   275,   276,
     277,    59,    -1,   280,    -1,    -1,    -1,   271,   285,    -1,
      -1,   288,    -1,     0,   291,     0,   271,    -1,   295,    -1,
     297,    76,    77,    78,    79,    80,    -1,    -1,     0,   271,
      -1,    -1,    59,    -1,    59,    -1,    -1,     0,    -1,    -1,
      -1,     0,   331,   332,     0,    -1,     0,    -1,    59,    -1,
      -1,    59,   412,   413,    -1,   415,   416,    -1,     0,    -1,
      -1,     0,    -1,     0,    -1,    -1,    -1,   331,   332,   396,
      -1,   398,    59,   271,    59,    -1,   331,   332,   271,    -1,
     407,    -1,     0,    -1,   271,    -1,   271,    59,    -1,   331,
     332,   271,   527,    -1,   271,    -1,    59,    -1,    -1,   271,
      59,    -1,    -1,    59,    -1,    59,   349,    76,    77,    78,
      79,    80,    -1,     0,    -1,   358,    -1,    59,    -1,   396,
      59,   398,    59,   412,   413,    -1,    -1,    -1,    -1,   456,
      -1,    -1,     0,   331,   332,     0,    -1,     0,   331,   332,
     271,    59,    -1,   470,   331,   332,   331,   332,   412,   413,
       0,   331,   332,     0,   331,   332,   271,   412,   413,   331,
     332,    -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,   271,
     412,   413,    59,    -1,    -1,    -1,    -1,    -1,    -1,   456,
      -1,   508,    -1,    -1,   511,    -1,    -1,    -1,   515,    -1,
      -1,    59,    -1,    -1,    59,   271,    59,   440,   271,    -1,
     331,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
     453,   538,    59,   271,   412,   413,   331,   332,    -1,   412,
     413,   548,    -1,    -1,   551,   412,   413,   412,   413,   331,
     332,   508,   412,   413,   511,   412,   413,    -1,    -1,    -1,
     412,   413,   485,    -1,   271,    -1,   271,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,   332,    -1,   331,   332,
     271,   538,    -1,   271,    -1,    -1,    -1,    -1,    -1,   596,
      -1,   548,   599,   331,   332,    -1,    -1,   604,    -1,    -1,
      -1,   412,   413,    -1,   271,    -1,   271,    -1,    -1,   217,
     617,   534,    -1,    -1,    -1,    -1,    -1,   412,   413,   271,
      -1,    -1,    -1,    -1,   331,   332,   331,   332,   271,    -1,
     412,   413,   271,    -1,    -1,   271,    -1,   271,   561,   596,
     331,   332,    -1,   331,   332,    -1,    -1,   604,   256,   271,
      -1,   259,   271,    -1,   271,    -1,   412,   413,    -1,   412,
     413,   584,    -1,    -1,   331,   332,   331,   332,    -1,    -1,
      -1,    -1,    -1,   271,   412,   413,    -1,    -1,    -1,   331,
     332,    -1,    -1,   606,   607,    -1,    -1,    -1,   331,   332,
      -1,    -1,   331,   332,    -1,   331,   332,   331,   332,    -1,
      -1,    -1,    -1,   626,   271,   412,   413,   412,   413,   331,
     332,    -1,   331,   332,   331,   332,    -1,    -1,    -1,    -1,
      -1,   412,   413,   271,   412,   413,   271,   650,   271,    -1,
      -1,    -1,    -1,   331,   332,    -1,    -1,   660,   661,    -1,
      -1,   271,    -1,    -1,   271,   412,   413,   412,   413,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     412,   413,   523,    -1,   331,   332,    -1,    -1,    -1,   412,
     413,    -1,    -1,   412,   413,    -1,   412,   413,   412,   413,
      -1,    -1,    -1,   331,   332,    -1,   331,   332,   331,   332,
     412,   413,    -1,   412,   413,   412,   413,    -1,    -1,    -1,
      -1,   331,   332,    -1,   331,   332,    -1,    -1,    -1,   570,
     571,   572,    -1,    -1,   412,   413,    -1,   578,   579,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   441,    -1,   443,   444,   445,   446,   447,
     448,   449,   450,   451,    -1,   412,   413,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   615,    -1,     6,    -1,    45,    -1,
      -1,    -1,    -1,    -1,   412,   413,    -1,   412,   413,   412,
     413,    -1,   633,    -1,   482,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   412,   413,     6,   412,   413,    -1,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    98,    99,   100,   101,   102,   103,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   533,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     6,    97,    98,    99,
     100,   101,   102,   103,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     6,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     6,    97,    98,
      99,   100,   101,   102,   103,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     6,    97,    98,    99,
     100,   101,   102,   103,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     6,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    17,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     6,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,     6,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,     6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    72,    73,    -1,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    72,    73,     6,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     6,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     6,    -1,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     6,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,     3,
      -1,    -1,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,     3,    -1,    -1,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     6,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    -1,    72,    73,
      74,    -1,    22,    23,    24,    25,    26,    27,     6,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
       6,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    72,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    -1,    -1,    72,    73,    -1,    75,    22,    23,
      24,    25,    26,    27,     6,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    -1,    72,    73,    -1,    75,
      22,    23,    24,    25,    26,    27,     6,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    72,    73,
      -1,    75,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,
      72,    73,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73
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
      55,    56,    57,    58,    72,    73,    74,   105,   106,   107,
     108,   109,   112,   117,   118,   125,   223,   225,   226,   227,
     228,   229,   230,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   278,   279,   280,
       3,     4,    13,    58,    59,    60,    61,    62,    63,    64,
      68,    69,    70,    71,   119,   122,   126,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   108,    58,   110,   113,
     114,   121,   122,   122,   223,     7,     8,     9,    10,    13,
      14,    22,    23,    24,    25,    26,    27,    72,    73,   127,
     128,   129,   130,   131,   132,   133,   134,   136,   138,   140,
     142,   144,   145,   146,   147,   148,   222,   223,   223,   223,
     223,   122,   121,   121,     3,   126,    65,    58,   111,   115,
     114,     3,     3,    13,   120,   121,    72,    73,    75,   146,
     149,   151,   152,   153,   222,   223,   225,   226,   227,   228,
     222,     3,    41,    42,    40,    39,    38,    22,    36,    37,
     135,    32,    33,    34,    35,   137,    30,    31,   139,    24,
      25,   141,    23,    28,    29,   143,   144,    11,    18,    19,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   127,
     180,   186,   191,   192,   193,   196,   201,   206,   208,   216,
     223,     3,     3,     3,     3,     3,     3,   127,    66,    58,
     116,    45,   123,   124,   223,     3,   149,   222,   222,   222,
     149,   150,   222,    11,    18,    19,    20,    21,   222,   149,
     150,   156,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   180,   223,   180,   223,   106,   130,
     127,   131,   132,   133,   134,   136,   138,   140,   142,   144,
     127,   223,   223,   222,   203,   223,   222,    15,    15,   196,
     211,   211,   203,   223,    23,   181,   182,   188,   189,   211,
     106,   106,     3,     3,    67,    15,    15,    57,   275,   180,
     180,   156,   180,   169,   223,   223,   156,   170,   171,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     157,    41,    42,    40,    39,    38,    22,   135,   137,   139,
     141,   143,    15,    57,    15,    15,    43,    12,   180,    16,
     127,   180,    16,   144,    16,    80,   186,   187,   190,   183,
     184,   222,   106,   106,     3,   120,   120,    45,   124,    15,
      15,    57,    15,    12,    15,    57,   156,   160,   169,   161,
     162,   163,   164,   165,   166,   167,   168,   150,   156,    16,
     128,    15,   204,   205,   207,   223,    15,    15,    11,    18,
     172,   173,   177,   178,   179,    96,   194,   195,   196,   217,
     186,   189,    11,   222,   182,     3,     3,    15,   154,   155,
     180,   150,   156,    43,   173,   175,    57,   202,    46,   127,
     223,    17,    57,    16,   127,   174,    46,   179,   222,    17,
     195,   188,   189,   197,   198,   199,   200,   209,    23,    76,
     187,   190,    76,    97,    98,    99,   100,   101,   102,   103,
     186,   191,   208,   212,   213,   214,   215,   218,   220,   221,
      15,   120,    15,    57,    43,   158,    16,   156,   176,    17,
      57,   205,    17,   127,    12,    17,   173,   172,   127,   210,
     222,   223,    57,    44,    43,    12,   190,    76,   156,   185,
     218,   219,   219,   219,    15,    57,   181,   188,   209,   219,
     219,     3,   155,   156,   175,    17,   173,   174,    17,    57,
      15,    57,    11,   222,   209,   199,   127,   156,   156,    12,
      45,   215,   222,    17,    57,   176,    17,   228,    76,   187,
     190,   123,   124,   213,   223,    15,    12,    12,    17,    15,
     190,    76,    23,   185,    15,    15,    44,   156,   156,    12,
      12,    12,    12
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
     126,   126,   126,   126,   126,   126,   126,   126,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   143,   144,   144,   145,   145,   145,   145,
     145,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     147,   147,   147,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   152,   152,   152,   152,   152,
     152,   152,   153,   154,   154,   155,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   175,   175,   176,   176,   176,   177,
     178,   178,   179,   179,   180,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   183,   184,   184,   185,   185,   186,
     186,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   196,   196,   197,   197,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   207,   208,   208,   209,
     210,   210,   210,   210,   210,   210,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   215,   215,   216,   217,
     217,   218,   218,   218,   218,   218,   219,   219,   220,   220,
     220,   220,   220,   220,   221,   221,   222,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280
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
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     4,     1,     2,     2,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     6,     7,     1,     1,     1,     1,     1,     3,     1,
       2,     2,     4,     4,     1,     4,     1,     4,     3,     3,
       4,     2,     2,     6,     7,     1,     1,     1,     1,     1,
       3,     1,     6,     1,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     0,     1,     3,     2,     4,     1,
       0,     1,     3,     4,     2,     4,     1,     3,     4,     2,
       1,     2,     3,     2,     2,     1,     0,     1,     2,     3,
       5,     6,     6,     4,     4,     1,     0,     1,     0,     1,
       1,     1,     1,     1,     2,     1,     0,     2,     3,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     2,     1,     1,
       1,     2,     3,     1,     2,     2,     2,     1,     3,     1,
       0,     1,     3,     1,     0,     6,     2,     1,     0,     1,
       0,     1,     3,     1,     3,     4,     1,     4,     4,     2,
       1,     3,     5,     6,     6,     5,     4,     4,     1,     0,
       1,     0,     1,     3,     1,     3,     2,     2,     1,     7,
       4,     2,     2,     2,     2,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
       0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,    41,    43,
      45,     0,     0,     0,     0,     0,     0,     0,    47,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,     3,     0,    13,     0,    15,     0,    12,     0,   426,
       0,   426,     0,   426,     0,     4,     0,   322,     0,   322,
       0,   389,     0,   389,     0,   389,     0,   398,     0,   398,
       0,   398,     0,     4,     0,     4,     0,    45,     0,   398,
       0,   398,     0,   398,     0,   398,     0,   398,     0,   316,
       0,   316,     0,     4,     0,     4,     0,   330,     0,   407,
       0,   407,     0,   407,     0,   407,     0,   407,     0,   316,
       0,   316,     0,   398,     0,   398,     0
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
  "\"_Alignof\"", "OTHER_CHAR", "\"_Generic\"", "\"static\"", "\"const\"",
  "\"restrict\"", "\"volatile\"", "\"_Atomic\"", "\"void\"", "\"char\"",
  "\"short\"", "\"int\"", "\"long\"", "\"float\"", "\"double\"",
  "\"signed\"", "\"unsigned\"", "\"_Bool\"", "\"_Complex\"", "\"struct\"",
  "\"union\"", "\"enum\"", "\"_Alignas\"", "\"_Static_assert\"",
  "\"typedef\"", "\"extern\"", "\"_Thread_local\"", "\"auto\"",
  "\"register\"", "\"inline\"", "\"_Noreturn\"", "$accept", "file",
  "group_opt", "group", "group_part", "if_section", "elif_groups_opt",
  "else_group_opt", "if_group", "elif_groups", "elif_group", "else_group",
  "endif_line", "control_line", "text_line", "non_directive",
  "replacement_list", "pp_tokens_opt", "pp_tokens", "identifier_list_opt",
  "identifier_list", "not_hash_symbol", "preprocessing_token",
  "constant_expression", "constant_conditional_expression",
  "constant_logical_or_expression", "constant_logical_and_expression",
  "constant_inclusive_or_expression", "constant_exclusive_or_expression",
  "constant_and_expression", "constant_equality_expression",
  "equality_operator", "constant_relational_expression",
  "relational_operator", "constant_shift_expression", "shift_operator",
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
  "other_char", YY_NULLPTR
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
#line 185 "phase4.y"
                { printf("EOF\n"); }
#line 2852 "phase4.tab.c"
    break;

  case 7: /* group_part: if_section  */
#line 188 "phase4.y"
                       { printf("end if section (line %d)\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line); }
#line 2858 "phase4.tab.c"
    break;

  case 8: /* group_part: control_line  */
#line 189 "phase4.y"
                   { printf("end control line %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line); }
#line 2864 "phase4.tab.c"
    break;

  case 9: /* group_part: text_line  */
#line 190 "phase4.y"
                { printf("macro references on line %d: %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line, mac_ref_count); }
#line 2870 "phase4.tab.c"
    break;

  case 10: /* group_part: "#" non_directive  */
#line 191 "phase4.y"
                        { printf("end non-directive\n"); }
#line 2876 "phase4.tab.c"
    break;

  case 24: /* control_line: "#" "include" pp_tokens EOL  */
#line 204 "phase4.y"
                                          { include_file((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 2882 "phase4.tab.c"
    break;

  case 25: /* control_line: "#" "define" identifier replacement_list EOL  */
#line 205 "phase4.y"
                                                   { define_simple_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 2888 "phase4.tab.c"
    break;

  case 26: /* control_line: "#" "define" identifier "=(" identifier_list_opt ")" replacement_list EOL  */
#line 206 "phase4.y"
                                                                                { define_function_like_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.identifier_list), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 2894 "phase4.tab.c"
    break;

  case 27: /* control_line: "#" "define" identifier "=(" "..." ")" replacement_list EOL  */
#line 207 "phase4.y"
                                                                  { define_function_like_variadic_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 2900 "phase4.tab.c"
    break;

  case 28: /* control_line: "#" "define" identifier "=(" identifier_list "," "..." ")" replacement_list EOL  */
#line 208 "phase4.y"
                                                                                      { define_function_like_variadic_macro_with_args((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.token), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.identifier_list), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list)); }
#line 2906 "phase4.tab.c"
    break;

  case 29: /* control_line: "#" "undef" identifier EOL  */
#line 209 "phase4.y"
                                 { undefine_macro((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token)); }
#line 2912 "phase4.tab.c"
    break;

  case 38: /* pp_tokens_opt: pp_tokens  */
#line 218 "phase4.y"
                         { ((*yyvalp).token_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.token_list); }
#line 2918 "phase4.tab.c"
    break;

  case 39: /* pp_tokens_opt: %empty  */
#line 219 "phase4.y"
      { ((*yyvalp).token_list) = NULL; }
#line 2924 "phase4.tab.c"
    break;

  case 40: /* pp_tokens: preprocessing_token  */
#line 221 "phase4.y"
                               {
        ((*yyvalp).token_list) = malloc(sizeof(struct token_list));
        ((*yyvalp).token_list)->token = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.token);
        ((*yyvalp).token_list)->next = NULL;
    }
#line 2934 "phase4.tab.c"
    break;

  case 41: /* pp_tokens: pp_tokens preprocessing_token  */
#line 226 "phase4.y"
                                    { 
        ((*yyvalp).token_list) = malloc(sizeof(struct token_list));
        ((*yyvalp).token_list)->token = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.token);
        ((*yyvalp).token_list)->next = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.token_list);
    }
#line 2944 "phase4.tab.c"
    break;

  case 42: /* identifier_list_opt: identifier_list  */
#line 232 "phase4.y"
                                     { ((*yyvalp).identifier_list) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.identifier_list); }
#line 2950 "phase4.tab.c"
    break;

  case 43: /* identifier_list_opt: %empty  */
#line 233 "phase4.y"
      { ((*yyvalp).identifier_list) = NULL; }
#line 2956 "phase4.tab.c"
    break;

  case 44: /* identifier_list: identifier comma identifier_list  */
#line 235 "phase4.y"
                                                  {
        ((*yyvalp).identifier_list) = malloc(sizeof(struct identifier_list));
        ((*yyvalp).identifier_list)->text = mycopystr(scanner);
        ((*yyvalp).identifier_list)->next = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.identifier_list);
    }
#line 2966 "phase4.tab.c"
    break;

  case 45: /* identifier_list: identifier  */
#line 240 "phase4.y"
                 {
        ((*yyvalp).identifier_list) = malloc(sizeof(struct identifier_list));
        ((*yyvalp).identifier_list)->text = mycopystr(scanner);
        ((*yyvalp).identifier_list)->next = NULL;
    }
#line 2976 "phase4.tab.c"
    break;

  case 418: /* identifier: IDENTIFIER  */
#line 562 "phase4.y"
                       { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_IDENTIFIER; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 2986 "phase4.tab.c"
    break;

  case 419: /* header_name: HEADER_NAME  */
#line 567 "phase4.y"
                         { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_HEADER_NAME; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 2996 "phase4.tab.c"
    break;

  case 420: /* integral_constant: INTEGRAL_CONSTANT  */
#line 572 "phase4.y"
                                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_INTEGRAL_CONSTANT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3006 "phase4.tab.c"
    break;

  case 421: /* floating_constant: FLOATING_CONSTANT  */
#line 577 "phase4.y"
                                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_FLOATING_CONSTANT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3016 "phase4.tab.c"
    break;

  case 422: /* character_constant: CHARACTER_CONSTANT  */
#line 582 "phase4.y"
                                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CHARACTER_CONSTANT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3026 "phase4.tab.c"
    break;

  case 423: /* string_literal: STRING_LITERAL  */
#line 587 "phase4.y"
                              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_STRING_LITERAL; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3036 "phase4.tab.c"
    break;

  case 424: /* lbrack: "["  */
#line 592 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LBRACK; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3046 "phase4.tab.c"
    break;

  case 425: /* rbrack: "]"  */
#line 597 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RBRACK; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3056 "phase4.tab.c"
    break;

  case 426: /* connected_lparen: "=("  */
#line 602 "phase4.y"
                                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CONNECTED_LPAREN; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3066 "phase4.tab.c"
    break;

  case 427: /* lparen: "("  */
#line 607 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LPAREN; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3076 "phase4.tab.c"
    break;

  case 428: /* rparen: ")"  */
#line 612 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RPAREN; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3086 "phase4.tab.c"
    break;

  case 429: /* lbrace: "{"  */
#line 617 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LBRACE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3096 "phase4.tab.c"
    break;

  case 430: /* rbrace: "}"  */
#line 622 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RBRACE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3106 "phase4.tab.c"
    break;

  case 431: /* dot: "."  */
#line 627 "phase4.y"
        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_DOT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3116 "phase4.tab.c"
    break;

  case 432: /* arrow: "->"  */
#line 632 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ARROW; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3126 "phase4.tab.c"
    break;

  case 433: /* plusplus: "++"  */
#line 637 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PLUSPLUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3136 "phase4.tab.c"
    break;

  case 434: /* minusminus: "--"  */
#line 642 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_MINUSMINUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3146 "phase4.tab.c"
    break;

  case 435: /* amp: "&"  */
#line 647 "phase4.y"
        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_AMP; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3156 "phase4.tab.c"
    break;

  case 436: /* star: "*"  */
#line 652 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_STAR; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3166 "phase4.tab.c"
    break;

  case 437: /* plus: "+"  */
#line 657 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PLUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3176 "phase4.tab.c"
    break;

  case 438: /* minus: "-"  */
#line 662 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_MINUS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3186 "phase4.tab.c"
    break;

  case 439: /* tilde: "~"  */
#line 667 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_TILDE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3196 "phase4.tab.c"
    break;

  case 440: /* bang: "!"  */
#line 672 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_BANG; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3206 "phase4.tab.c"
    break;

  case 441: /* slash: "/"  */
#line 677 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SLASH; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3216 "phase4.tab.c"
    break;

  case 442: /* percent: "%"  */
#line 682 "phase4.y"
                { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PERCENT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3226 "phase4.tab.c"
    break;

  case 443: /* leftleft: "<<"  */
#line 687 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFTLEFT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3236 "phase4.tab.c"
    break;

  case 444: /* rightright: ">>"  */
#line 692 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHTRIGHT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3246 "phase4.tab.c"
    break;

  case 445: /* left: "<"  */
#line 697 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3256 "phase4.tab.c"
    break;

  case 446: /* right: ">"  */
#line 702 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3266 "phase4.tab.c"
    break;

  case 447: /* leftequals: "<="  */
#line 707 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3276 "phase4.tab.c"
    break;

  case 448: /* rightequals: ">="  */
#line 712 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3286 "phase4.tab.c"
    break;

  case 449: /* equalsequals: "=="  */
#line 717 "phase4.y"
                          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_EQUALSEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3296 "phase4.tab.c"
    break;

  case 450: /* bangequals: "!="  */
#line 722 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_BANGEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3306 "phase4.tab.c"
    break;

  case 451: /* carat: "^"  */
#line 727 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CARAT; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3316 "phase4.tab.c"
    break;

  case 452: /* pipe: "|"  */
#line 732 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PIPE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3326 "phase4.tab.c"
    break;

  case 453: /* ampamp: "&&"  */
#line 737 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_AMPAMP; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3336 "phase4.tab.c"
    break;

  case 454: /* pipepipe: "||"  */
#line 742 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PIPEPIPE; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3346 "phase4.tab.c"
    break;

  case 455: /* question: "?"  */
#line 747 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_QUESTION; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3356 "phase4.tab.c"
    break;

  case 456: /* colon: ":"  */
#line 752 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_COLON; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3366 "phase4.tab.c"
    break;

  case 457: /* semicolon: ";"  */
#line 757 "phase4.y"
                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SEMICOLON; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3376 "phase4.tab.c"
    break;

  case 458: /* ellipsis: "..."  */
#line 762 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ELLIPSIS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3386 "phase4.tab.c"
    break;

  case 459: /* equals: "="  */
#line 767 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_EQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3396 "phase4.tab.c"
    break;

  case 460: /* starequals: "*="  */
#line 772 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_STAREQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3406 "phase4.tab.c"
    break;

  case 461: /* slashequals: "/="  */
#line 777 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SLASHEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3416 "phase4.tab.c"
    break;

  case 462: /* percentequals: "%="  */
#line 782 "phase4.y"
                            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PERCENTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3426 "phase4.tab.c"
    break;

  case 463: /* plusequals: "+="  */
#line 787 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PLUSEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3436 "phase4.tab.c"
    break;

  case 464: /* minusequals: "-="  */
#line 792 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_MINUSEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3446 "phase4.tab.c"
    break;

  case 465: /* leftleftequals: "<<="  */
#line 797 "phase4.y"
                              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_LEFTLEFTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3456 "phase4.tab.c"
    break;

  case 466: /* rightrightequals: ">>="  */
#line 802 "phase4.y"
                                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_RIGHTRIGHTEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3466 "phase4.tab.c"
    break;

  case 467: /* ampequals: "&="  */
#line 807 "phase4.y"
                    { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_AMPEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3476 "phase4.tab.c"
    break;

  case 468: /* caratequals: "^="  */
#line 812 "phase4.y"
                        { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_CARATEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3486 "phase4.tab.c"
    break;

  case 469: /* pipeequals: "|="  */
#line 817 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_PIPEEQUALS; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3496 "phase4.tab.c"
    break;

  case 470: /* comma: ","  */
#line 822 "phase4.y"
            { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_COMMA; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3506 "phase4.tab.c"
    break;

  case 471: /* hash: "#"  */
#line 827 "phase4.y"
          { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_HASH; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3516 "phase4.tab.c"
    break;

  case 472: /* hashhash: "##"  */
#line 832 "phase4.y"
                  { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_HASHHASH; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3526 "phase4.tab.c"
    break;

  case 473: /* sizeof: "sizeof"  */
#line 837 "phase4.y"
              { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_SIZEOF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3536 "phase4.tab.c"
    break;

  case 474: /* alignof: "_Alignof"  */
#line 842 "phase4.y"
                { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_ALIGNOF; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3546 "phase4.tab.c"
    break;

  case 475: /* other_char: OTHER_CHAR  */
#line 847 "phase4.y"
                      { 
    ((*yyvalp).token) = malloc(sizeof(struct token)); 
    ((*yyvalp).token)->type = PP_OTHER_CHAR; 
    ((*yyvalp).token)->text = mycopystr(scanner); 
}
#line 3556 "phase4.tab.c"
    break;


#line 3560 "phase4.tab.c"

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
#line 90 "phase4.y"
            { free(((*yyvaluep).token_list)); }
#line 3612 "phase4.tab.c"
        break;

    case YYSYMBOL_pp_tokens_opt: /* pp_tokens_opt  */
#line 90 "phase4.y"
            { free(((*yyvaluep).token_list)); }
#line 3618 "phase4.tab.c"
        break;

    case YYSYMBOL_pp_tokens: /* pp_tokens  */
#line 90 "phase4.y"
            { free(((*yyvaluep).token_list)); }
#line 3624 "phase4.tab.c"
        break;

    case YYSYMBOL_identifier_list_opt: /* identifier_list_opt  */
#line 92 "phase4.y"
            { free(((*yyvaluep).identifier_list)->text); free(((*yyvaluep).identifier_list)); }
#line 3630 "phase4.tab.c"
        break;

    case YYSYMBOL_identifier_list: /* identifier_list  */
#line 92 "phase4.y"
            { free(((*yyvaluep).identifier_list)->text); free(((*yyvaluep).identifier_list)); }
#line 3636 "phase4.tab.c"
        break;

    case YYSYMBOL_preprocessing_token: /* preprocessing_token  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3642 "phase4.tab.c"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3648 "phase4.tab.c"
        break;

    case YYSYMBOL_header_name: /* header_name  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3654 "phase4.tab.c"
        break;

    case YYSYMBOL_integral_constant: /* integral_constant  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3660 "phase4.tab.c"
        break;

    case YYSYMBOL_floating_constant: /* floating_constant  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3666 "phase4.tab.c"
        break;

    case YYSYMBOL_character_constant: /* character_constant  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3672 "phase4.tab.c"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3678 "phase4.tab.c"
        break;

    case YYSYMBOL_lbrack: /* lbrack  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3684 "phase4.tab.c"
        break;

    case YYSYMBOL_rbrack: /* rbrack  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3690 "phase4.tab.c"
        break;

    case YYSYMBOL_connected_lparen: /* connected_lparen  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3696 "phase4.tab.c"
        break;

    case YYSYMBOL_lparen: /* lparen  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3702 "phase4.tab.c"
        break;

    case YYSYMBOL_rparen: /* rparen  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3708 "phase4.tab.c"
        break;

    case YYSYMBOL_lbrace: /* lbrace  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3714 "phase4.tab.c"
        break;

    case YYSYMBOL_rbrace: /* rbrace  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3720 "phase4.tab.c"
        break;

    case YYSYMBOL_dot: /* dot  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3726 "phase4.tab.c"
        break;

    case YYSYMBOL_arrow: /* arrow  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3732 "phase4.tab.c"
        break;

    case YYSYMBOL_plusplus: /* plusplus  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3738 "phase4.tab.c"
        break;

    case YYSYMBOL_minusminus: /* minusminus  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3744 "phase4.tab.c"
        break;

    case YYSYMBOL_amp: /* amp  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3750 "phase4.tab.c"
        break;

    case YYSYMBOL_star: /* star  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3756 "phase4.tab.c"
        break;

    case YYSYMBOL_plus: /* plus  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3762 "phase4.tab.c"
        break;

    case YYSYMBOL_minus: /* minus  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3768 "phase4.tab.c"
        break;

    case YYSYMBOL_tilde: /* tilde  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3774 "phase4.tab.c"
        break;

    case YYSYMBOL_bang: /* bang  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3780 "phase4.tab.c"
        break;

    case YYSYMBOL_slash: /* slash  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3786 "phase4.tab.c"
        break;

    case YYSYMBOL_percent: /* percent  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3792 "phase4.tab.c"
        break;

    case YYSYMBOL_leftleft: /* leftleft  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3798 "phase4.tab.c"
        break;

    case YYSYMBOL_rightright: /* rightright  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3804 "phase4.tab.c"
        break;

    case YYSYMBOL_left: /* left  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3810 "phase4.tab.c"
        break;

    case YYSYMBOL_right: /* right  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3816 "phase4.tab.c"
        break;

    case YYSYMBOL_leftequals: /* leftequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3822 "phase4.tab.c"
        break;

    case YYSYMBOL_rightequals: /* rightequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3828 "phase4.tab.c"
        break;

    case YYSYMBOL_equalsequals: /* equalsequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3834 "phase4.tab.c"
        break;

    case YYSYMBOL_bangequals: /* bangequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3840 "phase4.tab.c"
        break;

    case YYSYMBOL_carat: /* carat  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3846 "phase4.tab.c"
        break;

    case YYSYMBOL_pipe: /* pipe  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3852 "phase4.tab.c"
        break;

    case YYSYMBOL_ampamp: /* ampamp  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3858 "phase4.tab.c"
        break;

    case YYSYMBOL_pipepipe: /* pipepipe  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3864 "phase4.tab.c"
        break;

    case YYSYMBOL_question: /* question  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3870 "phase4.tab.c"
        break;

    case YYSYMBOL_colon: /* colon  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3876 "phase4.tab.c"
        break;

    case YYSYMBOL_semicolon: /* semicolon  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3882 "phase4.tab.c"
        break;

    case YYSYMBOL_ellipsis: /* ellipsis  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3888 "phase4.tab.c"
        break;

    case YYSYMBOL_equals: /* equals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3894 "phase4.tab.c"
        break;

    case YYSYMBOL_starequals: /* starequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3900 "phase4.tab.c"
        break;

    case YYSYMBOL_slashequals: /* slashequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3906 "phase4.tab.c"
        break;

    case YYSYMBOL_percentequals: /* percentequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3912 "phase4.tab.c"
        break;

    case YYSYMBOL_plusequals: /* plusequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3918 "phase4.tab.c"
        break;

    case YYSYMBOL_minusequals: /* minusequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3924 "phase4.tab.c"
        break;

    case YYSYMBOL_leftleftequals: /* leftleftequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3930 "phase4.tab.c"
        break;

    case YYSYMBOL_rightrightequals: /* rightrightequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3936 "phase4.tab.c"
        break;

    case YYSYMBOL_ampequals: /* ampequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3942 "phase4.tab.c"
        break;

    case YYSYMBOL_caratequals: /* caratequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3948 "phase4.tab.c"
        break;

    case YYSYMBOL_pipeequals: /* pipeequals  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3954 "phase4.tab.c"
        break;

    case YYSYMBOL_comma: /* comma  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3960 "phase4.tab.c"
        break;

    case YYSYMBOL_hash: /* hash  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3966 "phase4.tab.c"
        break;

    case YYSYMBOL_hashhash: /* hashhash  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3972 "phase4.tab.c"
        break;

    case YYSYMBOL_sizeof: /* sizeof  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3978 "phase4.tab.c"
        break;

    case YYSYMBOL_alignof: /* alignof  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3984 "phase4.tab.c"
        break;

    case YYSYMBOL_other_char: /* other_char  */
#line 91 "phase4.y"
            { free(((*yyvaluep).token)->text); free(((*yyvaluep).token)); }
#line 3990 "phase4.tab.c"
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


#line 853 "phase4.y"


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
