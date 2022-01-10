/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_HOME_XCW_XCW3_COMPILER_COMPILER_TIGGER2RISCV_BUILD_XCW_PARSER_TAB_H_INCLUDED
# define YY_YY_HOME_XCW_XCW3_COMPILER_COMPILER_TIGGER2RISCV_BUILD_XCW_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD = 258,
    SUB = 259,
    MUL = 260,
    DIV = 261,
    MOD = 262,
    ASSIGN = 263,
    EQ = 264,
    NEQ = 265,
    LE = 266,
    LEQ = 267,
    GE = 268,
    GEQ = 269,
    NOT = 270,
    AND = 271,
    OR = 272,
    NUM = 273,
    IDENT = 274,
    MALLOC = 275,
    LBRAC = 276,
    RBRAC = 277,
    IF = 278,
    GOTO = 279,
    LABEL = 280,
    PARAM = 281,
    CALL = 282,
    RETURN = 283,
    COLON = 284,
    FUNC = 285,
    END = 286,
    REG = 287,
    STORE = 288,
    LOAD = 289,
    LOADADDR = 290
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define MOD 262
#define ASSIGN 263
#define EQ 264
#define NEQ 265
#define LE 266
#define LEQ 267
#define GE 268
#define GEQ 269
#define NOT 270
#define AND 271
#define OR 272
#define NUM 273
#define IDENT 274
#define MALLOC 275
#define LBRAC 276
#define RBRAC 277
#define IF 278
#define GOTO 279
#define LABEL 280
#define PARAM 281
#define CALL 282
#define RETURN 283
#define COLON 284
#define FUNC 285
#define END 286
#define REG 287
#define STORE 288
#define LOAD 289
#define LOADADDR 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_XCW_XCW3_COMPILER_COMPILER_TIGGER2RISCV_BUILD_XCW_PARSER_TAB_H_INCLUDED  */
