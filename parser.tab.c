/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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

#line 93 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_CHAR = 4,                     /* T_CHAR  */
  YYSYMBOL_T_DOUBLE = 5,                   /* T_DOUBLE  */
  YYSYMBOL_T_WHILE = 6,                    /* T_WHILE  */
  YYSYMBOL_T_INC = 7,                      /* T_INC  */
  YYSYMBOL_T_DEC = 8,                      /* T_DEC  */
  YYSYMBOL_T_OROR = 9,                     /* T_OROR  */
  YYSYMBOL_T_ANDAND = 10,                  /* T_ANDAND  */
  YYSYMBOL_T_EQCOMP = 11,                  /* T_EQCOMP  */
  YYSYMBOL_T_NOTEQUAL = 12,                /* T_NOTEQUAL  */
  YYSYMBOL_T_GREATEREQ = 13,               /* T_GREATEREQ  */
  YYSYMBOL_T_LESSEREQ = 14,                /* T_LESSEREQ  */
  YYSYMBOL_T_LEFTSHIFT = 15,               /* T_LEFTSHIFT  */
  YYSYMBOL_T_RIGHTSHIFT = 16,              /* T_RIGHTSHIFT  */
  YYSYMBOL_T_PRINTLN = 17,                 /* T_PRINTLN  */
  YYSYMBOL_T_STRING = 18,                  /* T_STRING  */
  YYSYMBOL_T_FLOAT = 19,                   /* T_FLOAT  */
  YYSYMBOL_T_BOOLEAN = 20,                 /* T_BOOLEAN  */
  YYSYMBOL_T_IF = 21,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 22,                    /* T_ELSE  */
  YYSYMBOL_T_STRLITERAL = 23,              /* T_STRLITERAL  */
  YYSYMBOL_T_DO = 24,                      /* T_DO  */
  YYSYMBOL_T_INCLUDE = 25,                 /* T_INCLUDE  */
  YYSYMBOL_T_HEADER = 26,                  /* T_HEADER  */
  YYSYMBOL_T_MAIN = 27,                    /* T_MAIN  */
  YYSYMBOL_T_ID = 28,                      /* T_ID  */
  YYSYMBOL_T_NUM = 29,                     /* T_NUM  */
  YYSYMBOL_T_FOR = 30,                     /* T_FOR  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '='  */
  YYSYMBOL_34_ = 34,                       /* '['  */
  YYSYMBOL_35_ = 35,                       /* ']'  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* '+'  */
  YYSYMBOL_39_ = 39,                       /* '-'  */
  YYSYMBOL_40_ = 40,                       /* '*'  */
  YYSYMBOL_41_ = 41,                       /* '/'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '<'  */
  YYSYMBOL_45_ = 45,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_START = 47,                     /* START  */
  YYSYMBOL_PROG = 48,                      /* PROG  */
  YYSYMBOL_DECLR = 49,                     /* DECLR  */
  YYSYMBOL_LISTVAR = 50,                   /* LISTVAR  */
  YYSYMBOL_VAR = 51,                       /* VAR  */
  YYSYMBOL_ARRAY_DECL = 52,                /* ARRAY_DECL  */
  YYSYMBOL_ARRAY_DIM = 53,                 /* ARRAY_DIM  */
  YYSYMBOL_ARRAY_INIT = 54,                /* ARRAY_INIT  */
  YYSYMBOL_ARRAY_LIST = 55,                /* ARRAY_LIST  */
  YYSYMBOL_TYPE = 56,                      /* TYPE  */
  YYSYMBOL_ASSGN = 57,                     /* ASSGN  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_EXPR = 59,                      /* EXPR  */
  YYSYMBOL_E = 60,                         /* E  */
  YYSYMBOL_T = 61,                         /* T  */
  YYSYMBOL_F = 62,                         /* F  */
  YYSYMBOL_INCREMENT = 63,                 /* INCREMENT  */
  YYSYMBOL_REL_OP = 64,                    /* REL_OP  */
  YYSYMBOL_MAIN = 65,                      /* MAIN  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_EMPTY_LISTVAR = 67,             /* EMPTY_LISTVAR  */
  YYSYMBOL_STMT = 68,                      /* STMT  */
  YYSYMBOL_STMT_NO_BLOCK = 69,             /* STMT_NO_BLOCK  */
  YYSYMBOL_IF_STMT = 70,                   /* IF_STMT  */
  YYSYMBOL_71_3 = 71,                      /* $@3  */
  YYSYMBOL_72_4 = 72,                      /* $@4  */
  YYSYMBOL_ELSE_PART = 73,                 /* ELSE_PART  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_LOOP_STMT = 75,                 /* LOOP_STMT  */
  YYSYMBOL_WHILE_LOOP = 76,                /* WHILE_LOOP  */
  YYSYMBOL_77_6 = 77,                      /* $@6  */
  YYSYMBOL_DO_WHILE_LOOP = 78,             /* DO_WHILE_LOOP  */
  YYSYMBOL_FOR_LOOP = 79,                  /* FOR_LOOP  */
  YYSYMBOL_80_7 = 80,                      /* $@7  */
  YYSYMBOL_FOR_INIT = 81,                  /* FOR_INIT  */
  YYSYMBOL_FOR_UPDATE = 82,                /* FOR_UPDATE  */
  YYSYMBOL_BLOCK = 83,                     /* BLOCK  */
  YYSYMBOL_84_8 = 84,                      /* $@8  */
  YYSYMBOL_COND = 85                       /* COND  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_CHAR",
  "T_DOUBLE", "T_WHILE", "T_INC", "T_DEC", "T_OROR", "T_ANDAND",
  "T_EQCOMP", "T_NOTEQUAL", "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT",
  "T_RIGHTSHIFT", "T_PRINTLN", "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF",
  "T_ELSE", "T_STRLITERAL", "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN",
  "T_ID", "T_NUM", "T_FOR", "';'", "','", "'='", "'['", "']'", "'{'",
  "'}'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'<'", "'>'", "$accept",
  "START", "PROG", "DECLR", "LISTVAR", "VAR", "ARRAY_DECL", "ARRAY_DIM",
  "ARRAY_INIT", "ARRAY_LIST", "TYPE", "ASSGN", "$@1", "EXPR", "E", "T",
  "F", "INCREMENT", "REL_OP", "MAIN", "$@2", "EMPTY_LISTVAR", "STMT",
  "STMT_NO_BLOCK", "IF_STMT", "$@3", "$@4", "ELSE_PART", "$@5",
  "LOOP_STMT", "WHILE_LOOP", "$@6", "DO_WHILE_LOOP", "FOR_LOOP", "$@7",
  "FOR_INIT", "FOR_UPDATE", "BLOCK", "$@8", "COND", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-94)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,    77,     1,   128,   106,   -94,    88,   127,   -94,
      85,     0,   -94,   -10,   109,    45,    54,    25,   -94,   -94,
     -94,   -94,   -93,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -85,   -94,   -75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    92,    18,    19,    38,    39,    40,    77,
      93,    94,    13,   116,    29,    30,    31,    32,    55,    11,
      85,    62,    95,    96,    97,   130,   145,   148,   150,    98,
      99,   129,   100,   101,   146,   122,   142,   102,   107,   117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* START: PROG  */
