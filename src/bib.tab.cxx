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


/* Substitute the variable and function names.  */
#define yyparse         bibparse
#define yylex           biblex
#define yyerror         biberror
#define yydebug         bibdebug
#define yynerrs         bibnerrs
#define yylval          biblval
#define yychar          bibchar

/* First part of user prologue.  */
#line 1 "bib.y"

/* process with:   bison -p bib -d  bib.y; mv bib.tab.c bib.tab.cxx */
/* Interesting bibtex yacc-grammar: 
   http://www.math.utah.edu/~beebe/software/bibparse/bibparse.html */
#include <map>
#include <iostream>
#include <string>

#include <ctype.h> 
//TODO wctype?

#include "bib.h"
//#include "bib.tab.h"

#define YYDEBUG 0 /* produce trace if (bibdebug!=0) */

extern int bibparse(void);
extern int biblex(void);


extern int nLine;

extern char *bibtext;


// This makes sure CBib construction is delayed until RTTI is fully setup
//
// CBib& g_oBib = CBib::Instance();
#define g_oBib CBib::Instance()


int bibwrap()
    {
    return 1;
    }


void biberror(const char* str)
    {
    std::cerr << "Error in Line " << nLine << ": " << str << std::endl;
    std::cerr << "   (last symbol: \"" << bibtext << "\") " << std::endl;
    }



char* str_tolower ( char* str );





#line 130 "bib.tab.c"

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

