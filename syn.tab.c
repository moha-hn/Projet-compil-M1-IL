
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syn.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "quad.h"
    #include "ts.h"
    #include "opt.h"
    #include "gc.h"

   
    int typv;

    int cptTemp=1;
    int cptEndCheck=0;

    int yylex();
    extern FILE* yyin ;
    extern int yylineno;
    extern int col;
    


/* Line 189 of yacc.c  */
#line 96 "syn.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
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



/* Line 214 of yacc.c  */
#line 196 "syn.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 208 "syn.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    11,    13,    15,    17,    21,    28,    29,
      33,    37,    39,    44,    46,    51,    54,    57,    60,    63,
      64,    69,    77,    81,    85,    89,    93,    97,   102,   104,
     106,   110,   114,   118,   122,   126,   130,   134,   138,   141,
     143,   145,   147,   149,   150,   160,   161,   165,   166,   167,
     168,   177,   178,   187,   188,   192,   193,   195,   196,   198,
     200,   202,   204,   206,   208,   209,   210,   211,   212,   227
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,     3,    23,    54,     4,    58,     5,    23,
      -1,     7,    -1,     9,    -1,     8,    -1,    55,    48,    54,
      -1,     6,    23,    41,    62,    48,    54,    -1,    -1,    23,
      56,    55,    -1,    23,    57,    53,    -1,    50,    -1,    44,
      25,    45,    50,    -1,    49,    -1,    44,    25,    45,    49,
      -1,    59,    58,    -1,    63,    58,    -1,    67,    58,    -1,
      75,    58,    -1,    -1,    23,    41,    60,    48,    -1,    23,
      44,    25,    45,    41,    60,    48,    -1,    60,    27,    60,
      -1,    60,    28,    60,    -1,    60,    29,    60,    -1,    60,
      30,    60,    -1,    60,    31,    60,    -1,    23,    44,    25,
      45,    -1,    23,    -1,    62,    -1,    60,    32,    60,    -1,
      60,    33,    60,    -1,    60,    34,    60,    -1,    60,    36,
      60,    -1,    60,    37,    60,    -1,    60,    35,    60,    -1,
      61,    38,    61,    -1,    61,    39,    61,    -1,    40,    61,
      -1,    60,    -1,    24,    -1,    25,    -1,    26,    -1,    -1,
      10,    42,    61,    43,    64,    11,    58,    65,    13,    -1,
      -1,    12,    66,    58,    -1,    -1,    -1,    -1,    14,    42,
      23,    68,    43,    70,    69,    19,    -1,    -1,    15,    74,
      60,    71,    16,    58,    73,    70,    -1,    -1,    18,    72,
      58,    -1,    -1,    17,    -1,    -1,    32,    -1,    33,    -1,
      34,    -1,    36,    -1,    37,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    20,    42,    59,    76,    61,    77,    48,    80,
      43,    21,    78,    58,    79,    22,    -1,    23,    41,    60,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    67,    68,    69,    71,    73,    82,    84,
      99,   115,   115,   117,   117,   121,   122,   123,   124,   124,
     128,   148,   168,   180,   192,   204,   216,   228,   252,   278,
     284,   291,   297,   303,   309,   315,   321,   327,   333,   339,
     345,   346,   347,   351,   351,   359,   359,   364,   368,   384,
     367,   392,   391,   406,   405,   417,   419,   436,   450,   451,
     452,   453,   454,   455,   458,   462,   470,   477,   457,   486
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "Begin", "End", "CONSTANT",
  "INT", "FLT", "CHR", "IF", "THEN", "ELSE", "ENDIF", "CASE", "CHECK",
  "SO", "ENDCHECK", "DEFAULT", "ENDCASE", "FOR", "DO", "ENDFOR", "IDF",
  "REEL", "ENTIER", "CCHAR", "PLUS", "MINUS", "MUL", "DIV", "POW", "SUP",
  "INF", "EQUAL", "DIFF", "SUPEQUAL", "INFEQUAL", "AND", "OR", "NOT",
  "AFFECTATION", "PARENTHESEGauche", "PARENTHESEDroite", "CROCHETGauche",
  "CROCHETDroite", "ACCOLADEGauche", "ACCOLADEDroite", "PNTV", "DEUXP",
  "VIRGULE", "$accept", "S", "TYPE", "Declaration", "listaVariable", "sep",
  "sepa", "Instruction", "Aff", "expressionA", "expressionC", "valeur",
  "IFCdn", "$@1", "elsebloc", "$@2", "CASECdn", "$@3", "$@4", "blocCase",
  "$@5", "$@6", "blockEnd", "condition1", "loop", "$@7", "$@8", "$@9",
  "$@10", "Aff1", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    54,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    58,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    62,    64,    63,    66,    65,    65,    68,    69,
      67,    71,    70,    72,    70,    70,    73,    73,    74,    74,
      74,    74,    74,    74,    76,    77,    78,    79,    75,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     1,     1,     1,     3,     6,     0,     3,
       3,     1,     4,     1,     4,     2,     2,     2,     2,     0,
       4,     7,     3,     3,     3,     3,     3,     4,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     0,     9,     0,     3,     0,     0,     0,
       8,     0,     8,     0,     3,     0,     1,     0,     1,     1,
       1,     1,     1,     1,     0,     0,     0,     0,    14,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,     1,     0,     0,     0,     0,     0,
       0,    13,    11,     0,     0,    19,     8,     0,     0,     9,
       3,     5,     4,    10,     0,     0,     0,     0,     0,    19,
      19,    19,    19,     6,    40,    41,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    17,    18,     8,
      14,    12,    28,     0,    39,     0,    29,    48,    64,     0,
       0,     2,     7,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,    20,     0,     0,    22,    23,    24,    25,    26,    30,
      31,    32,    35,    33,    34,    36,    37,     0,    55,    65,
       0,    27,    19,     0,    53,    49,     0,     0,    47,    58,
      59,    60,    63,    61,    62,     0,    19,     0,     0,    21,
      45,     0,    51,    54,    50,     0,     0,    19,    44,     0,
       0,     0,    46,    19,    69,    66,    57,    19,    56,    55,
      67,    52,     0,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    23,     7,     8,    13,    14,    28,    29,    54,
      55,    56,    30,    97,   121,   127,    31,    79,   117,   105,
     129,   116,   139,   115,    32,    80,   106,   137,   142,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int8 yypact[] =
{
      10,     3,    53,    36,   -44,    28,   -32,    68,    38,    47,
      70,   -44,   -44,    73,    67,    40,    36,    59,    52,   -44,
     -44,   -44,   -44,   -44,    57,    58,    61,     8,    96,    40,
      40,    40,    40,   -44,   -44,   -44,   -44,    54,   -43,   -15,
      83,    84,    32,    80,    97,   -44,   -44,   -44,   -44,    36,
     -44,   -44,    77,   -15,    82,   -24,   -44,   -44,   -44,    -7,
      78,   -44,   -44,    99,   -44,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,   -15,   -15,   -44,    79,
     -15,   -44,    85,    86,    60,    60,    94,    94,   -44,    51,
      51,    51,    51,    51,    51,   -44,    89,   117,    46,    55,
      32,   -44,    40,    34,   -44,   -44,    81,    17,   118,   -44,
     -44,   -44,   -44,   -44,   -44,    32,    40,   113,   110,   -44,
     -44,   121,    51,   -44,   -44,    95,    92,    40,   -44,   122,
      32,   116,   -44,    40,    51,   -44,   123,    40,   -44,    46,
     -44,   -44,   119,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,   -11,   126,   -44,   -44,   -29,   101,   -38,
     -37,   127,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     4,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    46,    47,    48,    59,    33,    50,    51,    52,    34,
      35,    36,    10,     1,    76,    77,    64,    11,    12,    78,
      65,    66,    67,    68,    69,    53,     3,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    62,    95,
      96,    81,     5,    99,    65,    66,    67,    68,    69,    42,
      24,     9,    43,     4,    25,    52,    34,    35,    36,     6,
      26,   103,   107,    27,   104,   119,   109,   110,   111,   112,
     113,   114,    15,   108,    20,    21,    22,   122,    65,    66,
      67,    68,    69,    34,    35,    36,    16,   123,    17,    67,
      68,    69,   134,    76,    77,    18,     6,    38,   132,    39,
      40,    44,    49,    41,   136,    60,    57,    27,   140,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      61,    63,    98,    82,    83,    69,   100,    76,   102,   118,
     120,   101,   124,   125,   128,   131,   130,   135,   133,    19,
     138,   143,    58,   141,    37
};