#line 30 "parser.y"
             { printf("Valid syntax\n"); YYACCEPT; }
#line 1272 "parser.tab.c"
    break;

  case 10: /* VAR: T_ID '=' EXPR  */
#line 46 "parser.y"
                    {
        if(!skip_execution) {
            if(check_symbol_table(yyvsp[-2],scope))  
                yyerror(yyvsp[-2]);
            else {
                insert_into_table(yyvsp[-2],type,yylineno,scope);
                insert_value_to_name(yyvsp[-2],vval,scope);
                type=-1;
                vval="~";
            }
        }
    }
#line 1289 "parser.tab.c"
    break;

  case 11: /* VAR: T_ID  */
#line 58 "parser.y"
           {
        if(!skip_execution) {
            if(check_symbol_table(yyvsp[0],scope))
                yyerror(yyvsp[0]);
            insert_into_table(yyvsp[0],type,yylineno,scope);
        }
    }
#line 1301 "parser.tab.c"
    break;

  case 12: /* VAR: T_ID ARRAY_DECL  */
#line 65 "parser.y"
                      {
        if(!skip_execution) {
            if(check_symbol_table(yyvsp[-1],scope))  
                yyerror(yyvsp[-1]);
            else {
                insert_into_table(yyvsp[-1], type, yylineno, scope);
                symbol *s = get_symbol(yyvsp[-1], scope);
                if (strcmp(vval, "~") != 0) {
                    insert_value_to_name(yyvsp[-1], vval, scope);
                }
                type = -1;
                vval = "~";
            }
        }
    }