#include "bib.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ATSTRING = 3,                   /* ATSTRING  */
  YYSYMBOL_ATCOMMENT = 4,                  /* ATCOMMENT  */
  YYSYMBOL_ATINCLUDE = 5,                  /* ATINCLUDE  */
  YYSYMBOL_ATPREAMBLE = 6,                 /* ATPREAMBLE  */
  YYSYMBOL_ENTRYTYPE = 7,                  /* ENTRYTYPE  */
  YYSYMBOL_LATEXCOMMAND = 8,               /* LATEXCOMMAND  */
  YYSYMBOL_KEY = 9,                        /* KEY  */
  YYSYMBOL_EQUALS = 10,                    /* EQUALS  */
  YYSYMBOL_COMMA = 11,                     /* COMMA  */
  YYSYMBOL_COLON = 12,                     /* COLON  */
  YYSYMBOL_DOT = 13,                       /* DOT  */
  YYSYMBOL_OBRACE = 14,                    /* OBRACE  */
  YYSYMBOL_EBRACE = 15,                    /* EBRACE  */
  YYSYMBOL_OPAR = 16,                      /* OPAR  */
  YYSYMBOL_EPAR = 17,                      /* EPAR  */
  YYSYMBOL_NUMBER = 18,                    /* NUMBER  */
  YYSYMBOL_WORD = 19,                      /* WORD  */
  YYSYMBOL_WHITESPACE = 20,                /* WHITESPACE  */
  YYSYMBOL_NEWLINE = 21,                   /* NEWLINE  */
  YYSYMBOL_ANF = 22,                       /* ANF  */
  YYSYMBOL_COMMENT = 23,                   /* COMMENT  */
  YYSYMBOL_RAUTE = 24,                     /* RAUTE  */
  YYSYMBOL_TILDE = 25,                     /* TILDE  */
  YYSYMBOL_PIPE = 26,                      /* PIPE  */
  YYSYMBOL_PATH = 27,                      /* PATH  */
  YYSYMBOL_MATHMODE = 28,                  /* MATHMODE  */
  YYSYMBOL_ACCENT = 29,                    /* ACCENT  */
  YYSYMBOL_EXCLAM = 30,                    /* EXCLAM  */
  YYSYMBOL_QUEST = 31,                     /* QUEST  */
  YYSYMBOL_TIME = 32,                      /* TIME  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_bibfile = 34,                   /* bibfile  */
  YYSYMBOL_entry_list = 35,                /* entry_list  */
  YYSYMBOL_entry = 36,                     /* entry  */
  YYSYMBOL_entrypreamb = 37,               /* entrypreamb  */
  YYSYMBOL_entrystring = 38,               /* entrystring  */
  YYSYMBOL_entrytype = 39,                 /* entrytype  */
  YYSYMBOL_entry_body = 40,                /* entry_body  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_inhalt = 42,                    /* inhalt  */
  YYSYMBOL_tagx = 43,                      /* tagx  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_tag = 45,                       /* tag  */
  YYSYMBOL_content = 46,                   /* content  */
  YYSYMBOL_string_no_anf = 47,             /* string_no_anf  */
  YYSYMBOL_string_with_anf = 48,           /* string_with_anf  */
  YYSYMBOL_explizit = 49,                  /* explizit  */
  YYSYMBOL_50_3 = 50,                      /* $@3  */
  YYSYMBOL_optspace = 51,                  /* optspace  */
  YYSYMBOL_space = 52,                     /* space  */
  YYSYMBOL_single_space = 53               /* single_space  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  113

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    73,    73,    74,    77,    78,    81,    86,    90,    94,
      98,   105,   110,   115,   121,   121,   126,   127,   132,   133,
     133,   135,   138,   141,   144,   148,   152,   155,   162,   166,
     170,   174,   178,   182,   186,   190,   194,   198,   202,   206,
     210,   214,   218,   225,   228,   235,   235,   240,   241,   244,
     245,   248,   249
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
  "\"end of file\"", "error", "\"invalid token\"", "ATSTRING",
  "ATCOMMENT", "ATINCLUDE", "ATPREAMBLE", "ENTRYTYPE", "LATEXCOMMAND",
  "KEY", "EQUALS", "COMMA", "COLON", "DOT", "OBRACE", "EBRACE", "OPAR",
  "EPAR", "NUMBER", "WORD", "WHITESPACE", "NEWLINE", "ANF", "COMMENT",
  "RAUTE", "TILDE", "PIPE", "PATH", "MATHMODE", "ACCENT", "EXCLAM",
  "QUEST", "TIME", "$accept", "bibfile", "entry_list", "entry",
  "entrypreamb", "entrystring", "entrytype", "entry_body", "$@1", "inhalt",
  "tagx", "$@2", "tag", "content", "string_no_anf", "string_with_anf",
  "explizit", "$@3", "optspace", "space", "single_space", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-31)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-46)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -31,   -31,     7,    -1,    22,   -31,   -31,    22,   -31,
     -31,   -31,    22,   -31,    22,    22,    22,   -31,    -3,    -1,
       6,    21,     5,    22,   -31,    22,    22,    22,    22,    14,
      10,    10,    29,    17,    20,   -31,    22,   -31,    22,    22,
      22,   -31,   -31,   -31,    68,   -12,   -31,    99,   -11,    -6,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    31,   -31,    22,   -31,   -31,
      22,   -31,    36,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,    22,    68,    16,
      22,   123,    22,   -31,    22,    37,   -31,    30,   -31,    19,
     147,    22,   -31,   -31,   -31,   -31,    22,    55,    22,   -31,
      10,    22,    43
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      47,    51,    52,     0,     2,    48,    49,     1,    47,    11,
      13,     6,    47,     4,    47,    47,    47,    50,     0,     3,
       0,     0,     0,    47,     5,    47,    47,    47,    47,     0,
       0,     0,     0,     0,     0,    12,    47,    24,    47,    47,
      47,     7,    14,     8,    43,     0,    28,    45,     0,     0,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,     0,    23,    47,    22,    10,
      47,     9,     0,    41,    38,    34,    35,    36,    37,    33,
      32,    42,    31,    30,    39,    40,    29,    47,    44,     0,
      47,    45,    47,    25,    47,    15,    16,    18,    46,     0,
      45,    47,    19,    27,    26,    17,    47,     0,    47,    20,
       0,    47,    21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -31,    49,   -31,   -31,   -31,    41,   -31,   -31,
     -29,   -31,   -31,   -30,   -21,   -18,   -31,   -31,     0,   -31,
      66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,    12,    13,    14,    15,    16,    32,    50,    95,
      96,   106,   109,    39,    44,    45,    64,    65,    46,     5,
       6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       4,    40,     8,    66,    69,     9,    10,     7,    18,    71,
      67,    23,    19,    70,    20,    21,    22,    47,    70,    27,
      25,    28,    11,    29,    36,    30,    31,    33,    33,    37,
      92,    26,    38,    35,   103,    93,    42,    43,    94,    48,
      49,    67,     1,     2,    41,    87,    88,    90,   101,   102,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,   108,    91,    70,    24,    34,
      89,    17,   105,   100,    99,     0,    51,     0,    52,    53,
     111,    54,   -45,     0,    55,    56,    57,    58,     0,     0,
      97,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,    97,     0,     0,     0,     0,   107,    51,   110,    52,
      53,   112,    54,     0,     0,    55,    56,    57,    58,     0,
       0,    68,     0,     0,     0,     0,    59,    60,    61,    62,
      63,    51,     0,    52,    53,     0,    54,     0,    98,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,    51,     0,    52,    53,     0,
      54,     0,     0,    55,    56,    57,    58,     0,     0,   104,
       0,     0,     0,     0,    59,    60,    61,    62,    63
};

static const yytype_int8 yycheck[] =
{
       0,    31,     3,    15,    15,     6,     7,     0,     8,    15,
      22,    14,    12,    24,    14,    15,    16,    38,    24,    14,
      14,    16,    23,    23,    14,    25,    26,    27,    28,    19,
      14,    10,    22,    19,    15,    19,    19,    17,    22,    39,
      40,    22,    20,    21,    15,    14,    67,    11,    11,    19,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    10,    87,    24,    19,    28,
      70,     5,   101,    94,    92,    -1,     8,    -1,    10,    11,
     110,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,   101,    -1,    -1,    -1,    -1,   106,     8,   108,    10,
      11,   111,    13,    -1,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,     8,    -1,    10,    11,    -1,    13,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,     8,    -1,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    21,    34,    51,    52,    53,     0,     3,     6,
       7,    23,    35,    36,    37,    38,    39,    53,    51,    51,
      51,    51,    51,    14,    36,    14,    10,    14,    16,    51,
      51,    51,    40,    51,    40,    19,    14,    19,    22,    46,
      46,    15,    19,    17,    47,    48,    51,    47,    51,    51,
      41,     8,    10,    11,    13,    16,    17,    18,    19,    27,
      28,    29,    30,    31,    49,    50,    15,    22,    22,    15,
      24,    15,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    14,    47,    51,
      11,    47,    14,    19,    22,    42,    43,    51,    15,    48,
      47,    11,    19,    15,    22,    43,    44,    51,    10,    45,
      51,    46,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    36,    36,
      36,    37,    38,    39,    41,    40,    42,    42,    43,    44,
      43,    45,    46,    46,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    48,    48,    50,    49,    51,    51,    52,
      52,    53,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     5,     5,     7,
       7,     1,     5,     1,     0,     6,     1,     3,     1,     0,
       5,     4,     3,     3,     1,     5,     7,     7,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     0,     4,     0,     1,     1,
       2,     1,     1
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
  case 2: /* bibfile: optspace  */
