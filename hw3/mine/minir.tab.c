/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IDENT = 258,
     T_INTCONST = 259,
     T_FLOATCONST = 260,
     T_UNKNOWN = 261,
     T_STRCONST = 262,
     T_IF = 263,
     T_ELSE = 264,
     T_WHILE = 265,
     T_FUNCTION = 266,
     T_FOR = 267,
     T_IN = 268,
     T_NEXT = 269,
     T_BREAK = 270,
     T_TRUE = 271,
     T_FALSE = 272,
     T_QUIT = 273,
     T_PRINT = 274,
     T_CAT = 275,
     T_READ = 276,
     T_LPAREN = 277,
     T_RPAREN = 278,
     T_LBRACE = 279,
     T_RBRACE = 280,
     T_LBRACKET = 281,
     T_RBRACKET = 282,
     T_SEMICOLON = 283,
     T_COMMA = 284,
     T_ADD = 285,
     T_SUB = 286,
     T_MULT = 287,
     T_DIV = 288,
     T_MOD = 289,
     T_POW = 290,
     T_LT = 291,
     T_LE = 292,
     T_GT = 293,
     T_GE = 294,
     T_EQ = 295,
     T_NE = 296,
     T_NOT = 297,
     T_AND = 298,
     T_OR = 299,
     T_ASSIGN = 300,
     T_LIST = 301
   };
#endif
/* Tokens.  */
#define T_IDENT 258
#define T_INTCONST 259
#define T_FLOATCONST 260
#define T_UNKNOWN 261
#define T_STRCONST 262
#define T_IF 263
#define T_ELSE 264
#define T_WHILE 265
#define T_FUNCTION 266
#define T_FOR 267
#define T_IN 268
#define T_NEXT 269
#define T_BREAK 270
#define T_TRUE 271
#define T_FALSE 272
#define T_QUIT 273
#define T_PRINT 274
#define T_CAT 275
#define T_READ 276
#define T_LPAREN 277
#define T_RPAREN 278
#define T_LBRACE 279
#define T_RBRACE 280
#define T_LBRACKET 281
#define T_RBRACKET 282
#define T_SEMICOLON 283
#define T_COMMA 284
#define T_ADD 285
#define T_SUB 286
#define T_MULT 287
#define T_DIV 288
#define T_MOD 289
#define T_POW 290
#define T_LT 291
#define T_LE 292
#define T_GT 293
#define T_GE 294
#define T_EQ 295
#define T_NE 296
#define T_NOT 297
#define T_AND 298
#define T_OR 299
#define T_ASSIGN 300
#define T_LIST 301




/* Copy the first part of user declarations.  */
#line 11 "minir.y"

#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "SymbolTable.h"

int line_num = 1;

stack<SYMBOL_TABLE> scopeStack;

void printTokenInfo(const char* token_type, const char* lexeme);

void printRule(const char *, const char *);

int yyerror(const char *s) 
{
    printf("Line %d: %s\n", line_num, s);
    exit(1);
}

extern "C" 
{
    int yyparse(void);
    int yylex(void);
    int yywrap() { return 1; }
}

