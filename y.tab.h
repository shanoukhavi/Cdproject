/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BEGIN_ = 258,                  /* BEGIN_  */
    PRINT = 259,                   /* PRINT  */
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    STRING = 262,                  /* STRING  */
    REAL_NUM = 263,                /* REAL_NUM  */
    TO = 264,                      /* TO  */
    END_ = 265,                    /* END_  */
    FOR = 266,                     /* FOR  */
    ID = 267,                      /* ID  */
    NUM = 268,                     /* NUM  */
    REAL_DIG = 269,                /* REAL_DIG  */
    LT = 270,                      /* LT  */
    RT = 271,                      /* RT  */
    NL = 272,                      /* NL  */
    CM = 273,                      /* CM  */
    COLON = 274,                   /* COLON  */
    SEMICOLON = 275,               /* SEMICOLON  */
    EQ = 276                       /* EQ  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BEGIN_ 258
#define PRINT 259
#define INT 260
#define FLOAT 261
#define STRING 262
#define REAL_NUM 263
#define TO 264
#define END_ 265
#define FOR 266
#define ID 267
#define NUM 268
#define REAL_DIG 269
#define LT 270
#define RT 271
#define NL 272
#define CM 273
#define COLON 274
#define SEMICOLON 275
#define EQ 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