static const yytype_uint8 yycheck[] =
{
      29,    30,    31,    32,    42,    16,    49,    50,    23,    24,
      25,    26,    44,     3,    38,    39,    53,    49,    50,    43,
      27,    28,    29,    30,    31,    40,    23,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    49,    76,
      77,    48,     6,    80,    27,    28,    29,    30,    31,    41,
      10,    23,    44,     0,    14,    23,    24,    25,    26,    23,
      20,    15,   100,    23,    18,    48,    32,    33,    34,    35,
      36,    37,     4,   102,     7,     8,     9,   115,    27,    28,
      29,    30,    31,    24,    25,    26,    48,   116,    41,    29,
      30,    31,   130,    38,    39,    25,    23,    45,   127,    42,
      42,     5,    48,    42,   133,    25,    23,    23,   137,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      23,    44,    43,    45,    25,    31,    41,    38,    11,    48,
      12,    45,    19,    23,    13,    43,    41,    21,    16,    13,
      17,    22,    41,   139,    17
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    23,     0,     6,    23,    54,    55,    23,
      44,    49,    50,    56,    57,     4,    48,    41,    25,    55,
       7,     8,     9,    53,    10,    14,    20,    23,    58,    59,
      63,    67,    75,    54,    24,    25,    26,    62,    45,    42,
      42,    42,    41,    44,     5,    58,    58,    58,    58,    48,
      49,    50,    23,    40,    60,    61,    62,    23,    59,    60,
      25,    23,    54,    44,    61,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    43,    68,
      76,    48,    45,    25,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    64,    43,    61,
      41,    45,    11,    15,    18,    70,    77,    60,    58,    32,
      33,    34,    35,    36,    37,    74,    72,    69,    48,    48,
      12,    65,    60,    58,    19,    23,    80,    66,    13,    71,
      41,    43,    58,    16,    60,    21,    58,    78,    17,    73,
      58,    70,    79,    22
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 63 "syn.y"
    {if(strcmp((yyvsp[(2) - (7)].CHAINE),(yyvsp[(7) - (7)].CHAINE))!=0) {yyerror();}
                                                         else {nomPROG= strdup((yyvsp[(2) - (7)].CHAINE));createQuad("","","",""); printf("\n^_^ Good Job ^_^\n"); } 
                                                          ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 67 "syn.y"
    {(yyval.III)=0;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 68 "syn.y"
    {(yyval.III)=1;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 69 "syn.y"
    {(yyval.III)=2;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 74 "syn.y"
    {
               float ab;
              if((yyvsp[(4) - (6)].tt).type==1) ab = (yyvsp[(4) - (6)].tt).ctx[0];
              else  ab=atof((yyvsp[(4) - (6)].tt).ctx); 
               if(!lookup((yyvsp[(2) - (6)].CHAINE),listesymbol))
                insert((yyvsp[(2) - (6)].CHAINE),(yyvsp[(4) - (6)].tt).type,1,ab,listesymbol);
               else {printf("DoubleDeclaration\n");return 0;}
             ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 85 "syn.y"
    {
                int k= (yyvsp[(2) - (3)].III);
                char kk[5];
                itoa(k,kk,10);
                if(k>1)
                {
                  createQuad("BOUNDS",kk,"","");
                  createQuad("ADEC",(yyvsp[(1) - (3)].CHAINE),"","");
                }
                
                if(!lookup((yyvsp[(1) - (3)].CHAINE),listesymbol))
                  insert((yyvsp[(1) - (3)].CHAINE),save_type,0,(yyvsp[(2) - (3)].III),listesymbol);
                else {printf("DoubleDeclaration\n");return 0;}
              ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 100 "syn.y"
    {
                int k= (yyvsp[(2) - (3)].III);
                char kk[5];
                itoa(k,kk,10);
                if(k>1)
                {
                 createQuad("BOUNDS",kk,"","");
                 createQuad("ADEC",(yyvsp[(1) - (3)].CHAINE),"","");
                }
               save_type=(yyvsp[(3) - (3)].III);
                if(!lookup((yyvsp[(1) - (3)].CHAINE),listesymbol))
                  insert((yyvsp[(1) - (3)].CHAINE),(yyvsp[(3) - (3)].III),0,(yyvsp[(2) - (3)].III),listesymbol);
                else {printf("DoubleDeclaration\n");return 0;}
              ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 115 "syn.y"
    {(yyval.III)=1;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 115 "syn.y"
    {(yyval.III)=atoi((yyvsp[(2) - (4)].CHAINE)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 117 "syn.y"
    {(yyval.III)=1;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 117 "syn.y"
    {(yyval.III)=atoi((yyvsp[(2) - (4)].CHAINE));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 129 "syn.y"
    {
      if(!lookup((yyvsp[(1) - (4)].CHAINE),listesymbol))
      {
          printf("variable non declaré\n"); return 0;
      }
      else
      {
        int t = getType((yyvsp[(1) - (4)].CHAINE),listesymbol);
        if(t != (yyvsp[(3) - (4)].tt).type )
        {
          printf("Incpmpatibilite des types\n");
           return 0;
        }
      }
      //1111111
       createQuad("=",(yyvsp[(3) - (4)].tt).ctx,"",(yyvsp[(1) - (4)].CHAINE));
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 149 "syn.y"
    {
      if(!lookup((yyvsp[(1) - (7)].CHAINE),listesymbol))
      {
          printf("variable non declaré\n"); return 0;
      }
      else
      {
        int t = getType((yyvsp[(1) - (7)].CHAINE),listesymbol);
        if(t != (yyvsp[(6) - (7)].tt).type )
        {
          printf("Incpmpatibilite des types\n");
           return 0;
        }
      }
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 168 "syn.y"
    {if((yyvsp[(1) - (3)].tt).type==2 || (yyvsp[(3) - (3)].tt).type==2)
                                              {(yyval.tt).type=2;}
                                            else  (yyval.tt).type=0;
                                                  (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
                                                  (yyval.tt).taille=1;
                                                  (yyval.tt).nature=0;

                                                  sprintf((yyval.tt).ctx,"T%d",cptTemp);
                                                  createQuad("+",(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
                                                  cptTemp++;
                                          ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 180 "syn.y"
    {if((yyvsp[(1) - (3)].tt).type==2 || (yyvsp[(3) - (3)].tt).type==2)
                                          {(yyval.tt).type=2;}
                                          else (yyval.tt).type=0;
                                          (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
                                          (yyval.tt).taille=1;
                                          (yyval.tt).nature=0;

                                          sprintf((yyval.tt).ctx,"T%d",cptTemp);
                                          createQuad("-",(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
                                          cptTemp++;
                                          ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 192 "syn.y"
    {if((yyvsp[(1) - (3)].tt).type==2 || (yyvsp[(3) - (3)].tt).type==2)
                                          {(yyval.tt).type=2;}
                                          else (yyval.tt).type=0;
                                          (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
                                          (yyval.tt).taille=1;
                                          (yyval.tt).nature=0;

                                          sprintf((yyval.tt).ctx,"T%d",cptTemp);
                                          createQuad("*",(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
                                          cptTemp++;
                                          ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 204 "syn.y"
    {if((yyvsp[(1) - (3)].tt).type==2 || (yyvsp[(3) - (3)].tt).type==2)
                                          {(yyval.tt).type=2;}
                                          else (yyval.tt).type=0;
                                          (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
                                          (yyval.tt).taille=1;
                                          (yyval.tt).nature=0;

                                          sprintf((yyval.tt).ctx,"T%d",cptTemp);
                                          createQuad("/",(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
                                          cptTemp++;
                                          ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 216 "syn.y"
    {if((yyvsp[(1) - (3)].tt).type==2 || (yyvsp[(3) - (3)].tt).type==2)
                                          {(yyval.tt).type=2;}
                                          else (yyval.tt).type=0;
                                          (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
                                          (yyval.tt).taille=1;
                                          (yyval.tt).nature=0;

                                          sprintf((yyval.tt).ctx,"T%d",cptTemp);
                                          createQuad("^",(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
                                          cptTemp++;
                                          ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 229 "syn.y"
    {if(!lookup((yyvsp[(1) - (4)].CHAINE),listesymbol))
                                                        {
                                                          printf("variable non declaré \n"); return 0;
                                                        }
                                                      else
                                                      {
                                                          int n= getNature((yyvsp[(1) - (4)].CHAINE),listesymbol);
                                                          if(n==1)
                                                          {
                                                            printf("Impossible de modifier une Constante\n"); return 0;
                                                          }
                                                          else
                                                          {
                                                            int k = getType((yyvsp[(1) - (4)].CHAINE),listesymbol);
                                                            if(k!=2) k=0;
                                                            (yyval.tt).ctx=(yyvsp[(1) - (4)].CHAINE);
                                                            (yyval.tt).type=k;
                                                            (yyval.tt).taille=1;
                                                            (yyval.tt).nature=0;
                                                          }
                                                      }
                                                  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 253 "syn.y"
    {
                    if(!lookup((yyvsp[(1) - (1)].CHAINE),listesymbol))
                    {
                      printf("variable non declaré \n"); return 0;
                    }
                    else
                    {
                      int n= getNature((yyvsp[(1) - (1)].CHAINE),listesymbol);
                      
                      if(n==1)
                      {
                        printf("Impossible de modifier une Constante\n"); return 0;
                      }
                      else
                      {
                        int k = getType((yyvsp[(1) - (1)].CHAINE),listesymbol);
                        if(k!=2) k=0;
                        (yyval.tt).ctx=(yyvsp[(1) - (1)].CHAINE);
                        (yyval.tt).type=k;
                        (yyval.tt).taille=1;
                        (yyval.tt).nature=0;
                      }
                    }
                ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 278 "syn.y"
    { int k= (yyvsp[(1) - (1)].tt).type;
                   
                   (yyvsp[(1) - (1)].tt).ctx=strdup((yyval.tt).ctx);
                    (yyval.tt).type=k;(yyval.tt).taille=1;(yyval.tt).nature=0;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 285 "syn.y"
    {
                (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
              sprintf((yyval.tt).ctx,"T%d",cptTemp);
              createQuadA(6,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
              cptTemp++;
            ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 291 "syn.y"
    {
                (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
              sprintf((yyval.tt).ctx,"T%d",cptTemp);
              createQuadA(5,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
              cptTemp++;
            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 297 "syn.y"
    {
                (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
              sprintf((yyval.tt).ctx,"T%d",cptTemp);
              createQuadA(1,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
              cptTemp++;
            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 303 "syn.y"
    {
              (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
              sprintf((yyval.tt).ctx,"T%d",cptTemp);
              createQuadA(3,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
              cptTemp++;
            ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 309 "syn.y"
    {
                (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
              sprintf((yyval.tt).ctx,"T%d",cptTemp);
              createQuadA(4,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
              cptTemp++;
            ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 315 "syn.y"
    {
                (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
              sprintf((yyval.tt).ctx,"T%d",cptTemp);
              createQuadA(2,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
              cptTemp++;
            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 321 "syn.y"
    {
              (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
            sprintf((yyval.tt).ctx,"T%d",cptTemp);
            createQuadL(3,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
            cptTemp++;
            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 327 "syn.y"
    {
              (yyvsp[(1) - (3)].tt).ctx=strdup((yyval.tt).ctx);
            sprintf((yyval.tt).ctx,"T%d",cptTemp);
            createQuadL(2,(yyvsp[(1) - (3)].tt).ctx,(yyvsp[(3) - (3)].tt).ctx,(yyval.tt).ctx);
            cptTemp++;
            ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 333 "syn.y"
    {
            (yyvsp[(2) - (2)].tt).ctx=strdup((yyval.tt).ctx);
            sprintf((yyval.tt).ctx,"T%d",cptTemp);
            createQuadL(1,(yyvsp[(2) - (2)].tt).ctx,"",(yyval.tt).ctx);
            cptTemp++;
            ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 339 "syn.y"
    {
                (yyvsp[(1) - (1)].tt).ctx=strdup((yyval.tt).ctx);
            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 345 "syn.y"
    {(yyval.tt).type =2;(yyvsp[(1) - (1)].CHAINE)=strdup((yyval.tt).ctx);(yyval.tt).taille=1;(yyval.tt).nature=-1;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 346 "syn.y"
    {(yyval.tt).type =0;(yyvsp[(1) - (1)].CHAINE)=strdup((yyval.tt).ctx);(yyval.tt).taille=1;(yyval.tt).nature=-1;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 347 "syn.y"
    {(yyval.tt).type =1;sprintf((yyval.tt).ctx,"%c",(yyvsp[(1) - (1)].CHAINE)[1]);(yyval.tt).taille=1;(yyval.tt).nature=-1;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 351 "syn.y"
    {
          empiler_Int(&pile1,qc);
          createQuad("BZ","",QuadR[qc-1].res,"");
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 355 "syn.y"
    {
          QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 359 "syn.y"
    {
            QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);
            empiler_Int(&pile1,qc);
            createQuad("BR","","","");
            ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 368 "syn.y"
    {
            sprintf(idfSwitch,"%s",strdup((yyvsp[(3) - (3)].CHAINE)));

            //sauvegarder un tempp, et generer un quadruplet pour le default du switch
            sprintf(defaultTemp,"T%d",cptTemp); cptTemp++;
            empiler_Str(&pile1,defaultTemp);
            createQuad("=","0","",defaultTemp);

            //empiler l'idf du switch
            empiler_Str(&pile1,idfSwitch);

            //initialiser & empiler le cpt des endCheck
            cptEndCheck=0;
            empiler_Int(&pile2,cptEndCheck);
          ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 384 "syn.y"
    {			  //mise à jour des BR end check
                 cptEndCheck=atoi(depiler(&pile2));
                  while(cptEndCheck>0){
                    QuadR[atoi(depiler(&pile3))].opd1=ToSTR(qc);
                    cptEndCheck--;
                  }
          ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 392 "syn.y"
    {
            strcpy(idfSwitch,depiler(&pile1));
            sprintf(tempp,"T%d",cptTemp); cptTemp++;
            //quadruplet condition
            createQuadA((yyvsp[(2) - (3)].III),idfSwitch,(yyvsp[(3) - (3)].tt).ctx,tempp);

            //empiler la position du quad a metre a jour
            empiler_Int(&pile1,qc);
            createQuad("BZ","",QuadR[qc-1].res,"");

            empiler_Str(&pile1,idfSwitch);
            ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 406 "syn.y"
    {
            depiler(&pile1);//depiler idfSwitch on en a plus besoin
            strcpy(defaultTemp,depiler(&pile1));//depiler le defaultTemp
            //empiler la position du quad a metre a jour
            empiler_Int(&pile1,qc);
            createQuad("BNZ","",defaultTemp,"");

          ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 414 "syn.y"
    {
                      //mise a jour quadruplet
                      QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc);
                    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 420 "syn.y"
    {
                strcpy(idfSwitch,depiler(&pile1));
                //mise a jour quadruplet
                QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);

                empiler_Str(&pile1,idfSwitch);

                //mise à jour du cpt du endCheck
                cptEndCheck=atoi(depiler(&pile2));
                cptEndCheck++;
                empiler_Int(&pile2,cptEndCheck);

                //empiler la pos du BR de fin du check
                empiler_Int(&pile3,qc);
                createQuad("BR","","","");
              ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 436 "syn.y"
    {
    									strcpy(idfSwitch,depiler(&pile1));
    									//mise a jour quadruplet br
    									QuadR[atoi(depiler(&pile1))].opd1=ToSTR(qc+1);

    									//generer un quadruplet pour le default
    									strcpy(defaultTemp,first(pile1));
    									createQuad("=","1","",defaultTemp);

    									empiler_Str(&pile1,idfSwitch);
    								;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 450 "syn.y"
    {(yyval.III)=6;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 451 "syn.y"
    {(yyval.III)=5;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 452 "syn.y"
    {(yyval.III)=1;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 453 "syn.y"
    {(yyval.III)=2;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 454 "syn.y"
    {(yyval.III)=3;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 455 "syn.y"
    {(yyval.III)=4;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 458 "syn.y"
    {
           empiler_Int(&pile1,qc);
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 462 "syn.y"
    {
           empiler_Int(&pile2,qc);
           createQuad("BZ","",QuadR[qc-1].res,"");
           empiler_Int(&pile2,qc);
          createQuad("BR","","","");
           empiler_Int(&pile2,qc);
        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 470 "syn.y"
    {
             createQuad("BR",first(pile1),"","");
               strcpy(tempp,depiler(&pile2));
               QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
              empiler_Str(&pile2,tempp);
          ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 477 "syn.y"
    {
               createQuad("BR",depiler(&pile2),"","");
               QuadR[atoi(depiler(&pile2))].opd1=ToSTR(qc);
           ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 482 "syn.y"
    {
               depiler(&pile1);
           ;}
    break;



/* Line 1455 of yacc.c  */
#line 2213 "syn.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 489 "syn.y"

int yyerror(){
  printf("err synt a la ligne %d , colonne %d \n",yylineno,col );
}
int main()
{
  qc=0;
  init(listesymbol);
  yyin=fopen("pgm.txt","r");
  yyparse();
  displayTS(listesymbol);
  displayQuad();
  optimisation();
  displayQuad();
  ToAssembly(listesymbol);
return 0;
}

