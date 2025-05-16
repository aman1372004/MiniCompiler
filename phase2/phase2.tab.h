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

#ifndef YY_YY_PHASE2_TAB_H_INCLUDED
# define YY_YY_PHASE2_TAB_H_INCLUDED
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
    ID = 258,                      /* ID  */
    NUM = 259,                     /* NUM  */
    T_lt = 260,                    /* T_lt  */
    T_gt = 261,                    /* T_gt  */
    T_lteq = 262,                  /* T_lteq  */
    T_gteq = 263,                  /* T_gteq  */
    T_neq = 264,                   /* T_neq  */
    T_eqeq = 265,                  /* T_eqeq  */
    T_pl = 266,                    /* T_pl  */
    T_min = 267,                   /* T_min  */
    T_mul = 268,                   /* T_mul  */
    T_div = 269,                   /* T_div  */
    T_and = 270,                   /* T_and  */
    T_or = 271,                    /* T_or  */
    T_incr = 272,                  /* T_incr  */
    T_decr = 273,                  /* T_decr  */
    T_not = 274,                   /* T_not  */
    T_eq = 275,                    /* T_eq  */
    WHILE = 276,                   /* WHILE  */
    INT = 277,                     /* INT  */
    CHAR = 278,                    /* CHAR  */
    FLOAT = 279,                   /* FLOAT  */
    VOID = 280,                    /* VOID  */
    H = 281,                       /* H  */
    MAINTOK = 282,                 /* MAINTOK  */
    INCLUDE = 283,                 /* INCLUDE  */
    BREAK = 284,                   /* BREAK  */
    CONTINUE = 285,                /* CONTINUE  */
    IF = 286,                      /* IF  */
    ELSE = 287,                    /* ELSE  */
    COUT = 288,                    /* COUT  */
    STRING = 289,                  /* STRING  */
    FOR = 290,                     /* FOR  */
    ENDL = 291                     /* ENDL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PHASE2_TAB_H_INCLUDED  */