#line 1321 "parser.tab.c"
    break;

  case 17: /* ARRAY_DIM: '[' T_NUM ']'  */
#line 88 "parser.y"
                          { 
              char str[32];
              sprintf(str, "%d", atoi(yyvsp[-1]));
              yyval = strdup(str);
            }
#line 1331 "parser.tab.c"
    break;

  case 21: /* TYPE: T_INT  */
#line 102 "parser.y"
             {type=INT;}
#line 1337 "parser.tab.c"
    break;

  case 22: /* TYPE: T_FLOAT  */
#line 103 "parser.y"
               {type=FLOAT;}
#line 1343 "parser.tab.c"
    break;

  case 23: /* TYPE: T_DOUBLE  */
#line 104 "parser.y"
                {type=DOUBLE;}
#line 1349 "parser.tab.c"
    break;

  case 24: /* TYPE: T_CHAR  */
#line 105 "parser.y"
              {type=CHAR;}
#line 1355 "parser.tab.c"
    break;

  case 25: /* $@1: %empty  */
#line 108 "parser.y"
             { 
            if(!skip_execution) {  
                global_p = get_symbol(yyvsp[0], scope);
                type = global_p == NULL ? -1 : global_p->type;
            }
        }
#line 1366 "parser.tab.c"
    break;

  case 26: /* ASSGN: T_ID $@1 '=' EXPR  */
#line 113 "parser.y"
                   {
            if(!skip_execution) {  
                if(global_p == NULL) 
                    yyerror(yyvsp[-3]);
                else if(vtype != type && !(vtype == DOUBLE && type == FLOAT) && !(vtype == FLOAT && type == DOUBLE)) {
                    fprintf(stderr, "Type mismatch: Cannot assign type %d to type %d\n", vtype, type);
                    yyerror(yyvsp[-3]);
                }
                else {
                    insert_value_to_symbol(global_p, vval);
                }
                vval = "~";
                type = -1;
                global_p = NULL;
            }
        }
#line 1387 "parser.tab.c"
    break;

  case 27: /* ASSGN: T_ID '[' EXPR ']' '=' EXPR  */
#line 129 "parser.y"
                                 {
            if(!skip_execution) {
                symbol *s = get_symbol(yyvsp[-5], scope);
                if(s == NULL) {
                    fprintf(stderr, "%s is not declared\n", yyvsp[-5]);
                    yyerror(yyvsp[-5]);
                }
                else {
                    // Handle array assignment
                    char index_str[32];
                    sprintf(index_str, "[%s]", yyvsp[-3]);
                    char *new_val = malloc(strlen(s->val) + strlen(index_str) + strlen(yyvsp[0]) + 1);
                    sprintf(new_val, "%s%s=%s", s->val, index_str, yyvsp[0]);
                    insert_value_to_symbol(s, new_val);
                    free(new_val);
                }
            }
        }
#line 1410 "parser.tab.c"
    break;

  case 28: /* EXPR: EXPR REL_OP E  */