void beginScope();
void endScope();
bool findEntryInAnyScope(const string theName);



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 45 "minir.y"
{
    char* text;
}
/* Line 193 of yacc.c.  */
#line 225 "minir.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 238 "minir.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    45,    48,    52,    53,    56,    60,    61,    63,
      65,    69,    72,    77,    81,    82,    88,    96,   102,   103,
     112,   114,   116,   118,   120,   122,   127,   131,   133,   134,
     140,   146,   147,   151,   156,   161,   166,   167,   174,   176,
     178,   179,   181,   185,   190,   192,   194,   195,   197,   201,
     203,   205,   207,   209,   211,   213,   215,   217,   219,   221,
     223,   225,   227,   229,   231,   233,   240
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    59,    -1,    60,    -1,    61,
      -1,    57,    -1,    51,    -1,    68,    -1,    72,    -1,    73,
      -1,    66,    -1,    74,    -1,    79,    -1,    71,    -1,     4,
      -1,     7,    -1,     5,    -1,    16,    -1,    17,    -1,    52,
      -1,    52,    85,    52,    -1,    54,    53,    -1,    83,    54,
      53,    -1,    -1,    56,    55,    -1,    84,    56,    55,    -1,
      -1,    86,    -1,    50,    -1,    22,    49,    23,    -1,    42,
      56,    -1,    24,    49,    58,    25,    -1,    28,    49,    58,
      -1,    -1,     8,    22,    49,    23,    49,    -1,     8,    22,
      49,    23,    49,     9,    49,    -1,    10,    22,    49,    23,
      63,    -1,    -1,    12,    22,     3,    62,    13,    49,    23,
      63,    -1,    49,    -1,    64,    -1,    65,    -1,    15,    -1,
      14,    -1,    46,    22,    67,    23,    -1,    50,    29,    67,
      -1,    50,    -1,    -1,     3,    70,    69,    45,    49,    -1,
      26,    26,    49,    27,    27,    -1,    -1,    18,    22,    23,
      -1,    19,    22,    49,    23,    -1,    20,    22,    49,    23,
      -1,    21,    22,    86,    23,    -1,    -1,    11,    75,    22,
      76,    23,    57,    -1,    78,    -1,    77,    -1,    -1,     3,
      -1,     3,    29,    78,    -1,     3,    22,    80,    23,    -1,
      82,    -1,    81,    -1,    -1,    49,    -1,    49,    29,    82,
      -1,    30,    -1,    31,    -1,    44,    -1,    32,    -1,    33,
      -1,    43,    -1,    34,    -1,    35,    -1,    36,    -1,    38,
      -1,    37,    -1,    39,    -1,    40,    -1,    41,    -1,    88,
      -1,    87,    -1,     3,    26,    26,    49,    27,    27,    -1,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    81,    85,    89,    93,    97,   101,   105,
     109,   113,   117,   121,   125,   132,   136,   140,   144,   148,
     154,   159,   168,   175,   181,   186,   193,   199,   204,   208,
     212,   216,   222,   229,   234,   239,   243,   250,   259,   258,
     271,   275,   279,   285,   291,   297,   304,   309,   316,   315,
     327,   332,   337,   344,   349,   356,   362,   362,   373,   377,
     384,   389,   403,   421,   433,   437,   444,   449,   453,   459,
     463,   467,   473,   477,   481,   485,   489,   495,   499,   503,
     507,   511,   515,   521,   525,   531,   544
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENT", "T_INTCONST", "T_FLOATCONST",
  "T_UNKNOWN", "T_STRCONST", "T_IF", "T_ELSE", "T_WHILE", "T_FUNCTION",
  "T_FOR", "T_IN", "T_NEXT", "T_BREAK", "T_TRUE", "T_FALSE", "T_QUIT",
  "T_PRINT", "T_CAT", "T_READ", "T_LPAREN", "T_RPAREN", "T_LBRACE",
  "T_RBRACE", "T_LBRACKET", "T_RBRACKET", "T_SEMICOLON", "T_COMMA",
  "T_ADD", "T_SUB", "T_MULT", "T_DIV", "T_MOD", "T_POW", "T_LT", "T_LE",
  "T_GT", "T_GE", "T_EQ", "T_NE", "T_NOT", "T_AND", "T_OR", "T_ASSIGN",
  "T_LIST", "$accept", "N_START", "N_EXPR", "N_CONST", "N_ARITHLOGIC_EXPR",
  "N_SIMPLE_ARITHLOGIC", "N_ADD_OP_LIST", "N_TERM", "N_MULT_OP_LIST",
  "N_FACTOR", "N_COMPOUND_EXPR", "N_EXPR_LIST", "N_IF_EXPR",
  "N_WHILE_EXPR", "N_FOR_EXPR", "@1", "N_LOOP_EXPR", "N_BREAK_EXPR",
  "N_NEXT_EXPR", "N_LIST_EXPR", "N_CONST_LIST", "N_ASSIGNMENT_EXPR", "@2",
  "N_INDEX", "N_QUIT_EXPR", "N_OUTPUT_EXPR", "N_INPUT_EXPR",
  "N_FUNCTION_DEF", "@3", "N_PARAM_LIST", "N_NO_PARAMS", "N_PARAMS",
  "N_FUNCTION_CALL", "N_ARG_LIST", "N_NO_ARGS", "N_ARGS", "N_ADD_OP",
  "N_MULT_OP", "N_REL_OP", "N_VAR", "N_SINGLE_ELEMENT", "N_ENTIRE_VAR", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      51,    51,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    57,    58,    58,    59,    59,    60,    62,    61,
      63,    63,    63,    64,    65,    66,    67,    67,    69,    68,
      70,    70,    71,    72,    72,    73,    75,    74,    76,    76,
      77,    78,    78,    79,    80,    80,    81,    82,    82,    83,
      83,    83,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     0,     2,     3,     0,     1,     1,
       3,     2,     4,     3,     0,     5,     7,     5,     0,     8,
       1,     1,     1,     1,     1,     4,     3,     1,     0,     5,
       5,     0,     3,     4,     4,     4,     0,     6,     1,     1,
       0,     1,     3,     4,     1,     1,     0,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    86,    15,    17,    16,     0,     0,    56,     0,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    29,     7,    20,    24,    27,     6,     3,     4,     5,
      11,     8,    14,     9,    10,    12,    13,    28,    84,    83,
      66,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    86,    31,     0,     1,    77,    79,    78,
      80,    81,    82,     0,    69,    70,    71,    22,     0,    72,
      73,    75,    76,    74,    25,     0,    67,     0,    65,    64,
       0,     0,     0,     0,    60,    38,    52,     0,     0,     0,
      30,     0,     0,     0,    47,     0,    21,    24,    27,     0,
      63,     0,     0,     0,     0,    61,     0,    59,    58,     0,
      53,    54,    55,    34,    32,     0,     0,    45,    23,    26,
      68,     0,    49,    35,    44,    43,    40,    37,    41,    42,
       0,     0,     0,    33,     0,    46,    85,     0,    62,    57,
       0,     0,    36,     0,    85,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    76,    21,    22,    23,    67,    24,    74,    25,
      26,    92,    27,    28,    29,   109,   127,   128,   129,    30,
      95,    31,    81,    42,    32,    33,    34,    35,    45,   106,
     107,   108,    36,    77,    78,    79,    68,    75,    63,    37,
      38,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -55
