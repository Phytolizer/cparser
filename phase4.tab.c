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
  YYSYMBOL_lparen = 222                    /* lparen  */
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
#line 90 "phase4.y"

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

#line 345 "phase4.tab.c"

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
#define YYFINAL  137
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2125

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  417
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  615
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
       0,   118,   118,   119,   119,   120,   120,   121,   122,   123,
     124,   126,   127,   127,   128,   128,   129,   130,   131,   133,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   148,   148,   149,   150,   151,   151,
     152,   153,   163,   163,   164,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     221,   222,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   300,   301,   302,   303,   303,   303,
     303,   304,   305,   306,   306,   307,   308,   309,   309,   310,
     311,   312,   312,   312,   313,   314,   315,   316,   317,   318,
     319,   321,   321,   321,   321,   321,   321,   322,   323,   324,
     325,   326,   327,   329,   330,   331,   332,   333,   334,   336,
     337,   338,   339,   340,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   354,   355,   356,   357,   358,
     359,   360,   362,   363,   363,   364,   365,   365,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   367,
     367,   368,   368,   369,   369,   370,   370,   371,   371,   372,
     372,   373,   373,   374,   374,   375,   375,   376,   376,   377,
     377,   378,   378,   379,   379,   380,   380,   381,   382,   383,
     383,   384,   385,   386,   388,   388,   389,   390,   391,   393,
     394,   394,   395,   395,   396,   397,   397,   398,   398,   399,
     400,   401,   402,   403,   404,   406,   406,   407,   407,   408,
     408,   408,   408,   409,   409,   410,   410,   411,   411,   412,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   429,   430,   432,   432,
     433,   433,   434,   435,   437,   438,   439,   441,   441,   442,
     442,   443,   443,   444,   444,   445,   446,   448,   448,   449,
     449,   450,   450,   451,   451,   452,   453,   454,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   465,   465,
     466,   466,   467,   467,   468,   468,   469,   469,   470,   471,
     472,   474,   475,   476,   477,   478,   480,   480,   481,   481,
     481,   481,   481,   481,   482,   482,   483,   483
};
#endif

