/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    DOC_START = 258,
    DOC_END = 259,
    HEAD_START = 260,
    HEAD_END = 261,
    BODY_START = 262,
    BODY_END = 263,
    BF_START = 264,
    BF_END = 265,
    UF_START = 266,
    UF_END = 267,
    EM_START = 268,
    EM_END = 269,
    TT_START = 270,
    TT_END = 271,
    STRONG_START = 272,
    STRONG_END = 273,
    SMALL_START = 274,
    SMALL_END = 275,
    IT_START = 276,
    IT_END = 277,
    UL_START = 278,
    UL_END = 279,
    OL_START = 280,
    OL_END = 281,
    LI_START = 282,
    LI_END = 283,
    H1_START = 284,
    H1_END = 285,
    H2_START = 286,
    H2_END = 287,
    H3_START = 288,
    H3_END = 289,
    H4_START = 290,
    H4_END = 291,
    TITLE_START = 292,
    TITLE_END = 293,
    FONT_START = 294,
    FONT_END = 295,
    CENTER_START = 296,
    CENTER_END = 297,
    HREF_START = 298,
    HREF_END = 299,
    DL_START = 300,
    DL_END = 301,
    DT_START = 302,
    DT_END = 303,
    DD_START = 304,
    DD_END = 305,
    INVALID_TAG = 306
  };
#endif
/* Tokens.  */
#define DOC_START 258
#define DOC_END 259
#define HEAD_START 260
#define HEAD_END 261
#define BODY_START 262
#define BODY_END 263
#define BF_START 264
#define BF_END 265
#define UF_START 266
#define UF_END 267
#define EM_START 268
#define EM_END 269
#define TT_START 270
#define TT_END 271
#define STRONG_START 272
#define STRONG_END 273
#define SMALL_START 274
#define SMALL_END 275
#define IT_START 276
#define IT_END 277
#define UL_START 278
#define UL_END 279
#define OL_START 280
#define OL_END 281
#define LI_START 282
#define LI_END 283
#define H1_START 284
#define H1_END 285
#define H2_START 286
#define H2_END 287
#define H3_START 288
#define H3_END 289
#define H4_START 290
#define H4_END 291
#define TITLE_START 292
#define TITLE_END 293
#define FONT_START 294
#define FONT_END 295
#define CENTER_START 296
#define CENTER_END 297
#define HREF_START 298
#define HREF_END 299
#define DL_START 300
#define DL_END 301
#define DT_START 302
#define DT_END 303
#define DD_START 304
#define DD_END 305
#define INVALID_TAG 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
