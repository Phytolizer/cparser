/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Skeleton interface for Bison GLR parsers in C

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

#ifndef YY_PHASE4_PHASE4_TAB_H_INCLUDED
# define YY_PHASE4_PHASE4_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef PHASE4DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PHASE4DEBUG 1
#  else
#   define PHASE4DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PHASE4DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PHASE4DEBUG */
#if PHASE4DEBUG
extern int phase4debug;
#endif
/* "%code requires" blocks.  */
#line 109 "phase4.y"

typedef void *yyscan_t;

#line 56 "phase4.tab.h"

/* Token kinds.  */
#ifndef PHASE4TOKENTYPE
# define PHASE4TOKENTYPE
  enum phase4tokentype
  {
    PP_PHASE4EMPTY = -2,
    PP_YYEOF = 0,                  /* "end of file"  */
    PP_PHASE4error = 256,          /* error  */
    PP_PHASE4UNDEF = 257,          /* "invalid token"  */
    PP_EOL = 258,                  /* EOL  */
    PP_HEADER_NAME = 259,          /* HEADER_NAME  */
    PP_UCHAR_NAME = 260,           /* UCHAR_NAME  */
    PP_IDENTIFIER = 261,           /* IDENTIFIER  */
    PP_INTEGRAL_CONSTANT = 262,    /* INTEGRAL_CONSTANT  */
    PP_FLOATING_CONSTANT = 263,    /* FLOATING_CONSTANT  */
    PP_CHARACTER_CONSTANT = 264,   /* CHARACTER_CONSTANT  */
    PP_STRING_LITERAL = 265,       /* STRING_LITERAL  */
    PP_LBRACK = 266,               /* "["  */
    PP_RBRACK = 267,               /* "]"  */
    PP_CONNECTED_LPAREN = 268,     /* "=("  */
    PP_LPAREN = 269,               /* "("  */
    PP_RPAREN = 270,               /* ")"  */
    PP_LBRACE = 271,               /* "{"  */
    PP_RBRACE = 272,               /* "}"  */
    PP_DOT = 273,                  /* "."  */
    PP_ARROW = 274,                /* "->"  */
    PP_PLUSPLUS = 275,             /* "++"  */
    PP_MINUSMINUS = 276,           /* "--"  */
    PP_AMP = 277,                  /* "&"  */
    PP_STAR = 278,                 /* "*"  */
    PP_PLUS = 279,                 /* "+"  */
    PP_MINUS = 280,                /* "-"  */
    PP_TILDE = 281,                /* "~"  */
    PP_BANG = 282,                 /* "!"  */
    PP_SLASH = 283,                /* "/"  */
    PP_PERCENT = 284,              /* "%"  */
    PP_LEFTLEFT = 285,             /* "<<"  */
    PP_RIGHTRIGHT = 286,           /* ">>"  */
    PP_LEFT = 287,                 /* "<"  */
    PP_RIGHT = 288,                /* ">"  */
    PP_LEFTEQUALS = 289,           /* "<="  */
    PP_RIGHTEQUALS = 290,          /* ">="  */
    PP_EQUALSEQUALS = 291,         /* "=="  */
    PP_BANGEQUALS = 292,           /* "!="  */
    PP_CARAT = 293,                /* "^"  */
    PP_PIPE = 294,                 /* "|"  */
    PP_AMPAMP = 295,               /* "&&"  */
    PP_PIPEPIPE = 296,             /* "||"  */
    PP_QUESTION = 297,             /* "?"  */
    PP_COLON = 298,                /* ":"  */
    PP_SEMICOLON = 299,            /* ";"  */
    PP_ELLIPSIS = 300,             /* "..."  */
    PP_EQUALS = 301,               /* "="  */
    PP_STAREQUALS = 302,           /* "*="  */
    PP_SLASHEQUALS = 303,          /* "/="  */
    PP_PERCENTEQUALS = 304,        /* "%="  */
    PP_PLUSEQUALS = 305,           /* "+="  */
    PP_MINUSEQUALS = 306,          /* "-="  */
    PP_LEFTLEFTEQUALS = 307,       /* "<<="  */
    PP_RIGHTRIGHTEQUALS = 308,     /* ">>="  */
    PP_AMPEQUALS = 309,            /* "&="  */
    PP_CARATEQUALS = 310,          /* "^="  */
    PP_PIPEEQUALS = 311,           /* "|="  */
    PP_COMMA = 312,                /* ","  */
    PP_HASH = 313,                 /* "#"  */
    PP_HASHHASH = 314,             /* "##"  */
    PP_INCLUDE = 315,              /* "include"  */
    PP_DEFINE = 316,               /* "define"  */
    PP_IF = 317,                   /* "if"  */
    PP_IFDEF = 318,                /* "ifdef"  */
    PP_IFNDEF = 319,               /* "ifndef"  */
    PP_ELIF = 320,                 /* "elif"  */
    PP_ELSE = 321,                 /* "else"  */
    PP_ENDIF = 322,                /* "endif"  */
    PP_UNDEF = 323,                /* "undef"  */
    PP_LINE = 324,                 /* "line"  */
    PP_ERROR = 325,                /* "error"  */
    PP_PRAGMA = 326,               /* "pragma"  */
    PP_SIZEOF = 327,               /* "sizeof"  */
    PP_ALIGNOF = 328,              /* "_Alignof"  */
    PP_OTHER_CHAR = 329            /* OTHER_CHAR  */
  };
  typedef enum phase4tokentype phase4token_kind_t;
#endif

/* Value type.  */
#if ! defined PHASE4STYPE && ! defined PHASE4STYPE_IS_DECLARED
union PHASE4STYPE
{
#line 84 "phase4.y"

    struct token *token;
    struct token_list *token_list;
    struct identifier_list *identifier_list;

#line 153 "phase4.tab.h"

};
typedef union PHASE4STYPE PHASE4STYPE;
# define PHASE4STYPE_IS_TRIVIAL 1
# define PHASE4STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined PHASE4LTYPE && ! defined PHASE4LTYPE_IS_DECLARED
typedef struct PHASE4LTYPE PHASE4LTYPE;
struct PHASE4LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define PHASE4LTYPE_IS_DECLARED 1
# define PHASE4LTYPE_IS_TRIVIAL 1
#endif



int phase4parse (yyscan_t scanner);
/* "%code provides" blocks.  */
#line 113 "phase4.y"

#define YY_DECL \
    int phase3lex(PHASE4STYPE *yylval_param, PHASE4LTYPE *yylloc_param, yyscan_t yyscanner)
YY_DECL;

#line 185 "phase4.tab.h"

#endif /* !YY_PHASE4_PHASE4_TAB_H_INCLUDED  */