#define YYPACT_NINF (-496)
#define YYTABLE_NINF (-399)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1304,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  1016,  -496,  -496,  -496,    27,  -496,  1376,
    -496,  -496,   -27,  -496,  -496,  1807,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  1807,    34,  2052,    60,    62,    69,  1807,  1807,
    1807,  -496,  -496,  -496,  -496,  1088,  -496,  -496,  -496,    47,
     115,   117,  -496,   175,  1807,  1160,  1878,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    1954,    36,   188,  -496,   199,    78,   157,   164,   182,   250,
     307,   270,   290,   177,  -496,  -496,  2052,   249,  -496,   765,
     206,   210,   217,  1232,   220,   245,  -496,  -496,  2052,   169,
     208,  -496,  -496,  -496,  -496,   165,   254,  -496,  -496,  -496,
    -496,  -496,  -496,  1954,    36,    36,  1954,  -496,   174,  -496,
    -496,   741,   833,  1448,  2052,  2052,  2052,  2052,  2052,  2052,
    -496,  -496,  2052,  -496,  -496,  -496,  -496,  2052,  -496,  -496,
    2052,  -496,  -496,  2052,  -496,  -496,  -496,  2052,  -496,  2052,
     263,   272,   787,  -496,  -496,  -496,   311,  -496,  -496,  -496,
    -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
     279,    36,   281,   313,   855,   896,  -496,   288,    59,  -496,
    -496,   923,  -496,  1520,  1592,  -496,  -496,  -496,  -496,   303,
     327,   265,  -496,   295,   321,   345,   308,  -496,  -496,   741,
     833,  1954,  -496,  -496,   741,  1954,   361,   362,  -496,  -496,
    1954,   877,   668,  -496,  -496,  -496,   302,   330,   333,   335,
     352,   250,   307,   270,   290,   177,    13,   365,  -496,   366,
    -496,    78,   341,   157,   164,   182,   250,   307,   270,   290,
     177,  -496,   375,  -496,  -496,   833,   372,   381,   765,  -496,
    2008,  -496,  -496,  -496,   372,   382,   271,  -496,  -496,   350,
      44,  -496,  -496,  -496,  1664,  1736,   397,   395,  1807,  1807,
     357,   388,   389,   348,   391,     8,  -496,  -496,  -496,   394,
     353,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,  1954,  1954,  1954,  1954,  1954,  1954,  1954,  1954,
    1954,  1954,  1954,  1954,  -496,  1954,   396,  -496,  2052,  -496,
     398,   405,   401,   402,    43,  -496,   650,  -496,  -496,   271,
     403,   204,   291,   403,  -496,  -496,  -496,  -496,   416,   417,
     406,   396,  -496,   833,   369,  -496,  -496,  1954,  -496,   330,
      -4,   333,   335,   352,   250,   307,   270,   290,   177,  -496,
    -496,    43,  -496,  -496,  -496,   371,  -496,   383,  -496,  -496,
    2052,   424,    21,  2030,  -496,    40,  -496,    36,   617,  -496,
     138,  -496,  -496,  -496,    88,   409,   418,  -496,  -496,  1807,
      42,  -496,   393,  -496,  -496,  1954,  1932,   140,   405,   414,
    2052,   420,  -496,  -496,   228,    43,  -496,  -496,  -496,  -496,
    2052,  -496,  -496,   170,  -496,   377,   404,  -496,   407,   408,
     425,   271,   213,  1954,  -496,  -496,  -496,  -496,  -496,  -496,
    -496,  -496,   437,   470,   499,   423,  -496,   392,  -496,    19,
     527,   560,  -496,   436,  -496,   833,  1954,  -496,    43,  -496,
    -496,  -496,   259,  -496,  -496,  -496,  -496,  -496,  2030,   142,
     106,  -496,   344,   403,     2,  -496,  2052,  -496,  1954,  1954,
    -496,   428,  -496,  -496,  -496,  -496,  -496,   380,  -496,   258,
    -496,  -496,  -496,  -496,  -496,  -496,   155,  -496,  1932,  -496,
    -496,   262,  -496,   435,   232,   589,   431,  -496,  -496,   440,
     441,  -496,  -496,  -496,   403,  -496,   264,  -496,  -496,   439,
     271,   243,  1976,   141,   469,  -496,   526,  -496,  -496,  -496,
    -496,   498,  1954,  1954,   531,   532,  -496,  -496,  -496,   533,
     562,  -496,  -496,  -496,  -496
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,    35,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,    97,    98,    99,     0,     2,     3,
       5,     7,     0,     8,     9,    39,    33,   101,   100,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,     0,     0,     0,     0,     0,     0,    39,
      39,   155,   156,   157,    10,     0,    40,     1,     6,     0,
       0,     0,    19,     0,    38,     0,    39,   213,   214,   215,
     216,   217,   416,   417,   204,   205,   202,   201,   203,   206,
       0,     0,     0,   158,   159,   161,   163,   165,   167,   169,
     171,   175,   181,   185,   189,   194,     0,   196,   207,     0,
       0,     0,     0,     0,     0,     0,    36,    41,     0,     0,
       0,    14,    20,    34,    24,   108,     0,    37,   235,   236,
     237,   238,   239,     0,     0,     0,     0,   198,   219,   226,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     173,   174,     0,   177,   178,   179,   180,     0,   183,   184,
       0,   187,   188,     0,   191,   192,   193,     0,   197,     0,
       0,     0,   213,   319,   320,   321,   322,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   348,   349,
     370,     0,     0,     0,   389,   389,   343,   370,   326,   344,
     342,   389,   345,     0,     0,    29,    30,    31,    32,     0,
       0,     0,    11,    45,     0,     0,    42,    25,   221,     0,
       0,     0,   224,   220,     0,     0,     0,     0,   231,   232,
     284,   235,   224,   279,   281,   246,   259,   261,   263,   265,
     267,   269,   271,   273,   275,   277,     0,     0,   398,     0,
      16,   162,     0,   164,   166,   168,   170,   172,   176,   182,
     186,   190,     0,   209,   210,     0,   366,     0,     0,   218,
       0,   388,   355,   354,   347,     0,   330,   304,   305,   316,
     325,   356,    17,    18,     0,     0,     0,     0,    39,    39,
       0,     0,     0,     0,     0,     0,   228,   229,   285,     0,
     283,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,     0,   199,   200,     0,   208,
       0,     0,     0,     0,   290,   195,     0,   322,   323,   329,
     327,   308,     0,   326,    21,    22,    23,    44,     0,     0,
       0,   222,   223,     0,     0,   227,   230,     0,   247,   262,
       0,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   290,   160,   375,   376,   368,   371,   373,   378,   377,
       0,     0,     0,     0,   289,     0,   300,     0,     0,   350,
     326,   353,   324,   328,   330,   391,     0,    27,    26,    39,
       0,   243,     0,   225,   286,     0,     0,     0,   367,     0,
       0,     0,   303,   211,   290,   290,   291,   287,   299,   301,
       0,   346,   351,     0,   325,   359,     0,   357,     0,   361,
       0,   330,   329,   318,   410,   408,   409,   411,   412,   413,
     414,   415,   407,   407,   407,     0,   390,   392,   394,   326,
     407,   407,   309,     0,   242,     0,     0,   260,   290,   296,
     294,   233,   290,   372,   365,   374,   302,   212,     0,     0,
       0,   380,   379,   326,   326,   352,     0,   313,     0,     0,
     317,     0,   406,   403,   402,   405,   314,     0,   397,   316,
     396,   401,   404,    28,   244,   245,     0,   234,     0,   288,
     292,   290,   400,     0,   330,    43,     0,   358,   362,     0,
       0,   310,   393,   395,   326,   297,   290,   295,   293,     0,
     330,   329,   318,   398,     0,    42,     0,   381,   311,   312,
     298,     0,     0,     0,   205,     0,   387,   386,   399,     0,
       0,   385,   382,   383,   384
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -496,  -496,  -201,  -496,   572,  -496,  -496,  -496,  -496,  -496,
     491,  -496,  -496,  -496,  -496,  -496,  -340,   -22,   -12,    58,
    -353,  -496,    25,  -119,   237,  -496,   450,   477,   468,   507,
     534,  -300,   504,  -297,   525,  -292,   528,  -285,   523,  -283,
    -166,  -496,   -91,  -496,  -496,  -159,  -203,  -496,  -496,  -496,
    -496,   234,  -265,  -496,   282,  -496,   378,   384,   374,   390,
     411,   373,   386,   379,   412,  -279,  -496,  -496,   296,  -428,
     242,   255,   214,  -496,  -496,   329,  -149,   266,  -407,  -496,
    -496,   194,  -167,  -441,  -266,  -393,  -455,  -262,  -496,  -496,
    -496,   336,  -257,  -496,  -496,   251,  -496,  -496,  -496,   529,
    -496,   319,  -496,  -496,  -258,  -495,  -496,  -188,  -496,   230,
    -496,   246,  -496,  -496,  -443,  -277,  -496,  -496,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    57,    58,    59,    60,    61,   140,   190,    62,   141,
     142,   191,   282,    63,    64,   134,   196,   197,   144,   285,
     286,    65,   136,   486,   163,   164,   165,   166,   167,   168,
     169,   222,   170,   227,   171,   230,   172,   233,   173,   237,
     174,   175,   206,   177,   178,   302,   303,   208,   209,   210,
     470,   471,   304,   382,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   369,   370,   452,   453,
     487,   477,   530,   454,   455,   456,   472,   347,   348,   411,
     412,   551,   264,   409,   493,   350,   410,   265,   266,   267,
     458,   459,   268,   495,   496,   497,   498,   269,   479,   337,
     445,   446,   270,   447,   271,   499,   542,   342,   515,   516,
     517,   518,   272,   461,   552,   553,   520,   521,   294
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     179,   207,   349,   293,   417,   162,   466,   341,   341,   503,
     238,   389,   320,   476,   341,   390,   365,   463,   418,   419,
     425,   391,   519,   502,   560,   346,   363,   137,   394,   392,
     263,   139,   393,   176,  -306,   368,   211,   212,   483,   475,
     146,   135,   346,   143,   288,  -364,   548,   292,   576,   152,
     153,   450,   179,   395,   450,   179,   538,   524,   451,  -307,
     262,   451,   317,   319,   179,   395,   180,   494,   181,   279,
     395,   331,   352,   353,  -306,   182,  -306,   343,   484,   289,
     290,   291,   346,   351,   300,   176,   488,  -307,   176,   576,
     179,   179,   179,   179,   179,   179,   322,   176,   179,   525,
     476,  -307,  -306,   179,   568,   430,   179,   184,   185,   179,
     145,   500,   188,   179,   519,   179,   183,   428,   216,   592,
     332,   572,   335,   176,   176,   176,   176,   176,   176,   523,
     440,   176,   519,   591,   389,   602,   176,   338,   390,   176,
     361,   362,   176,   538,   391,   364,   176,   349,   176,   460,
     494,   494,   392,   414,   415,   393,   -45,   531,   568,   570,
     187,   346,   474,   573,   501,   243,   244,   245,   407,   187,
     187,   283,   585,   189,   405,   139,   541,   466,   193,   408,
     -43,  -364,  -360,   152,   153,   295,   400,   152,   153,   403,
     439,   213,   296,   297,   298,   299,   217,   532,   357,   571,
     234,   460,   218,   513,   219,   235,   236,   514,   187,   273,
     284,   529,   586,   274,   179,  -315,   179,  -315,  -315,   402,
     275,   473,   595,   277,   292,   413,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   280,   554,   555,   550,   450,
     214,   215,   462,   561,   562,   537,   451,   176,   278,   176,
     513,   513,   513,   559,   514,   514,   514,   287,   513,   513,
     239,   565,   514,   514,   541,   292,   281,   240,   241,   333,
     450,   152,   153,   450,   179,   450,   567,   451,   334,   588,
     451,   600,   451,   579,   580,   336,   220,   221,   465,   549,
     243,   244,   245,   407,   344,   513,   339,   408,   512,   514,
     228,   229,   464,   529,   152,   153,   354,   176,   590,   243,
     244,   245,   407,   513,   231,   232,   292,   514,   559,   603,
     243,   244,   245,   407,   152,   153,   179,   550,   340,   179,
     355,   481,   356,   490,   408,   462,   358,   609,   610,   223,
     224,   225,   226,   383,   384,   512,   512,   512,   243,   244,
     245,   407,   357,   512,   512,   574,   179,   152,   153,   176,
     359,   535,   176,   152,   153,   360,   179,   366,   367,   543,
     385,   540,   386,   387,   388,   198,   199,   200,   201,   202,
     396,   397,   152,   153,   398,   441,   318,   399,  -369,   176,
     512,   154,   155,   156,   157,   158,   159,   401,   406,   176,
     416,   283,   420,   421,   422,   423,   424,   408,   512,   426,
     427,   444,   441,   443,   179,   318,   448,   449,   575,   467,
     468,   469,   179,   408,   462,   582,   346,   578,   478,   480,
     482,   534,   536,   522,   544,   584,   526,   547,   556,   563,
     581,   203,   204,   318,   205,   589,   597,   176,   545,   557,
     546,  -363,   598,   599,   601,   176,   504,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   318,   505,   506,   507,
     508,   509,   510,   511,   606,   504,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   318,   505,   506,   507,   508,
     509,   510,   511,   504,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   318,   505,   506,   507,   508,   509,   510,
     511,   607,   608,   611,   612,   613,   504,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   318,   505,   506,   507,
     508,   509,   510,   511,   614,   504,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   593,   505,   506,   507,   508,
     509,   510,   511,   504,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   318,   505,   506,   507,   508,   509,   510,
     511,   138,   192,   594,   491,   442,   504,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   318,   505,   506,   507,
     508,   509,   510,   511,   321,   504,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   324,   505,   506,   507,   508,
     509,   510,   511,   323,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   457,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   325,   327,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   457,   301,   199,   200,
     201,   202,   328,   326,   152,   153,   330,   527,   329,   564,
     432,   429,   435,   154,   155,   156,   157,   158,   159,   431,
     437,   242,   148,   149,   150,   151,   436,   433,   152,   153,
     569,   539,   587,   566,   489,   558,   605,   154,   155,   156,
     157,   158,   159,  -398,   492,   577,   345,   533,  -213,   434,
    -398,  -398,  -213,   583,   438,   596,     0,     0,     0,     0,
    -213,     0,     0,   203,   204,     0,   205,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   160,   161,   318,
       0,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   318,     0,     0,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,     0,     0,     0,     0,  -235,     0,
    -235,  -235,  -235,     0,     0,     0,     0,     0,     0,     0,
    -235,     0,   318,     0,     0,     0,     0,     0,     0,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   318,
       0,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,     0,     0,     0,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398,  -398,  -398,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,     0,     0,     0,     0,     0,     0,     0,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,    66,
      67,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,   127,   128,   129,   130,   131,   132,
     133,   186,    67,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     131,   132,   133,   194,    67,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   132,   133,   276,    67,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,   132,   133,     1,     0,     0,
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
       0,     0,     0,     0,     0,     0,    54,    55,    56,     1,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    67,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,    67,     0,    68,    69,    70,    71,    72,    73,
      74,   195,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   198,   199,
     200,   201,   202,     0,     0,   152,   153,     0,   528,     0,
     131,   132,   133,     0,   154,   155,   156,   157,   158,   159,
     198,   199,   200,   201,   202,     0,     0,   152,   153,     0,
       0,     0,     0,     0,     0,     0,   154,   155,   156,   157,
     158,   159,   198,   199,   200,   201,   202,     0,     0,   152,
     153,     0,     0,     0,     0,     0,     0,     0,   154,   604,
     156,   157,   158,   159,   203,   204,     0,   205,     0,     0,
       0,     0,     0,     0,   147,   148,   149,   150,   151,     0,
       0,   152,   153,     0,   404,     0,   203,   204,     0,   205,
     154,   155,   156,   157,   158,   159,   147,   148,   149,   150,
     151,     0,     0,   152,   153,     0,   485,     0,   203,   204,
       0,   205,   154,   155,   156,   157,   158,   159,   147,   148,
     149,   150,   151,     0,     0,   152,   153,     0,     0,     0,
       0,     0,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   161
};