static const yytype_int8 yypact[] =
{
      65,   -17,   -55,   -55,   -55,   -16,   -14,   -55,    -8,   -55,
     -55,     2,    16,    18,    19,    65,    65,    92,    20,     7,
     -55,   -55,   -55,    80,   -27,   -22,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
      65,    21,   -55,    65,    65,    23,    43,    27,    65,    65,
      50,    32,    28,    33,   -55,    47,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,    92,   -55,   -55,   -55,   -55,    92,   -55,
     -55,   -55,   -55,   -55,   -55,    92,    29,    42,   -55,   -55,
      65,    22,    48,    51,    63,   -55,   -55,    55,    56,    67,
     -55,    65,    68,    62,    69,    71,   -55,   -27,   -22,    65,
     -55,    73,    65,    65,    15,    72,    82,   -55,   -55,    79,
     -55,   -55,   -55,    28,   -55,    65,    47,   -55,   -55,   -55,
     -55,    83,   -55,    97,   -55,   -55,   -55,   -55,   -55,   -55,
      63,    88,    65,   -55,    86,   -55,    77,    65,   -55,   -55,
     100,    98,   -55,    15,   -55,   -55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,     0,   -54,   -55,    61,    30,    58,    31,   -15,
      -3,    17,   -55,   -55,   -55,   -55,   -12,   -55,   -55,   -55,
      24,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     3,   -55,   -55,   -55,    36,   -55,   -55,   -55,    89,
     -55,   -55
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -52
static const yytype_int16 yytable[] =
{
      20,    94,    54,    64,    65,    40,    43,    56,    44,    41,
      69,    70,    71,    72,    46,    51,    52,    66,     1,     2,
       3,    73,     4,     5,    47,     6,     7,     8,   -51,   124,
     125,     9,    10,    11,    12,    13,    14,    15,    48,    16,
      49,    50,    55,    82,    83,    84,    85,    80,    87,    88,
      86,     2,     3,    53,     4,    90,    91,    17,    99,    93,
      98,    18,    94,     9,    10,   100,   105,   102,     1,     2,
       3,   103,     4,     5,   104,     6,     7,     8,   110,   111,
     101,     9,    10,    11,    12,    13,    14,    15,   115,    16,
     112,   113,   132,   114,   117,    53,     2,     3,   116,     4,
     121,   130,   122,   123,   126,   131,   137,    17,     9,    10,
     136,    18,    16,   141,    15,   134,    57,    58,    59,    60,
      61,    62,   -50,   143,    96,   144,    97,   118,   139,   119,
     133,   145,   140,   138,    17,   120,     0,   142,     0,    89,
     135,     0,     0,   126
};

static const yytype_int16 yycheck[] =
{
       0,    55,    17,    30,    31,    22,    22,     0,    22,    26,
      32,    33,    34,    35,    22,    15,    16,    44,     3,     4,
       5,    43,     7,     8,    22,    10,    11,    12,    45,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    22,    24,
      22,    22,    22,    43,    44,    22,     3,    26,    48,    49,
      23,     4,     5,     3,     7,    23,    28,    42,    29,    26,
      75,    46,   116,    16,    17,    23,     3,    45,     3,     4,
       5,    23,     7,     8,    23,    10,    11,    12,    23,    23,
      80,    16,    17,    18,    19,    20,    21,    22,    26,    24,
      23,    91,    13,    25,    23,     3,     4,     5,    29,     7,
      27,    29,   102,   103,   104,    23,     9,    42,    16,    17,
      27,    46,    24,    27,    22,   115,    36,    37,    38,    39,
      40,    41,    45,    23,    63,    27,    68,    97,   131,    98,
     113,   143,   132,   130,    42,    99,    -1,   137,    -1,    50,
     116,    -1,    -1,   143
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    16,
      17,    18,    19,    20,    21,    22,    24,    42,    46,    48,
      49,    50,    51,    52,    54,    56,    57,    59,    60,    61,
      66,    68,    71,    72,    73,    74,    79,    86,    87,    88,
      22,    26,    70,    22,    22,    75,    22,    22,    22,    22,
      22,    49,    49,     3,    56,    22,     0,    36,    37,    38,
      39,    40,    41,    85,    30,    31,    44,    53,    83,    32,
      33,    34,    35,    43,    55,    84,    49,    80,    81,    82,
      26,    69,    49,    49,    22,     3,    23,    49,    49,    86,
      23,    28,    58,    26,    50,    67,    52,    54,    56,    29,
      23,    49,    45,    23,    23,     3,    76,    77,    78,    62,
      23,    23,    23,    49,    25,    26,    29,    23,    53,    55,
      82,    27,    49,    49,    14,    15,    49,    63,    64,    65,
      29,    23,    13,    58,    49,    67,    27,     9,    78,    57,
      49,    27,    49,    23,    27,    63
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 74 "minir.y"
    {
                    printRule("START", "EXPR");
                    endScope();
                    printf("\n---- Completed parsing ----\n\n");
                    return 0;
                ;}
    break;

  case 3:
#line 82 "minir.y"
    {
                    printRule("EXPR", "IF_EXPR");
                ;}
    break;

  case 4:
#line 86 "minir.y"
    {
                    printRule("EXPR", "WHILE_EXPR");
                ;}
    break;

  case 5:
#line 90 "minir.y"
    {
                    printRule("EXPR", "FOR_EXPR");
                ;}
    break;

  case 6:
#line 94 "minir.y"
    {
                    printRule("EXPR", "COMPOUND_EXPR");
                ;}
    break;

  case 7:
#line 98 "minir.y"
    {
                    printRule("EXPR", "ARITHLOGIC_EXPR");
                ;}
    break;

  case 8:
#line 102 "minir.y"
    {
                    printRule("EXPR", "ASSIGNMENT_EXPR");
                ;}
    break;

  case 9:
#line 106 "minir.y"
    {
                    printRule("EXPR", "OUTPUT_EXPR");
                ;}
    break;

  case 10:
#line 110 "minir.y"
    {
                    printRule("EXPR", "INPUT_EXPR");
                ;}
    break;

  case 11:
#line 114 "minir.y"
    {
                    printRule("EXPR", "LIST_EXPR");
                ;}
    break;

  case 12:
#line 118 "minir.y"
    {
                    printRule("EXPR", "FUNCTION_DEF");
                ;}
    break;

  case 13:
#line 122 "minir.y"
    {
                    printRule("EXPR", "FUNCTION_CALL");
                ;}
    break;

  case 14:
#line 126 "minir.y"
    {
                    printRule("EXPR", "QUIT_EXPR");
                    exit(1);
                ;}
    break;

  case 15:
#line 133 "minir.y"
    {
                    printRule("CONST", "INTCONST");
                ;}
    break;

  case 16:
#line 137 "minir.y"
    {
                    printRule("CONST", "STRCONST");
                ;}
    break;

  case 17:
#line 141 "minir.y"
    {
                    printRule("CONST", "FLOATCONST");
                ;}
    break;

  case 18:
#line 145 "minir.y"
    {
                    printRule("CONST", "TRUE");
                ;}
    break;

  case 19:
#line 149 "minir.y"
    {
                    printRule("CONST", "FALSE");
                ;}
    break;

  case 20:
#line 155 "minir.y"
    {
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC");
                ;}
    break;

  case 21:
#line 161 "minir.y"
    {
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC REL_OP "
                              "SIMPLE_ARITHLOGIC");
                ;}
    break;

  case 22:
#line 169 "minir.y"
    {
                    printRule("SIMPLE_ARITHLOGIC", 
                              "TERM ADD_OP_LIST");
                ;}
    break;

  case 23:
#line 176 "minir.y"
    {
                    printRule("ADD_OP_LIST", 
                              "ADD_OP TERM ADD_OP_LIST");
                ;}
    break;

  case 24:
#line 181 "minir.y"
    {
                    printRule("ADD_OP_LIST", "epsilon");
                ;}
    break;

  case 25:
#line 187 "minir.y"
    {
                    printRule("TERM", 
                              "FACTOR MULT_OP_LIST");
                ;}
    break;

  case 26:
#line 194 "minir.y"
    {
                    printRule("MULT_OP_LIST", 
                              "MULT_OP FACTOR MULT_OP_LIST");
                ;}
    break;

  case 27:
#line 199 "minir.y"
    {
                    printRule("MULT_OP_LIST", "epsilon");
                ;}
    break;

  case 28:
#line 205 "minir.y"
    {
                    printRule("FACTOR", "VAR");
                ;}
    break;

  case 29:
#line 209 "minir.y"
    {
                    printRule("FACTOR", "CONST");
                ;}
    break;

  case 30:
#line 213 "minir.y"
    {
                    printRule("FACTOR", "( EXPR )");
                ;}
    break;

  case 31:
#line 217 "minir.y"
    {
                    printRule("FACTOR", "! FACTOR");
                ;}
    break;

  case 32:
#line 223 "minir.y"
    {
                    printRule("COMPOUND_EXPR",
                              "{ EXPR EXPR_LIST }");
                ;}
    break;

  case 33:
#line 230 "minir.y"
    {
                    printRule("EXPR_LIST", "; EXPR EXPR_LIST");
                ;}
    break;

  case 34:
#line 234 "minir.y"
    {
                    printRule("EXPR_LIST", "epsilon");
                ;}
    break;

  case 35:
#line 240 "minir.y"
    {
                    printRule("IF_EXPR", "IF ( EXPR ) EXPR");
                ;}
    break;

  case 36:
#line 245 "minir.y"
    {
                    printRule("IF_EXPR", "IF ( EXPR ) EXPR ELSE EXPR");
                ;}
    break;

  case 37:
#line 251 "minir.y"
    {
                    printRule("WHILE_EXPR", 
                              "WHILE ( EXPR ) "
                              "LOOP_EXPR");
                ;}
    break;

  case 38:
#line 259 "minir.y"
    {
                    printRule("FOR_EXPR", "FOR ( IDENT IN EXPR ) LOOP_EXPR");
					bool found = findEntryInAnyScope(string((yyvsp[(3) - (3)].text)));
					if (!found)
					{
						scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(string((yyvsp[(3) - (3)].text)), UNDEFINED));
						printf("___Adding %s to symbol table\n", string((yyvsp[(3) - (3)].text)).c_str());
                    }
                ;}
    break;

  case 40:
#line 272 "minir.y"
    {
                    printRule("LOOP_EXPR", "EXPR");
                ;}
    break;

  case 41:
#line 276 "minir.y"
    {
                    printRule("LOOP_EXPR", "BREAK_EXPR");
                ;}
    break;

  case 42:
#line 280 "minir.y"
    {
                    printRule("LOOP_EXPR", "NEXT_EXPR");
                ;}
    break;

  case 43:
#line 286 "minir.y"
    {
                    printRule("BREAK_EXPR", "BREAK");
                ;}
    break;

  case 44:
#line 292 "minir.y"
    {
                    printRule("NEXT_EXPR", "NEXT");
                ;}
    break;

  case 45:
#line 298 "minir.y"
    {
                    printRule("LIST_EXPR", 
                              "LIST ( CONST_LIST )");
                ;}
    break;

  case 46:
#line 305 "minir.y"
    {
                    printRule("CONST_LIST", 
                              "CONST, CONST_LIST");
                ;}
    break;

  case 47:
#line 310 "minir.y"
    {
                    printRule("CONST_LIST", "CONST");
                ;}
    break;

  case 48:
#line 316 "minir.y"
    {  
                    printRule("ASSIGNMENT_EXPR","IDENT INDEX ASSIGN EXPR");
					bool found = findEntryInAnyScope(string((yyvsp[(1) - (2)].text)));
					if (!found)
					{
						scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(string((yyvsp[(1) - (2)].text)), UNDEFINED));
						printf("___Adding %s to symbol table\n", string((yyvsp[(1) - (2)].text)).c_str());
					}
				;}
    break;

  case 50:
#line 328 "minir.y"
    {
                    printRule("INDEX", " [[ EXPR ]]");
			    ;}
    break;

  case 51:
#line 332 "minir.y"
    {
                    printRule("INDEX", " epsilon");
                ;}
    break;

  case 52:
#line 338 "minir.y"
    {
                    printRule("QUIT_EXPR", "QUIT()");
        		   exit(1);
                ;}
    break;

  case 53:
#line 345 "minir.y"
    {
                    printRule("OUTPUT_EXPR", 
                              "PRINT ( EXPR )");
                ;}
    break;

  case 54:
#line 350 "minir.y"
    {
                    printRule("OUTPUT_EXPR", 
                              "CAT ( EXPR )");
                ;}
    break;

  case 55:
#line 357 "minir.y"
    {
                    printRule("INPUT_EXPR", "READ ( VAR )");
                ;}
    break;

  case 56:
#line 362 "minir.y"
    {beginScope();;}
    break;

  case 57:
#line 364 "minir.y"
    {
                    printRule("FUNCTION_DEF",
                              "FUNCTION ( PARAM_LIST )"
                              " COMPOUND_EXPR");
                    endScope();
                
                ;}
    break;

  case 58:
#line 374 "minir.y"
    {
                    printRule("PARAM_LIST", "PARAMS");
                ;}
    break;

  case 59:
#line 378 "minir.y"
    {
                    printRule("PARAM_LIST", "NO PARAMS");
                ;}
    break;

  case 60:
#line 384 "minir.y"
    {
                    printRule("NO_PARAMS", "epsilon");
                ;}
    break;

  case 61:
#line 390 "minir.y"
    {
                    printRule("PARAMS", "IDENT");
                    bool found = findEntryInAnyScope(string((yyvsp[(1) - (1)].text)));
					if (!found)
					{
						scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(string((yyvsp[(1) - (1)].text)), UNDEFINED));
						printf("___Adding %s to symbol table\n", string((yyvsp[(1) - (1)].text)).c_str());
                    }
                    else
                    {
                        yyerror("Multiply defined identifier");
                    }
                ;}
    break;

  case 62:
#line 404 "minir.y"
    {
                    printRule("PARAMS", "IDENT, PARAMS");
                    bool found = findEntryInAnyScope(string((yyvsp[(1) - (3)].text)));
                    bool multiple = scopeStack.top().findEntry(string((yyvsp[(1) - (3)].text)));
					if (!found)
					{
						scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(string((yyvsp[(1) - (3)].text)), UNDEFINED));
						printf("___Adding %s to symbol table\n", string((yyvsp[(1) - (3)].text)).c_str());
                    }
                    if(multiple)
                    {
                        printf("___Adding %s to symbol table\n", string((yyvsp[(1) - (3)].text)).c_str());
                        yyerror("Multiply defined identifier");
                    }
                ;}
    break;

  case 63:
#line 422 "minir.y"
    {
                    printRule("FUNCTION_CALL", "IDENT"
                              " ( ARG_LIST )");
                    bool found = findEntryInAnyScope(string((yyvsp[(1) - (4)].text)));
					if (!found)
					{
                        yyerror("Undefined identifier");
					}
                ;}
    break;

  case 64:
#line 434 "minir.y"
    {
                    printRule("ARG_LIST", "ARGS");
                ;}
    break;

  case 65:
#line 438 "minir.y"
    {
                    printRule("ARG_LIST", "NO_ARGS");
                ;}
    break;

  case 66:
#line 444 "minir.y"
    {
                    printRule("NO_ARGS", "epsilon");
                ;}
    break;

  case 67:
#line 450 "minir.y"
    {
                    printRule("ARGS", "EXPR");
                ;}
    break;

  case 68:
#line 454 "minir.y"
    {
                    printRule("ARGS", "EXPR, ARGS");
                ;}
    break;

  case 69:
#line 460 "minir.y"
    {
                    printRule("ADD_OP", "+");
                ;}
    break;

  case 70:
#line 464 "minir.y"
    {
                    printRule("ADD_OP", "-");
                ;}
    break;

  case 71:
#line 468 "minir.y"
    {
                    printRule("ADD_OP", "|");
                ;}
    break;

  case 72:
#line 474 "minir.y"
    {
                    printRule("MULT_OP", "*");
                ;}
    break;

  case 73:
#line 478 "minir.y"
    {
                    printRule("MULT_OP", "/");
                ;}
    break;

  case 74:
#line 482 "minir.y"
    {
                    printRule("MULT_OP", "&");
                ;}
    break;

  case 75:
#line 486 "minir.y"
    {
                    printRule("MULT_OP", "\%\%");
                ;}
    break;

  case 76:
#line 490 "minir.y"
    {
                    printRule("MULT_OP", "^");
                ;}
    break;

  case 77:
#line 496 "minir.y"
    {
                    printRule("REL_OP", "<");
                ;}
    break;

  case 78:
#line 500 "minir.y"
    {
                    printRule("REL_OP", ">");
                ;}
    break;

  case 79:
#line 504 "minir.y"
    {
                    printRule("REL_OP", "<=");
                ;}
    break;

  case 80:
#line 508 "minir.y"
    {
                    printRule("REL_OP", ">=");
                ;}
    break;

  case 81:
#line 512 "minir.y"
    {
                    printRule("REL_OP", "==");
                ;}
    break;

  case 82:
#line 516 "minir.y"
    {
                    printRule("REL_OP", "!=");
                ;}
    break;

  case 83:
#line 522 "minir.y"
    {
                    printRule("VAR", "ENTIRE_VAR");
                ;}
    break;

  case 84:
#line 526 "minir.y"
    {
                    printRule("VAR", "SINGLE_ELEMENT");
                ;}
    break;

  case 85:
#line 533 "minir.y"
    {
                    printRule("SINGLE_ELEMENT", "IDENT"
                              " [[ EXPR ]]");
                    bool found = findEntryInAnyScope(string((yyvsp[(1) - (6)].text)));
					if (!found)
					{
                        yyerror("Undefined identifier");
					}
                ;}
    break;

  case 86:
#line 545 "minir.y"
    {
                    printRule("ENTIRE_VAR", "IDENT");
                    bool found = findEntryInAnyScope(string((yyvsp[(1) - (1)].text)));
					if (!found)
					{
                        yyerror("Undefined identifier");
					}
                ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2227 "minir.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 555 "minir.y"


#include "lex.yy.c"
extern FILE *yyin;

void printTokenInfo(const char* token_type, const char* lexeme)
{
    printf("TOKEN: %s \t\t LEXEME: %s\n", token_type, lexeme);
}

void printRule(const char *lhs, const char *rhs)
{
    printf("%s -> %s\n", lhs, rhs);
    return;
}

void beginScope()
{
 scopeStack.push(SYMBOL_TABLE( ));
 printf("\n___Entering new scope...\n\n");
}

void endScope()
{
 scopeStack.pop( );
 printf("\n___Exiting scope...\n\n");
}

bool findEntryInAnyScope(const string theName)
{
		if (scopeStack.empty( )) return(false);
		bool found = scopeStack.top( ).findEntry(theName);
		if (found)
			return(true);
		else { // check in "next higher" scope
			SYMBOL_TABLE symbolTable = scopeStack.top( );
			scopeStack.pop( );
			found = findEntryInAnyScope(theName);
			scopeStack.push(symbolTable); // restore the stack
			return(found);
	 }
 }

int main() 
{
    beginScope();
    do 
    {
        yyparse();
    } while (!feof(yyin));
    //endScope();
    return 0;
}