#line 73 "bib.y"
                  {}
#line 1252 "bib.tab.c"
    break;

  case 3: /* bibfile: optspace entry_list optspace  */
#line 74 "bib.y"
                                       {}
#line 1258 "bib.tab.c"
    break;

  case 4: /* entry_list: entry  */
#line 77 "bib.y"
                  {}
#line 1264 "bib.tab.c"
    break;

  case 5: /* entry_list: entry_list optspace entry  */
#line 78 "bib.y"
                                    {}
#line 1270 "bib.tab.c"
    break;

  case 6: /* entry: COMMENT  */
#line 81 "bib.y"
                {
#if defined(YYDEBUG) && (YYDEBUG != 0)
                    bibdebug=1; 
#endif
                }
#line 1280 "bib.tab.c"
    break;

  case 7: /* entry: entrytype optspace OBRACE entry_body EBRACE  */
#line 87 "bib.y"
                {
		  g_oBib.FinishObject ( (yyvsp[-4].string), objects_atentry );
		}
#line 1288 "bib.tab.c"
    break;

  case 8: /* entry: entrytype optspace OPAR entry_body EPAR  */
#line 91 "bib.y"
                {
		  g_oBib.FinishObject ( (yyvsp[-4].string), objects_atentry );
		}
#line 1296 "bib.tab.c"
    break;

  case 9: /* entry: entrystring optspace EQUALS optspace content optspace EBRACE  */
#line 95 "bib.y"
                {
		  g_oBib.FinishObject ( "AtString", objects_atstring );
		}
#line 1304 "bib.tab.c"
    break;

  case 10: /* entry: entrypreamb optspace OBRACE optspace content optspace EBRACE  */
#line 99 "bib.y"
                {
		  g_oBib.FinishObject ( "AtPreamble", objects_atpreamble );
		}
#line 1312 "bib.tab.c"
    break;

  case 11: /* entrypreamb: ATPREAMBLE  */
#line 106 "bib.y"
        { 
	  g_oBib.CreateObject ( "AtPreamble", "Meta", objects_atpreamble );
	}