static const yytype_int16 yycheck[] =
{
     124,   160,   268,   206,   357,   124,   413,   264,   265,   464,
     176,   311,   213,   441,   271,   312,   295,   410,   358,   359,
      12,   313,   465,   464,   519,    23,   291,     0,    15,   314,
     179,    58,   315,   124,    15,   300,   160,   161,    17,    43,
       6,    53,    23,    65,   203,    43,   501,   206,   543,    13,
      14,    11,   176,    57,    11,   179,   484,    15,    18,    15,
     179,    18,   211,   212,   188,    57,     6,   460,     6,   188,
      57,   237,   273,   274,    15,     6,    57,   265,    57,   203,
     204,   205,    23,   271,   208,   176,    46,    43,   179,   584,
     214,   215,   216,   217,   218,   219,   215,   188,   222,    57,
     528,    57,    43,   227,   532,   384,   230,   129,   130,   233,
     122,    23,    65,   237,   557,   239,   128,   382,    40,   574,
     239,    15,   246,   214,   215,   216,   217,   218,   219,   469,
     395,   222,   575,   574,   434,   590,   227,   261,   435,   230,
     289,   290,   233,   571,   436,   294,   237,   413,   239,   406,
     543,   544,   437,   354,   355,   438,    15,    17,   586,    17,
     135,    23,   427,    57,    76,    77,    78,    79,    80,   144,
     145,     6,    17,    58,   340,    58,     6,   584,     3,   346,
      15,    43,    44,    13,    14,    11,   335,    13,    14,   338,
     393,     3,    18,    19,    20,    21,    39,    57,    57,    57,
      23,   458,    38,   465,    22,    28,    29,   465,   183,     3,
      45,   476,    57,     3,   338,    11,   340,    13,    14,   338,
       3,   424,   575,     3,   383,   349,   385,   386,   387,   388,
     389,   390,   391,   392,   393,    66,   513,   514,   503,    11,
      41,    42,   409,   520,   521,    17,    18,   338,     3,   340,
     512,   513,   514,   519,   512,   513,   514,     3,   520,   521,
      11,   526,   520,   521,     6,   424,    58,    18,    19,     6,
      11,    13,    14,    11,   398,    11,    17,    18,     6,    17,
      18,    17,    18,   548,   549,     6,    36,    37,   412,    76,
      77,    78,    79,    80,     6,   557,    15,   464,   465,   557,
      30,    31,    11,   568,    13,    14,     3,   398,    76,    77,
      78,    79,    80,   575,    24,    25,   475,   575,   584,    76,
      77,    78,    79,    80,    13,    14,   450,   592,    15,   453,
       3,   450,    67,   457,   501,   502,    15,   602,   603,    32,
      33,    34,    35,    41,    42,   512,   513,   514,    77,    78,
      79,    80,    57,   520,   521,    11,   480,    13,    14,   450,
      15,   480,   453,    13,    14,    57,   490,     6,     6,   493,
      40,   490,    39,    38,    22,     6,     7,     8,     9,    10,
      15,    15,    13,    14,    43,    16,     6,    12,    16,   480,
     557,    22,    23,    24,    25,    26,    27,    16,    16,   490,
       3,     6,    45,    15,    15,    57,    15,   574,   575,    15,
      57,     6,    16,    15,   538,     6,    15,    15,   542,     3,
       3,    15,   546,   590,   591,    45,    23,   546,    57,    46,
       6,    17,    12,    15,    57,   559,    43,    12,    15,     3,
      12,    72,    73,     6,    75,    10,    15,   538,    44,    57,
      43,    43,    12,    12,    15,   546,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     6,    97,    98,    99,
     100,   101,   102,   103,    15,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     6,    97,    98,    99,   100,
     101,   102,   103,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     6,    97,    98,    99,   100,   101,   102,
     103,    15,    44,    12,    12,    12,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     6,    97,    98,    99,
     100,   101,   102,   103,    12,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     6,    97,    98,    99,   100,
     101,   102,   103,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     6,    97,    98,    99,   100,   101,   102,
     103,    59,   141,   575,    17,   398,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     6,    97,    98,    99,
     100,   101,   102,   103,   214,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,   217,    97,    98,    99,   100,
     101,   102,   103,   216,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   218,   222,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     6,     7,     8,
       9,    10,   227,   219,    13,    14,   233,   475,   230,   525,
     386,   383,   389,    22,    23,    24,    25,    26,    27,   385,
     391,     6,     7,     8,     9,    10,   390,   387,    13,    14,
     538,   485,   568,   528,   455,   519,   592,    22,    23,    24,
      25,    26,    27,     6,   458,   544,   267,   478,    11,   388,
      13,    14,    15,   557,   392,   575,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    72,    73,    -1,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    72,    73,     6,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     6,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     6,    -1,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     6,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
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
      -1,    -1,    72,    73,    74,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,     3,
      -1,    -1,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     6,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    -1,
      72,    73,    74,    -1,    22,    23,    24,    25,    26,    27,
       6,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,     6,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    72,    73,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    -1,    72,    73,    -1,    75,
      22,    23,    24,    25,    26,    27,     6,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    -1,    72,    73,
      -1,    75,    22,    23,    24,    25,    26,    27,     6,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    12,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    72,    73,    74,   105,   106,   107,
     108,   109,   112,   117,   118,   125,     3,     4,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    68,    69,    70,
      71,    72,    73,    74,   119,   122,   126,     0,   108,    58,
     110,   113,   114,   121,   122,   122,     6,     6,     7,     8,
       9,    10,    13,    14,    22,    23,    24,    25,    26,    27,
      72,    73,   127,   128,   129,   130,   131,   132,   133,   134,
     136,   138,   140,   142,   144,   145,   146,   147,   148,   222,
       6,     6,     6,   122,   121,   121,     3,   126,    65,    58,
     111,   115,   114,     3,     3,    13,   120,   121,     6,     7,
       8,     9,    10,    72,    73,    75,   146,   149,   151,   152,
     153,   222,   222,     3,    41,    42,    40,    39,    38,    22,
      36,    37,   135,    32,    33,    34,    35,   137,    30,    31,
     139,    24,    25,   141,    23,    28,    29,   143,   144,    11,
      18,    19,     6,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,   127,   180,   186,   191,   192,   193,   196,   201,
     206,   208,   216,     3,     3,     3,     3,     3,     3,   127,
      66,    58,   116,     6,    45,   123,   124,     3,   149,   222,
     222,   222,   149,   150,   222,    11,    18,    19,    20,    21,
     222,     6,   149,   150,   156,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   180,     6,   180,
     106,   130,   127,   131,   132,   133,   134,   136,   138,   140,
     142,   144,   127,     6,     6,   222,     6,   203,   222,    15,
      15,   196,   211,   211,     6,   203,    23,   181,   182,   188,
     189,   211,   106,   106,     3,     3,    67,    57,    15,    15,
      57,   180,   180,   156,   180,   169,     6,     6,   156,   170,
     171,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,   157,    41,    42,    40,    39,    38,    22,   135,
     137,   139,   141,   143,    15,    57,    15,    15,    43,    12,
     180,    16,   127,   180,    16,   144,    16,    80,   186,   187,
     190,   183,   184,   222,   106,   106,     3,   124,   120,   120,
      45,    15,    15,    57,    15,    12,    15,    57,   156,   160,
     169,   161,   162,   163,   164,   165,   166,   167,   168,   150,
     156,    16,   128,    15,     6,   204,   205,   207,    15,    15,
      11,    18,   172,   173,   177,   178,   179,    96,   194,   195,
     196,   217,   186,   189,    11,   222,   182,     3,     3,    15,
     154,   155,   180,   150,   156,    43,   173,   175,    57,   202,
      46,   127,     6,    17,    57,    16,   127,   174,    46,   179,
     222,    17,   195,   188,   189,   197,   198,   199,   200,   209,
      23,    76,   187,   190,    76,    97,    98,    99,   100,   101,
     102,   103,   186,   191,   208,   212,   213,   214,   215,   218,
     220,   221,    15,   120,    15,    57,    43,   158,    16,   156,
     176,    17,    57,   205,    17,   127,    12,    17,   173,   172,
     127,     6,   210,   222,    57,    44,    43,    12,   190,    76,
     156,   185,   218,   219,   219,   219,    15,    57,   181,   188,
     209,   219,   219,     3,   155,   156,   175,    17,   173,   174,
      17,    57,    15,    57,    11,   222,   209,   199,   127,   156,
     156,    12,    45,   215,   222,    17,    57,   176,    17,    10,
      76,   187,   190,     6,   123,   124,   213,    15,    12,    12,
      17,    15,   190,    76,    23,   185,    15,    15,    44,   156,
     156,    12,    12,    12,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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
     220,   220,   220,   220,   221,   221,   222,   222
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
       1,     1,     1,     1,     1,     1,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0
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
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     5,     0,     7,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
      41,    43,    45,     0,     0,     0,     0,     0,     0,     0,
      47,     0,    29,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,     3,     0,    13,     0,    15,     0,    12,     0,   108,
       0,   108,     0,   108,     0,     4,     0,   398,     0,   398,
       0,   398,     0,   322,     0,   322,     0,   389,     0,   389,
       0,   389,     0,     4,     0,     4,     0,    45,     0,   398,
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
  "function_specifier", "lparen", YY_NULLPTR
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
#line 118 "phase4.y"
                { printf("EOF\n"); }
#line 2476 "phase4.tab.c"
    break;

  case 7: /* group_part: if_section  */
#line 121 "phase4.y"
                       { printf("end if section (line %d)\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line); }
#line 2482 "phase4.tab.c"
    break;

  case 8: /* group_part: control_line  */
#line 122 "phase4.y"
                   { printf("end control line %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line); }
#line 2488 "phase4.tab.c"
    break;

  case 9: /* group_part: text_line  */
#line 123 "phase4.y"
                { printf("macro references on line %d: %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc).first_line, mac_ref_count); }
#line 2494 "phase4.tab.c"
    break;

  case 10: /* group_part: "#" non_directive  */
#line 124 "phase4.y"
                        { printf("end non-directive\n"); }
#line 2500 "phase4.tab.c"
    break;

  case 24: /* control_line: "#" "include" pp_tokens EOL  */
#line 137 "phase4.y"
                                          { include_file((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 2506 "phase4.tab.c"
    break;

  case 40: /* pp_tokens: preprocessing_token  */
#line 152 "phase4.y"
                               { ((*yyvalp).str) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str); }
#line 2512 "phase4.tab.c"
    break;

  case 41: /* pp_tokens: pp_tokens preprocessing_token  */
#line 153 "phase4.y"
                                    { 
        size_t total_len = mystrlen((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)) + mystrlen((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
        ((*yyvalp).str) = realloc(((*yyvalp).str), total_len + 1); 
        if (((*yyvalp).str)) { 
            mystrcpy(((*yyvalp).str), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); 
            mystrcat(((*yyvalp).str), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
        }
        ((*yyvalp).str)[total_len] = '\0';
    }
#line 2526 "phase4.tab.c"
    break;

  case 100: /* preprocessing_token: IDENTIFIER  */
#line 221 "phase4.y"
               { ((*yyvalp).str) = NULL; }
#line 2532 "phase4.tab.c"
    break;

  case 101: /* preprocessing_token: HEADER_NAME  */
#line 222 "phase4.y"
                  { 
        int leng = phase3get_leng(scanner);
        ((*yyvalp).str) = malloc(leng + 1); 
        strncpy(((*yyvalp).str), phase3get_text(scanner), leng); 
        ((*yyvalp).str)[leng] = '\0';
    }
#line 2543 "phase4.tab.c"
    break;

  case 102: /* preprocessing_token: INTEGRAL_CONSTANT  */
#line 228 "phase4.y"
                       { ((*yyvalp).str) = NULL; }
#line 2549 "phase4.tab.c"
    break;

  case 103: /* preprocessing_token: FLOATING_CONSTANT  */
#line 229 "phase4.y"
                       { ((*yyvalp).str) = NULL; }
#line 2555 "phase4.tab.c"
    break;

  case 104: /* preprocessing_token: CHARACTER_CONSTANT  */
#line 230 "phase4.y"
                        { ((*yyvalp).str) = NULL; }
#line 2561 "phase4.tab.c"
    break;

  case 105: /* preprocessing_token: STRING_LITERAL  */
#line 231 "phase4.y"
                    { ((*yyvalp).str) = NULL; }
#line 2567 "phase4.tab.c"
    break;

  case 106: /* preprocessing_token: "["  */
#line 232 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2573 "phase4.tab.c"
    break;

  case 107: /* preprocessing_token: "]"  */
#line 233 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2579 "phase4.tab.c"
    break;

  case 108: /* preprocessing_token: "=("  */
#line 234 "phase4.y"
                      { ((*yyvalp).str) = NULL; }
#line 2585 "phase4.tab.c"
    break;

  case 109: /* preprocessing_token: "("  */
#line 235 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2591 "phase4.tab.c"
    break;

  case 110: /* preprocessing_token: ")"  */
#line 236 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2597 "phase4.tab.c"
    break;

  case 111: /* preprocessing_token: "{"  */
#line 237 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2603 "phase4.tab.c"
    break;

  case 112: /* preprocessing_token: "}"  */
#line 238 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2609 "phase4.tab.c"
    break;

  case 113: /* preprocessing_token: "."  */
#line 239 "phase4.y"
         { ((*yyvalp).str) = NULL; }
#line 2615 "phase4.tab.c"
    break;

  case 114: /* preprocessing_token: "->"  */
#line 240 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2621 "phase4.tab.c"
    break;

  case 115: /* preprocessing_token: "++"  */
#line 241 "phase4.y"
              { ((*yyvalp).str) = NULL; }
#line 2627 "phase4.tab.c"
    break;

  case 116: /* preprocessing_token: "--"  */
#line 242 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2633 "phase4.tab.c"
    break;

  case 117: /* preprocessing_token: "&"  */
#line 243 "phase4.y"
         { ((*yyvalp).str) = NULL; }
#line 2639 "phase4.tab.c"
    break;

  case 118: /* preprocessing_token: "*"  */
#line 244 "phase4.y"
          { ((*yyvalp).str) = NULL; }
#line 2645 "phase4.tab.c"
    break;

  case 119: /* preprocessing_token: "+"  */
#line 245 "phase4.y"
          { ((*yyvalp).str) = NULL; }
#line 2651 "phase4.tab.c"
    break;

  case 120: /* preprocessing_token: "-"  */
#line 246 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2657 "phase4.tab.c"
    break;

  case 121: /* preprocessing_token: "~"  */
#line 247 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2663 "phase4.tab.c"
    break;

  case 122: /* preprocessing_token: "!"  */
#line 248 "phase4.y"
          { ((*yyvalp).str) = NULL; }
#line 2669 "phase4.tab.c"
    break;

  case 123: /* preprocessing_token: "/"  */
#line 249 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2675 "phase4.tab.c"
    break;

  case 124: /* preprocessing_token: "%"  */
#line 250 "phase4.y"
             { ((*yyvalp).str) = NULL; }
#line 2681 "phase4.tab.c"
    break;

  case 125: /* preprocessing_token: "<<"  */
#line 251 "phase4.y"
              { ((*yyvalp).str) = NULL; }
#line 2687 "phase4.tab.c"
    break;

  case 126: /* preprocessing_token: ">>"  */
#line 252 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2693 "phase4.tab.c"
    break;

  case 127: /* preprocessing_token: "<"  */
#line 253 "phase4.y"
          { ((*yyvalp).str) = NULL; }
#line 2699 "phase4.tab.c"
    break;

  case 128: /* preprocessing_token: ">"  */
#line 254 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2705 "phase4.tab.c"
    break;

  case 129: /* preprocessing_token: "<="  */
#line 255 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2711 "phase4.tab.c"
    break;

  case 130: /* preprocessing_token: ">="  */
#line 256 "phase4.y"
                 { ((*yyvalp).str) = NULL; }
#line 2717 "phase4.tab.c"
    break;

  case 131: /* preprocessing_token: "=="  */
#line 257 "phase4.y"
                  { ((*yyvalp).str) = NULL; }
#line 2723 "phase4.tab.c"
    break;

  case 132: /* preprocessing_token: "!="  */
#line 258 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2729 "phase4.tab.c"
    break;

  case 133: /* preprocessing_token: "^"  */
#line 259 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2735 "phase4.tab.c"
    break;

  case 134: /* preprocessing_token: "|"  */
#line 260 "phase4.y"
          { ((*yyvalp).str) = NULL; }
#line 2741 "phase4.tab.c"
    break;

  case 135: /* preprocessing_token: "&&"  */
#line 261 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2747 "phase4.tab.c"
    break;

  case 136: /* preprocessing_token: "||"  */
#line 262 "phase4.y"
              { ((*yyvalp).str) = NULL; }
#line 2753 "phase4.tab.c"
    break;

  case 137: /* preprocessing_token: "?"  */
#line 263 "phase4.y"
              { ((*yyvalp).str) = NULL; }
#line 2759 "phase4.tab.c"
    break;

  case 138: /* preprocessing_token: ":"  */
#line 264 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2765 "phase4.tab.c"
    break;

  case 139: /* preprocessing_token: ";"  */
#line 265 "phase4.y"
               { ((*yyvalp).str) = NULL; }
#line 2771 "phase4.tab.c"
    break;

  case 140: /* preprocessing_token: "..."  */
#line 266 "phase4.y"
              { ((*yyvalp).str) = NULL; }
#line 2777 "phase4.tab.c"
    break;

  case 141: /* preprocessing_token: "="  */
#line 267 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2783 "phase4.tab.c"
    break;

  case 142: /* preprocessing_token: "*="  */
#line 268 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2789 "phase4.tab.c"
    break;

  case 143: /* preprocessing_token: "/="  */
#line 269 "phase4.y"
                 { ((*yyvalp).str) = NULL; }
#line 2795 "phase4.tab.c"
    break;

  case 144: /* preprocessing_token: "%="  */
#line 270 "phase4.y"
                   { ((*yyvalp).str) = NULL; }
#line 2801 "phase4.tab.c"
    break;

  case 145: /* preprocessing_token: "+="  */
#line 271 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2807 "phase4.tab.c"
    break;

  case 146: /* preprocessing_token: "-="  */
#line 272 "phase4.y"
                 { ((*yyvalp).str) = NULL; }
#line 2813 "phase4.tab.c"
    break;

  case 147: /* preprocessing_token: "<<="  */
#line 273 "phase4.y"
                    { ((*yyvalp).str) = NULL; }
#line 2819 "phase4.tab.c"
    break;

  case 148: /* preprocessing_token: ">>="  */
#line 274 "phase4.y"
                      { ((*yyvalp).str) = NULL; }
#line 2825 "phase4.tab.c"
    break;

  case 149: /* preprocessing_token: "&="  */
#line 275 "phase4.y"
               { ((*yyvalp).str) = NULL; }
#line 2831 "phase4.tab.c"
    break;

  case 150: /* preprocessing_token: "^="  */
#line 276 "phase4.y"
                 { ((*yyvalp).str) = NULL; }
#line 2837 "phase4.tab.c"
    break;

  case 151: /* preprocessing_token: "|="  */
#line 277 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2843 "phase4.tab.c"
    break;

  case 152: /* preprocessing_token: ","  */
#line 278 "phase4.y"
           { ((*yyvalp).str) = NULL; }
#line 2849 "phase4.tab.c"
    break;

  case 153: /* preprocessing_token: "#"  */
#line 279 "phase4.y"
          { ((*yyvalp).str) = NULL; }
#line 2855 "phase4.tab.c"
    break;

  case 154: /* preprocessing_token: "##"  */
#line 280 "phase4.y"
              { ((*yyvalp).str) = NULL; }
#line 2861 "phase4.tab.c"
    break;

  case 155: /* preprocessing_token: "sizeof"  */
#line 281 "phase4.y"
            { ((*yyvalp).str) = NULL; }
#line 2867 "phase4.tab.c"
    break;

  case 156: /* preprocessing_token: "_Alignof"  */
#line 282 "phase4.y"
             { ((*yyvalp).str) = NULL; }
#line 2873 "phase4.tab.c"
    break;

  case 157: /* preprocessing_token: OTHER_CHAR  */
#line 283 "phase4.y"
                { ((*yyvalp).str) = NULL; }
#line 2879 "phase4.tab.c"
    break;


#line 2883 "phase4.tab.c"

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
    case YYSYMBOL_pp_tokens: /* pp_tokens  */
#line 88 "phase4.y"
            { free(((*yyvaluep).str)); }
#line 2935 "phase4.tab.c"
        break;

    case YYSYMBOL_preprocessing_token: /* preprocessing_token  */
#line 88 "phase4.y"
            { free(((*yyvaluep).str)); }
#line 2941 "phase4.tab.c"
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


#line 485 "phase4.y"


void phase4error(PHASE4LTYPE *loc, yyscan_t scanner, const char *message)
{
    fprintf(stderr, "%s\n", message);
}
