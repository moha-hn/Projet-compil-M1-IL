
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     Begin = 259,
     End = 260,
     CONSTANT = 261,
     INT = 262,
     FLT = 263,
     CHR = 264,
     IF = 265,
     THEN = 266,
     ELSE = 267,
     ENDIF = 268,
     CASE = 269,
     CHECK = 270,
     SO = 271,
     ENDCHECK = 272,
     DEFAULT = 273,
     ENDCASE = 274,
     FOR = 275,
     DO = 276,
     ENDFOR = 277,
     IDF = 278,
     REEL = 279,
     ENTIER = 280,
     CCHAR = 281,
     PLUS = 282,
     MINUS = 283,
     MUL = 284,
     DIV = 285,
     POW = 286,
     SUP = 287,
     INF = 288,
     EQUAL = 289,
     DIFF = 290,
     SUPEQUAL = 291,
     INFEQUAL = 292,
     AND = 293,
     OR = 294,
     NOT = 295,
     AFFECTATION = 296,
     PARENTHESEGauche = 297,
     PARENTHESEDroite = 298,
     CROCHETGauche = 299,
     CROCHETDroite = 300,
     ACCOLADEGauche = 301,
     ACCOLADEDroite = 302,
     PNTV = 303,
     DEUXP = 304,
     VIRGULE = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 24 "syn.y"

  int III;
  char *CHAINE;
  struct
    {
     char* ctx;
     int type;
     int nature;
     float taille;
   }tt;



/* Line 1676 of yacc.c  */
#line 116 "syn.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