#line 149 "parser.y"
                     {
        expr2_val = atof(yyvsp[0]);
        switch(yyvsp[-1][0]) {
            case '<':
                if (strlen(yyvsp[-1]) == 2)
                    condition_result = (expr1_val <= expr2_val);
                else
                    condition_result = (expr1_val < expr2_val);
                break;
            case '>':
                if (strlen(yyvsp[-1]) == 2)
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
#line 1438 "parser.tab.c"
    break;

  case 29: /* EXPR: E  */
#line 172 "parser.y"
        {
        vval = yyvsp[0];
        expr1_val = atof(yyvsp[0]);
    }
#line 1447 "parser.tab.c"
    break;

  case 30: /* E: E '+' T  */
#line 178 "parser.y"
            { 
         if ( vtype == INT ) {
                sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) + atoi( yyvsp[0] ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) + atof( yyvsp[0] ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         yyvsp[-1], vtype );
                yyerror( yyval );
                yyval = "~";
            }
        }
#line 1464 "parser.tab.c"
    break;

  case 31: /* E: E '-' T  */
#line 190 "parser.y"
            {  
            if ( vtype == INT ) {
                sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) - atoi( yyvsp[0] ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) - atof( yyvsp[0] ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         yyvsp[-1], vtype );
                yyerror( yyval );
                yyval = "~";
            }
        }
#line 1481 "parser.tab.c"
    break;

  case 32: /* E: T  */
#line 202 "parser.y"
      {yyval=yyvsp[0];}
#line 1487 "parser.tab.c"
    break;

  case 33: /* T: T '*' F  */
#line 205 "parser.y"
            { 
                 if ( vtype == INT ) {
                    sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) * atoi( yyvsp[0] ) ) );
                } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                    sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) * atof( yyvsp[0] ) ) );
                } else {
                    fprintf( stderr, "Operation %s not supported for type %d",
                             yyvsp[-1], vtype );
                    yyerror( yyval );
                    yyval = "~";
                }
            }
#line 1504 "parser.tab.c"
    break;

  case 34: /* T: T '/' F  */
#line 217 "parser.y"
            {  
                if ( vtype == INT ) {
                    sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) / atoi( yyvsp[0] ) ) );
                } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                    sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) / atof( yyvsp[0] ) ) );
                } else {
                    fprintf( stderr, "Operation %s not supported for type %d",
                             yyvsp[-1], vtype );
                    yyerror( yyval );
                    yyval = "~";
                }
            }
#line 1521 "parser.tab.c"
    break;

  case 35: /* T: F  */
#line 229 "parser.y"
      {yyval=yyvsp[0];}
#line 1527 "parser.tab.c"
    break;

  case 37: /* F: T_ID  */
#line 233 "parser.y"
         {
            symbol *s=get_symbol(yyvsp[0],scope);
            if(s==NULL) {
                fprintf(stderr,"%s is not declared\n",yyvsp[0]);
                yyerror(yyvsp[0]);
            }
            if(!strcmp(s->val,"~")) {
                fprintf(stderr,"%s is not initialized\n",yyvsp[0]);
                yyerror(yyvsp[0]);
            }
            yyval=strdup(s->val);
            vtype=s->type;
            if(vtype!=type&&type!=-1) {
                fprintf(stderr,"Cannot assign type %d to type %d\n",vtype,type);
                yyerror(yyvsp[0]);
            }
         }
#line 1549 "parser.tab.c"
    break;

  case 38: /* F: T_NUM  */
#line 250 "parser.y"
          {
        if(!skip_execution) {
            yyval=strdup(yyvsp[0]);
            vtype=get_type(yyvsp[0]);
            if(vtype!=type && type!=-1 && !(vtype==DOUBLE && type==FLOAT) && !(vtype==FLOAT && type==DOUBLE)) {
                fprintf(stderr,"Cannot assign type %d to type %d\n", vtype, type );
                yyerror( yyvsp[0] );
            }
	   if(type == -1) {
                condition_result = (atof(yyvsp[0]) != 0);
            }
        }
    }