#line 1320 "bib.tab.c"
    break;

  case 12: /* entrystring: ATSTRING optspace OBRACE optspace WORD  */
#line 111 "bib.y"
        { 
	  g_oBib.CreateObject ( (yyvsp[0].string), "Meta", objects_atstring  );
	}
#line 1328 "bib.tab.c"
    break;

  case 13: /* entrytype: ENTRYTYPE  */
#line 116 "bib.y"
        {
	  g_oBib.CreateObject ( (yyvsp[0].string), "Entry", objects_atentry ); (yyval.string)=(yyvsp[0].string); 
	}
#line 1336 "bib.tab.c"
    break;

  case 14: /* $@1: %empty  */
#line 121 "bib.y"
                          { g_oBib.SetKey ( (yyvsp[0].string) ); }
#line 1342 "bib.tab.c"
    break;

  case 15: /* entry_body: optspace WORD $@1 optspace COMMA inhalt  */
#line 122 "bib.y"
                {
	        }
#line 1349 "bib.tab.c"
    break;

  case 16: /* inhalt: tagx  */
#line 126 "bib.y"
             {}
#line 1355 "bib.tab.c"
    break;

  case 17: /* inhalt: inhalt COMMA tagx  */
#line 128 "bib.y"
                {
	        }
#line 1362 "bib.tab.c"
    break;

  case 18: /* tagx: optspace  */
#line 132 "bib.y"
                 {}
#line 1368 "bib.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 133 "bib.y"
                        {g_oBib.CreateObject ( str_tolower((yyvsp[0].string)), "Tag", objects_tag );}
#line 1374 "bib.tab.c"
    break;

  case 20: /* tagx: optspace WORD $@2 optspace tag  */
#line 133 "bib.y"
                                                                                                    { g_oBib.FinishObject ( (yyvsp[-3].string), objects_tag );}
#line 1380 "bib.tab.c"
    break;

  case 21: /* tag: EQUALS optspace content optspace  */
#line 135 "bib.y"
                                          { }
#line 1386 "bib.tab.c"
    break;

  case 22: /* content: ANF string_no_anf ANF  */
#line 139 "bib.y"
                {
		}
#line 1393 "bib.tab.c"
    break;

  case 23: /* content: OBRACE string_with_anf EBRACE  */
#line 142 "bib.y"
                {
		}
#line 1400 "bib.tab.c"
    break;

  case 24: /* content: WORD  */
#line 145 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[0].string), false, usersigns_abbrev );
		}
#line 1408 "bib.tab.c"
    break;

  case 25: /* content: content optspace RAUTE optspace WORD  */
#line 149 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[0].string), false, usersigns_abbrev );
		}
#line 1416 "bib.tab.c"
    break;

  case 26: /* content: content optspace RAUTE optspace ANF string_no_anf ANF  */
#line 153 "bib.y"
                {
		}
#line 1423 "bib.tab.c"
    break;

  case 27: /* content: content optspace RAUTE optspace OBRACE string_with_anf EBRACE  */
#line 156 "bib.y"
                {
		}
#line 1430 "bib.tab.c"
    break;

  case 28: /* string_no_anf: optspace  */
#line 163 "bib.y"
                {
		  g_oBib.SetPrefix(((yyvsp[0].number)?true:false)); 
		}
#line 1438 "bib.tab.c"
    break;

  case 29: /* string_no_anf: string_no_anf explizit optspace  */
#line 167 "bib.y"
                {
		  g_oBib.ExplizitFinish (  ((yyvsp[0].number)?true:false) );
		}
#line 1446 "bib.tab.c"
    break;

  case 30: /* string_no_anf: string_no_anf ACCENT optspace  */
#line 171 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[-1].string), ((yyvsp[0].number)?true:false), usersigns_accent );
		}
#line 1454 "bib.tab.c"
    break;

  case 31: /* string_no_anf: string_no_anf MATHMODE optspace  */
#line 175 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[-1].string), ((yyvsp[0].number)?true:false), usersigns_mathmode );
		}
#line 1462 "bib.tab.c"
    break;

  case 32: /* string_no_anf: string_no_anf WORD optspace  */
#line 179 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[-1].string), ((yyvsp[0].number)?true:false), usersigns_word);
		}
#line 1470 "bib.tab.c"
    break;

  case 33: /* string_no_anf: string_no_anf NUMBER optspace  */
#line 183 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[-1].string), ((yyvsp[0].number)?true:false), usersigns_number );
		}
