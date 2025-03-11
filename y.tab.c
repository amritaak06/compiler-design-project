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
     T_INT = 258,
     T_CHAR = 259,
     T_DOUBLE = 260,
     T_WHILE = 261,
     T_INC = 262,
     T_DEC = 263,
     T_OROR = 264,
     T_ANDAND = 265,
     T_EQCOMP = 266,
     T_NOTEQUAL = 267,
     T_GREATEREQ = 268,
     T_LESSEREQ = 269,
     T_LEFTSHIFT = 270,
     T_RIGHTSHIFT = 271,
     T_PRINTLN = 272,
     T_STRING = 273,
     T_FLOAT = 274,
     T_BOOLEAN = 275,
     T_IF = 276,
     T_ELSE = 277,
     T_STRLITERAL = 278,
     T_DO = 279,
     T_INCLUDE = 280,
     T_HEADER = 281,
     T_MAIN = 282,
     T_ID = 283,
     T_NUM = 284,
     T_FOR = 285
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_WHILE 261
#define T_INC 262
#define T_DEC 263
#define T_OROR 264
#define T_ANDAND 265
#define T_EQCOMP 266
#define T_NOTEQUAL 267
#define T_GREATEREQ 268
#define T_LESSEREQ 269
#define T_LEFTSHIFT 270
#define T_RIGHTSHIFT 271
#define T_PRINTLN 272
#define T_STRING 273
#define T_FLOAT 274
#define T_BOOLEAN 275
#define T_IF 276
#define T_ELSE 277
#define T_STRLITERAL 278
#define T_DO 279
#define T_INCLUDE 280
#define T_HEADER 281
#define T_MAIN 282
#define T_ID 283
#define T_NUM 284
#define T_FOR 285




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #define YYSTYPE char*
    #include "sym_tab.c"
    #include "parser.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    int scope=0;
    int type=-1;
    char* vval="~";
    int vtype = -1;  
    int condition_result = 0;  
    double expr1_val = 0.0;    
    double expr2_val = 0.0;
    int skip_execution = 0;
    void yyerror(char* s);
    int yylex();
    extern int yylineno;
    symbol *global_p = NULL; 


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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 188 "y.tab.c"

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    40,    38,    32,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      44,    33,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    16,    17,    20,    24,
      26,    30,    32,    35,    38,    40,    42,    47,    51,    56,
      60,    62,    64,    66,    68,    70,    71,    76,    83,    87,
      89,    93,    97,    99,   103,   107,   109,   113,   115,   117,
     119,   121,   124,   127,   130,   133,   135,   137,   139,   141,
     143,   145,   146,   156,   158,   159,   162,   165,   168,   169,
     172,   175,   177,   178,   179,   190,   191,   197,   198,   200,
     202,   204,   205,   212,   220,   221,   232,   234,   236,   237,
     239,   241,   242,   243,   248,   250
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    65,    48,    -1,    49,    31,
      48,    -1,    57,    31,    48,    -1,    -1,    56,    50,    -1,
      50,    32,    51,    -1,    51,    -1,    28,    33,    59,    -1,
      28,    -1,    28,    52,    -1,    53,    54,    -1,    53,    -1,
      54,    -1,    34,    29,    35,    53,    -1,    34,    29,    35,
      -1,    33,    36,    55,    37,    -1,    55,    32,    59,    -1,
      59,    -1,     3,    -1,    19,    -1,     5,    -1,     4,    -1,
      -1,    28,    58,    33,    59,    -1,    28,    34,    59,    35,
      33,    59,    -1,    59,    64,    60,    -1,    60,    -1,    60,
      38,    61,    -1,    60,    39,    61,    -1,    61,    -1,    61,
      40,    62,    -1,    61,    41,    62,    -1,    62,    -1,    42,
      59,    43,    -1,    28,    -1,    29,    -1,    23,    -1,    63,
      -1,     7,    28,    -1,     8,    28,    -1,    28,     7,    -1,
      28,     8,    -1,    14,    -1,    13,    -1,    44,    -1,    45,
      -1,    11,    -1,    12,    -1,    -1,    56,    27,    42,    67,
      43,    36,    66,    68,    37,    -1,    50,    -1,    -1,    69,
      68,    -1,    83,    68,    -1,    75,    68,    -1,    -1,    49,
      31,    -1,    57,    31,    -1,    70,    -1,    -1,    -1,    21,
      42,    85,    43,    71,    36,    68,    37,    72,    73,    -1,
      -1,    22,    74,    36,    68,    37,    -1,    -1,    76,    -1,
      78,    -1,    79,    -1,    -1,     6,    42,    85,    43,    77,
      83,    -1,    24,    83,     6,    42,    85,    43,    31,    -1,
      -1,    30,    42,    81,    31,    85,    31,    82,    43,    80,
      83,    -1,    49,    -1,    57,    -1,    -1,    63,    -1,    57,
      -1,    -1,    -1,    36,    84,    68,    37,    -1,    59,    -1,
      57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    33,    34,    35,    36,    39,    42,    43,
      46,    58,    65,    82,    83,    84,    87,    88,    95,    98,
      99,   102,   103,   104,   105,   108,   108,   129,   149,   172,
     178,   190,   202,   205,   217,   229,   232,   233,   250,   263,
     271,   274,   296,   318,   340,   364,   365,   366,   367,   368,
     369,   372,   372,   375,   376,   379,   380,   381,   382,   385,
     386,   387,   390,   394,   390,   399,   399,   406,   409,   410,
     411,   414,   414,   423,   426,   426,   435,   436,   437,   440,
     441,   442,   445,   445,   448,   449
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_CHAR", "T_DOUBLE", "T_WHILE",
  "T_INC", "T_DEC", "T_OROR", "T_ANDAND", "T_EQCOMP", "T_NOTEQUAL",
  "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT", "T_RIGHTSHIFT", "T_PRINTLN",
  "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF", "T_ELSE", "T_STRLITERAL",
  "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN", "T_ID", "T_NUM", "T_FOR",
  "';'", "','", "'='", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "'<'", "'>'", "$accept", "START", "PROG", "DECLR",
  "LISTVAR", "VAR", "ARRAY_DECL", "ARRAY_DIM", "ARRAY_INIT", "ARRAY_LIST",
  "TYPE", "ASSGN", "@1", "EXPR", "E", "T", "F", "INCREMENT", "REL_OP",
  "MAIN", "@2", "EMPTY_LISTVAR", "STMT", "STMT_NO_BLOCK", "IF_STMT", "@3",
  "@4", "ELSE_PART", "@5", "LOOP_STMT", "WHILE_LOOP", "@6",
  "DO_WHILE_LOOP", "FOR_LOOP", "@7", "FOR_INIT", "FOR_UPDATE", "BLOCK",
  "@8", "COND", 0
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
     285,    59,    44,    61,    91,    93,   123,   125,    43,    45,
      42,    47,    40,    41,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    48,    49,    50,    50,
      51,    51,    51,    52,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    56,    56,    58,    57,    57,    59,    59,
      60,    60,    60,    61,    61,    61,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    66,    65,    67,    67,    68,    68,    68,    68,    69,
      69,    69,    71,    72,    70,    74,    73,    73,    75,    75,
      75,    77,    76,    78,    80,    79,    81,    81,    81,    82,
      82,    82,    84,    83,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     0,     2,     3,     1,
       3,     1,     2,     2,     1,     1,     4,     3,     4,     3,
       1,     1,     1,     1,     1,     0,     4,     6,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     0,     9,     1,     0,     2,     2,     2,     0,     2,
       2,     1,     0,     0,    10,     0,     5,     0,     1,     1,
       1,     0,     6,     7,     0,    10,     1,     1,     0,     1,
       1,     0,     0,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,    21,    24,    23,    22,    25,     0,     2,     0,     0,
       0,     6,     0,     0,     1,     6,     0,    11,     7,     9,
       6,     3,     0,     0,    39,    37,    38,     0,     0,    29,
      32,    35,    40,     0,     4,    54,     0,     0,    12,    14,
      15,     0,     5,    41,    42,    43,    44,     0,    49,    50,
      46,    45,     0,    47,    48,     0,     0,     0,     0,     0,
      26,    53,     0,     0,    10,     0,     0,    13,     8,    36,
       0,    28,    30,    31,    33,    34,     0,     0,    20,    17,
      27,    51,     0,    18,    16,    58,    19,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    58,    61,    58,    68,
      69,    70,    58,     0,     0,     0,    78,    58,    59,    60,
      52,    55,    57,    56,    37,    85,    84,     0,     0,     0,
      76,    77,     0,     0,    71,    62,     0,     0,    83,     0,
       0,     0,     0,    72,    58,     0,    81,     0,    73,    25,
      80,    79,     0,    63,    74,    67,     0,    65,    64,    75,
       0,    58,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    92,    18,    19,    38,    39,    40,    77,
      93,    94,    13,   116,    29,    30,    31,    32,    55,    11,
      85,    62,    95,    96,    97,   130,   145,   148,   150,    98,
      99,   129,   100,   101,   146,   122,   142,   102,   107,   117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const yytype_int16 yypact[] =
{
       3,   -94,   -94,   -94,   -94,   -24,    13,   -94,    -1,    46,
      19,     3,    17,    32,   -94,     3,    29,    53,    76,   -94,
       3,   -94,     4,    92,   -94,    83,   -94,    17,    22,    55,
      58,   -94,   -94,    17,   -94,    93,    20,    94,   -94,    89,
     -94,    93,   -94,   -94,   -94,   -94,   -94,    66,   -94,   -94,
     -94,   -94,    91,   -94,   -94,    17,    17,    17,    17,    17,
      70,    76,    82,    17,    70,    95,    97,   -94,   -94,   -94,
      17,    55,    58,    58,   -94,   -94,    99,    10,    70,   104,
      70,   -94,    17,   -94,   -94,   113,    70,    86,    87,   103,
      98,   -94,   100,    93,   111,   107,   113,   -94,   113,   -94,
     -94,   -94,   113,    47,    47,   139,     3,   113,   -94,   -94,
     -94,   -94,   -94,   -94,    30,   -94,    70,   105,   108,   110,
     -94,   -94,   115,   116,   -94,   -94,    47,    47,   -94,   103,
     114,   112,   123,   -94,   113,   125,    11,   120,   -94,    61,
     -94,   -94,   117,   -94,   -94,   136,   103,   -94,   -94,   -94,
     126,   113,   122,   -94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,    77,     1,   128,   106,   -94,    88,   127,   -94,
      85,     0,   -94,   -10,   109,    45,    54,    25,   -94,   -94,
     -94,   -94,   -93,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -85,   -94,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
static const yytype_int16 yytable[] =
{
      10,     8,    28,   111,   105,   112,     1,     2,     3,   113,
      12,    10,     8,    14,   123,    10,     8,    47,    22,    23,
      10,     8,     4,    60,    22,    23,    64,    22,    23,   118,
      15,     5,    43,    48,    49,    50,    51,    45,    46,   139,
      24,   137,    82,    24,   133,    25,    26,    83,    25,    26,
      20,   131,   132,    78,    22,    23,    63,    52,   152,    27,
      80,   149,    27,   -25,    12,    33,    53,    54,    45,    46,
      24,    35,    86,    16,    17,   114,    26,    48,    49,    50,
      51,    48,    49,    50,    51,     9,    36,    37,    21,    27,
      45,    46,    34,    56,    57,    12,     9,    42,    58,    59,
       9,    72,    73,   115,   115,     9,   121,   120,    41,    69,
      53,    54,    74,    75,    53,    54,     1,     2,     3,    87,
      44,    17,    66,    65,    70,    76,   115,   115,   103,   104,
      79,   108,     4,    63,    88,    81,   140,    89,    37,    91,
     106,     5,   109,    90,   110,   119,   127,    68,   124,    91,
     134,   125,   126,   128,   136,   135,   138,   143,   147,   153,
     144,   141,   151,    61,    71,     0,    67,    84
};

static const yytype_int16 yycheck[] =
{
       0,     0,    12,    96,    89,    98,     3,     4,     5,   102,
      34,    11,    11,     0,   107,    15,    15,    27,     7,     8,
      20,    20,    19,    33,     7,     8,    36,     7,     8,   104,
      31,    28,    28,    11,    12,    13,    14,     7,     8,    28,
      23,   134,    32,    23,   129,    28,    29,    37,    28,    29,
      31,   126,   127,    63,     7,     8,    36,    35,   151,    42,
      70,   146,    42,    33,    34,    33,    44,    45,     7,     8,
      23,    42,    82,    27,    28,    28,    29,    11,    12,    13,
      14,    11,    12,    13,    14,     0,    33,    34,    11,    42,
       7,     8,    15,    38,    39,    34,    11,    20,    40,    41,
      15,    56,    57,   103,   104,    20,   106,   106,    32,    43,
      44,    45,    58,    59,    44,    45,     3,     4,     5,     6,
      28,    28,    33,    29,    33,    43,   126,   127,    42,    42,
      35,    31,    19,    36,    21,    36,   136,    24,    34,    36,
      42,    28,    31,    30,    37,     6,    31,    41,    43,    36,
      36,    43,    42,    37,    31,    43,    31,    37,    22,    37,
      43,   136,    36,    35,    55,    -1,    39,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    19,    28,    47,    48,    49,    56,
      57,    65,    34,    58,     0,    31,    27,    28,    50,    51,
      31,    48,     7,     8,    23,    28,    29,    42,    59,    60,
      61,    62,    63,    33,    48,    42,    33,    34,    52,    53,
      54,    32,    48,    28,    28,     7,     8,    59,    11,    12,
      13,    14,    35,    44,    45,    64,    38,    39,    40,    41,
      59,    50,    67,    36,    59,    29,    33,    54,    51,    43,
      33,    60,    61,    61,    62,    62,    43,    55,    59,    35,
      59,    36,    32,    37,    53,    66,    59,     6,    21,    24,
      30,    36,    49,    56,    57,    68,    69,    70,    75,    76,
      78,    79,    83,    42,    42,    83,    42,    84,    31,    31,
      37,    68,    68,    68,    28,    57,    59,    85,    85,     6,
      49,    57,    81,    68,    43,    43,    42,    31,    37,    77,
      71,    85,    85,    83,    36,    43,    31,    68,    31,    28,
      57,    63,    82,    37,    43,    72,    80,    22,    73,    83,
      74,    36,    68,    37
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
#line 30 "parser.y"
    { printf("Valid syntax\n"); YYACCEPT; }
    break;

  case 10:
#line 46 "parser.y"
    {
        if(!skip_execution) {
            if(check_symbol_table((yyvsp[(1) - (3)]),scope))  
                yyerror((yyvsp[(1) - (3)]));
            else {
                insert_into_table((yyvsp[(1) - (3)]),type,yylineno,scope);
                insert_value_to_name((yyvsp[(1) - (3)]),vval,scope);
                type=-1;
                vval="~";
            }
        }
    }
    break;

  case 11:
#line 58 "parser.y"
    {
        if(!skip_execution) {
            if(check_symbol_table((yyvsp[(1) - (1)]),scope))
                yyerror((yyvsp[(1) - (1)]));
            insert_into_table((yyvsp[(1) - (1)]),type,yylineno,scope);
        }
    }
    break;

  case 12:
#line 65 "parser.y"
    {
        if(!skip_execution) {
            if(check_symbol_table((yyvsp[(1) - (2)]),scope))  
                yyerror((yyvsp[(1) - (2)]));
            else {
                insert_into_table((yyvsp[(1) - (2)]), type, yylineno, scope);
                symbol *s = get_symbol((yyvsp[(1) - (2)]), scope);
                if (strcmp(vval, "~") != 0) {
                    insert_value_to_name((yyvsp[(1) - (2)]), vval, scope);
                }
                type = -1;
                vval = "~";
            }
        }
    }
    break;

  case 17:
#line 88 "parser.y"
    { 
              char str[32];
              sprintf(str, "%d", atoi((yyvsp[(2) - (3)])));
              (yyval) = strdup(str);
            }
    break;

  case 21:
#line 102 "parser.y"
    {type=INT;}
    break;

  case 22:
#line 103 "parser.y"
    {type=FLOAT;}
    break;

  case 23:
#line 104 "parser.y"
    {type=DOUBLE;}
    break;

  case 24:
#line 105 "parser.y"
    {type=CHAR;}
    break;

  case 25:
#line 108 "parser.y"
    { 
            if(!skip_execution) {  
                global_p = get_symbol((yyvsp[(1) - (1)]), scope);
                type = global_p == NULL ? -1 : global_p->type;
            }
        }
    break;

  case 26:
#line 113 "parser.y"
    {
            if(!skip_execution) {  
                if(global_p == NULL) 
                    yyerror((yyvsp[(1) - (4)]));
                else if(vtype != type && !(vtype == DOUBLE && type == FLOAT) && !(vtype == FLOAT && type == DOUBLE)) {
                    fprintf(stderr, "Type mismatch: Cannot assign type %d to type %d\n", vtype, type);
                    yyerror((yyvsp[(1) - (4)]));
                }
                else {
                    insert_value_to_symbol(global_p, vval);
                }
                vval = "~";
                type = -1;
                global_p = NULL;
            }
        }
    break;

  case 27:
#line 129 "parser.y"
    {
            if(!skip_execution) {
                symbol *s = get_symbol((yyvsp[(1) - (6)]), scope);
                if(s == NULL) {
                    fprintf(stderr, "%s is not declared\n", (yyvsp[(1) - (6)]));
                    yyerror((yyvsp[(1) - (6)]));
                }
                else {
                    // Handle array assignment
                    char index_str[32];
                    sprintf(index_str, "[%s]", (yyvsp[(3) - (6)]));
                    char *new_val = malloc(strlen(s->val) + strlen(index_str) + strlen((yyvsp[(6) - (6)])) + 1);
                    sprintf(new_val, "%s%s=%s", s->val, index_str, (yyvsp[(6) - (6)]));
                    insert_value_to_symbol(s, new_val);
                    free(new_val);
                }
            }
        }
    break;

  case 28:
#line 149 "parser.y"
    {
        expr2_val = atof((yyvsp[(3) - (3)]));
        switch((yyvsp[(2) - (3)])[0]) {
            case '<':
                if (strlen((yyvsp[(2) - (3)])) == 2)
                    condition_result = (expr1_val <= expr2_val);
                else
                    condition_result = (expr1_val < expr2_val);
                break;
            case '>':
                if (strlen((yyvsp[(2) - (3)])) == 2)
                    condition_result = (expr1_val >= expr2_val);
                else
                    condition_result = (expr1_val > expr2_val);
                break;
            case '=':
                condition_result = (expr1_val == expr2_val);
                break;
            case '!':
                condition_result = (expr1_val != expr2_val);
                break;
        }
    }
    break;

  case 29:
#line 172 "parser.y"
    {
        vval = (yyvsp[(1) - (1)]);
        expr1_val = atof((yyvsp[(1) - (1)]));
    }
    break;

  case 30:
#line 178 "parser.y"
    { 
         if ( vtype == INT ) {
                sprintf( (yyval), "%d", ( atoi( (yyvsp[(1) - (3)]) ) + atoi( (yyvsp[(3) - (3)]) ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( (yyval), "%lf", ( atof( (yyvsp[(1) - (3)]) ) + atof( (yyvsp[(3) - (3)]) ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         (yyvsp[(2) - (3)]), vtype );
                yyerror( (yyval) );
                (yyval) = "~";
            }
        }
    break;

  case 31:
#line 190 "parser.y"
    {  
            if ( vtype == INT ) {
                sprintf( (yyval), "%d", ( atoi( (yyvsp[(1) - (3)]) ) - atoi( (yyvsp[(3) - (3)]) ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( (yyval), "%lf", ( atof( (yyvsp[(1) - (3)]) ) - atof( (yyvsp[(3) - (3)]) ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         (yyvsp[(2) - (3)]), vtype );
                yyerror( (yyval) );
                (yyval) = "~";
            }
        }
    break;

  case 32:
#line 202 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 33:
#line 205 "parser.y"
    { 
                 if ( vtype == INT ) {
                    sprintf( (yyval), "%d", ( atoi( (yyvsp[(1) - (3)]) ) * atoi( (yyvsp[(3) - (3)]) ) ) );
                } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                    sprintf( (yyval), "%lf", ( atof( (yyvsp[(1) - (3)]) ) * atof( (yyvsp[(3) - (3)]) ) ) );
                } else {
                    fprintf( stderr, "Operation %s not supported for type %d",
                             (yyvsp[(2) - (3)]), vtype );
                    yyerror( (yyval) );
                    (yyval) = "~";
                }
            }
    break;

  case 34:
#line 217 "parser.y"
    {  
                if ( vtype == INT ) {
                    sprintf( (yyval), "%d", ( atoi( (yyvsp[(1) - (3)]) ) / atoi( (yyvsp[(3) - (3)]) ) ) );
                } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                    sprintf( (yyval), "%lf", ( atof( (yyvsp[(1) - (3)]) ) / atof( (yyvsp[(3) - (3)]) ) ) );
                } else {
                    fprintf( stderr, "Operation %s not supported for type %d",
                             (yyvsp[(2) - (3)]), vtype );
                    yyerror( (yyval) );
                    (yyval) = "~";
                }
            }
    break;

  case 35:
#line 229 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 37:
#line 233 "parser.y"
    {
            symbol *s=get_symbol((yyvsp[(1) - (1)]),scope);
            if(s==NULL) {
                fprintf(stderr,"%s is not declared\n",(yyvsp[(1) - (1)]));
                yyerror((yyvsp[(1) - (1)]));
            }
            if(!strcmp(s->val,"~")) {
                fprintf(stderr,"%s is not initialized\n",(yyvsp[(1) - (1)]));
                yyerror((yyvsp[(1) - (1)]));
            }
            (yyval)=strdup(s->val);
            vtype=s->type;
            if(vtype!=type&&type!=-1) {
                fprintf(stderr,"Cannot assign type %d to type %d\n",vtype,type);
                yyerror((yyvsp[(1) - (1)]));
            }
         }
    break;

  case 38:
#line 250 "parser.y"
    {
        if(!skip_execution) {
            (yyval)=strdup((yyvsp[(1) - (1)]));
            vtype=get_type((yyvsp[(1) - (1)]));
            if(vtype!=type && type!=-1 && !(vtype==DOUBLE && type==FLOAT) && !(vtype==FLOAT && type==DOUBLE)) {
                fprintf(stderr,"Cannot assign type %d to type %d\n", vtype, type );
                yyerror( (yyvsp[(1) - (1)]) );
            }
	   if(type == -1) {
                condition_result = (atof((yyvsp[(1) - (1)])) != 0);
            }
        }
    }
    break;

  case 39:
#line 263 "parser.y"
    {
                    (yyval)=strdup((yyvsp[(1) - (1)]));
                    vtype=1;
                    if(vtype!=type) {
                        fprintf(stderr,"Cannot assign char * to type %d\n",type);
                        yyerror( (yyvsp[(1) - (1)]) );
                    }
                 }
    break;

  case 41:
#line 274 "parser.y"
    {
                symbol *s=get_symbol((yyvsp[(2) - (2)]),scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",(yyvsp[(2) - (2)]));
                    yyerror((yyvsp[(2) - (2)]));
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",(yyvsp[(2) - (2)]));
                    yyerror((yyvsp[(2) - (2)]));
                }
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) + 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) + 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                (yyval)=strdup(new_value);
                vtype=s->type;
            }
    break;

  case 42:
#line 296 "parser.y"
    {
                symbol *s=get_symbol((yyvsp[(2) - (2)]),scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",(yyvsp[(2) - (2)]));
                    yyerror((yyvsp[(2) - (2)]));
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",(yyvsp[(2) - (2)]));
                    yyerror((yyvsp[(2) - (2)]));
                }
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) - 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) - 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                (yyval)=strdup(new_value);
                vtype=s->type;
            }
    break;

  case 43:
#line 318 "parser.y"
    {
                symbol *s=get_symbol((yyvsp[(1) - (2)]),scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",(yyvsp[(1) - (2)]));
                    yyerror((yyvsp[(1) - (2)]));
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",(yyvsp[(1) - (2)]));
                    yyerror((yyvsp[(1) - (2)]));
                }
                (yyval)=strdup(s->val);
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) + 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) + 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                vtype=s->type;
            }
    break;

  case 44:
#line 340 "parser.y"
    {
                symbol *s=get_symbol((yyvsp[(1) - (2)]),scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",(yyvsp[(1) - (2)]));
                    yyerror((yyvsp[(1) - (2)]));
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",(yyvsp[(1) - (2)]));
                    yyerror((yyvsp[(1) - (2)]));
                }
                (yyval)=strdup(s->val);
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) - 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) - 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                vtype=s->type;
            }
    break;

  case 51:
#line 372 "parser.y"
    {scope++;}
    break;

  case 52:
#line 372 "parser.y"
    {scope--;}
    break;

  case 62:
#line 390 "parser.y"
    {
            if(!condition_result) {
                skip_execution = 1;
            }
        }
    break;

  case 63:
#line 394 "parser.y"
    {
            skip_execution = 0;
        }
    break;

  case 65:
#line 399 "parser.y"
    {
            if(condition_result) {
                skip_execution = 1;
            }
        }
    break;

  case 66:
#line 403 "parser.y"
    {
            skip_execution = 0;
        }
    break;

  case 71:
#line 414 "parser.y"
    {
               if(!condition_result) {
                   skip_execution = 1;
               }
           }
    break;

  case 72:
#line 418 "parser.y"
    {
               skip_execution = 0;
           }
    break;

  case 74:
#line 426 "parser.y"
    {
             if(!condition_result) {
                 skip_execution = 1;
             }
         }
    break;

  case 75:
#line 430 "parser.y"
    {
             skip_execution = 0;
         }
    break;

  case 82:
#line 445 "parser.y"
    {scope++;}
    break;

  case 83:
#line 445 "parser.y"
    {scope--;}
    break;


/* Line 1267 of yacc.c.  */
#line 2004 "y.tab.c"
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


#line 452 "parser.y"


void yyerror(char* s)
{
    printf("Error :%s at %d \n",s,yylineno);
}

int main(int argc,char* argv[])
{
    t=allocate_space_for_table();
    yyparse();
    display_symbol_table();
    return 0;
}