#line 1567 "parser.tab.c"
    break;

  case 39: /* F: T_STRLITERAL  */
#line 263 "parser.y"
                 {
                    yyval=strdup(yyvsp[0]);
                    vtype=1;
                    if(vtype!=type) {
                        fprintf(stderr,"Cannot assign char * to type %d\n",type);
                        yyerror( yyvsp[0] );
                    }
                 }
#line 1580 "parser.tab.c"
    break;

  case 41: /* INCREMENT: T_INC T_ID  */
#line 274 "parser.y"
                       {
                symbol *s=get_symbol(yyvsp[0],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
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
                yyval=strdup(new_value);
                vtype=s->type;
            }
#line 1607 "parser.tab.c"
    break;

  case 42: /* INCREMENT: T_DEC T_ID  */
#line 296 "parser.y"
               {
                symbol *s=get_symbol(yyvsp[0],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
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
                yyval=strdup(new_value);
                vtype=s->type;
            }
#line 1634 "parser.tab.c"
    break;

  case 43: /* INCREMENT: T_ID T_INC  */
#line 318 "parser.y"
               {
                symbol *s=get_symbol(yyvsp[-1],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                yyval=strdup(s->val);
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
#line 1661 "parser.tab.c"
    break;

  case 44: /* INCREMENT: T_ID T_DEC  */
#line 340 "parser.y"
               {
                symbol *s=get_symbol(yyvsp[-1],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                yyval=strdup(s->val);
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
#line 1688 "parser.tab.c"
    break;

  case 51: /* $@2: %empty  */
#line 372 "parser.y"
                                             {scope++;}
#line 1694 "parser.tab.c"
    break;

  case 52: /* MAIN: TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' $@2 STMT '}'  */
#line 372 "parser.y"
                                                                 {scope--;}
#line 1700 "parser.tab.c"
    break;

  case 62: /* $@3: %empty  */
#line 390 "parser.y"
                            {
            if(!condition_result) {
                skip_execution = 1;
            }
        }
#line 1710 "parser.tab.c"
    break;

  case 63: /* $@4: %empty  */
#line 394 "parser.y"
                       {
            skip_execution = 0;
        }
#line 1718 "parser.tab.c"
    break;

  case 65: /* $@5: %empty  */
#line 399 "parser.y"
                   {
            if(condition_result) {
                skip_execution = 1;
            }
        }
#line 1728 "parser.tab.c"
    break;

  case 66: /* ELSE_PART: T_ELSE $@5 '{' STMT '}'  */
#line 403 "parser.y"
                       {
            skip_execution = 0;
        }
#line 1736 "parser.tab.c"
    break;

  case 71: /* $@6: %empty  */
#line 414 "parser.y"
                                  {
               if(!condition_result) {
                   skip_execution = 1;
               }
           }
#line 1746 "parser.tab.c"
    break;

  case 72: /* WHILE_LOOP: T_WHILE '(' COND ')' $@6 BLOCK  */
#line 418 "parser.y"
                   {
               skip_execution = 0;
           }
#line 1754 "parser.tab.c"
    break;

  case 74: /* $@7: %empty  */
#line 426 "parser.y"
                                                          {
             if(!condition_result) {
                 skip_execution = 1;
             }
         }
#line 1764 "parser.tab.c"
    break;

  case 75: /* FOR_LOOP: T_FOR '(' FOR_INIT ';' COND ';' FOR_UPDATE ')' $@7 BLOCK  */
#line 430 "parser.y"
                 {
             skip_execution = 0;
         }
#line 1772 "parser.tab.c"
    break;

  case 82: /* $@8: %empty  */
#line 445 "parser.y"
            {scope++;}
#line 1778 "parser.tab.c"
    break;

  case 83: /* BLOCK: '{' $@8 STMT '}'  */
#line 445 "parser.y"
                                {scope--;}
#line 1784 "parser.tab.c"
    break;


#line 1788 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
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