#line 1478 "bib.tab.c"
    break;

  case 34: /* string_no_anf: string_no_anf COMMA optspace  */
#line 187 "bib.y"
                {
		  g_oBib.AddAtom ( ",", ((yyvsp[0].number)?true:false), usersigns_comma);
		}
#line 1486 "bib.tab.c"
    break;

  case 35: /* string_no_anf: string_no_anf DOT optspace  */
#line 191 "bib.y"
                {
		  g_oBib.AddAtom ( ".", ((yyvsp[0].number)?true:false), usersigns_dot );
		}
#line 1494 "bib.tab.c"
    break;

  case 36: /* string_no_anf: string_no_anf OPAR optspace  */
#line 195 "bib.y"
                {
		  g_oBib.AddAtom ( "(", ((yyvsp[0].number)?true:false), usersigns_opar );
		}
#line 1502 "bib.tab.c"
    break;

  case 37: /* string_no_anf: string_no_anf EPAR optspace  */
#line 199 "bib.y"
                {
		  g_oBib.AddAtom ( ")", ((yyvsp[0].number)?true:false), usersigns_epar );
		}
#line 1510 "bib.tab.c"
    break;

  case 38: /* string_no_anf: string_no_anf EQUALS optspace  */
#line 203 "bib.y"
                {
		  g_oBib.AddAtom ( "=", ((yyvsp[0].number)?true:false), usersigns_equal );
		}
#line 1518 "bib.tab.c"
    break;

  case 39: /* string_no_anf: string_no_anf EXCLAM optspace  */
#line 207 "bib.y"
                {
		  g_oBib.AddAtom ( "!", ((yyvsp[0].number)?true:false), usersigns_exclam );
		}
#line 1526 "bib.tab.c"
    break;

  case 40: /* string_no_anf: string_no_anf QUEST optspace  */
#line 211 "bib.y"
                {
		  g_oBib.AddAtom ( "?", ((yyvsp[0].number)?true:false), usersigns_quest );
		}
#line 1534 "bib.tab.c"
    break;

  case 41: /* string_no_anf: string_no_anf LATEXCOMMAND optspace  */
#line 215 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[-1].string), ((yyvsp[0].number)?true:false), usersigns_latex );
		}
#line 1542 "bib.tab.c"
    break;

  case 42: /* string_no_anf: string_no_anf PATH optspace  */
#line 219 "bib.y"
                {
		  g_oBib.AddAtom ( (yyvsp[-1].string), ((yyvsp[0].number)?true:false), usersigns_path );
		}
#line 1550 "bib.tab.c"
    break;

  case 43: /* string_with_anf: string_no_anf  */
#line 226 "bib.y"
                {
		}
#line 1557 "bib.tab.c"
    break;

  case 44: /* string_with_anf: string_with_anf ANF string_no_anf  */
#line 229 "bib.y"
                {
		    /* FixMe: at the moment just ignore ANF within a brace-limited-string */
		}
#line 1565 "bib.tab.c"
    break;

  case 45: /* $@3: %empty  */
#line 235 "bib.y"
          { g_oBib.ExplizitIn(); }
#line 1571 "bib.tab.c"
    break;

  case 46: /* explizit: $@3 OBRACE string_no_anf EBRACE  */
#line 236 "bib.y"
        {
	  g_oBib.ExplizitOut();
	}
#line 1579 "bib.tab.c"
    break;

  case 47: /* optspace: %empty  */
#line 240 "bib.y"
          { (yyval.number) = 0;}
#line 1585 "bib.tab.c"
    break;

  case 48: /* optspace: space  */
#line 241 "bib.y"
                { (yyval.number) = 1;}
#line 1591 "bib.tab.c"
    break;

  case 49: /* space: single_space  */
#line 244 "bib.y"
                    { (yyval.number) = 1;}
#line 1597 "bib.tab.c"
    break;

  case 50: /* space: space single_space  */
#line 245 "bib.y"
                             { (yyval.number) =1;}
#line 1603 "bib.tab.c"
    break;

  case 51: /* single_space: WHITESPACE  */
#line 248 "bib.y"
                         {(yyval.number)=1;}
#line 1609 "bib.tab.c"
    break;

  case 52: /* single_space: NEWLINE  */
#line 249 "bib.y"
                  {(yyval.number)=1; }
#line 1615 "bib.tab.c"
    break;


#line 1619 "bib.tab.c"

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

