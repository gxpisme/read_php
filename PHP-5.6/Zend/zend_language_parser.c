/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "/root/study/php/php-src/Zend/zend_language_parser.y"

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2016 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE znode


/* Line 371 of yacc.c  */
#line 121 "/root/study/php/php-src/Zend/zend_language_parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_ROOT_STUDY_PHP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ROOT_STUDY_PHP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 50 "/root/study/php/php-src/Zend/zend_language_parser.y"

#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif


/* Line 387 of yacc.c  */
#line 161 "/root/study/php/php-src/Zend/zend_language_parser.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_YIELD = 267,
     T_POW_EQUAL = 268,
     T_SR_EQUAL = 269,
     T_SL_EQUAL = 270,
     T_XOR_EQUAL = 271,
     T_OR_EQUAL = 272,
     T_AND_EQUAL = 273,
     T_MOD_EQUAL = 274,
     T_CONCAT_EQUAL = 275,
     T_DIV_EQUAL = 276,
     T_MUL_EQUAL = 277,
     T_MINUS_EQUAL = 278,
     T_PLUS_EQUAL = 279,
     T_BOOLEAN_OR = 280,
     T_BOOLEAN_AND = 281,
     T_IS_NOT_IDENTICAL = 282,
     T_IS_IDENTICAL = 283,
     T_IS_NOT_EQUAL = 284,
     T_IS_EQUAL = 285,
     T_IS_GREATER_OR_EQUAL = 286,
     T_IS_SMALLER_OR_EQUAL = 287,
     T_SR = 288,
     T_SL = 289,
     T_INSTANCEOF = 290,
     T_UNSET_CAST = 291,
     T_BOOL_CAST = 292,
     T_OBJECT_CAST = 293,
     T_ARRAY_CAST = 294,
     T_STRING_CAST = 295,
     T_DOUBLE_CAST = 296,
     T_INT_CAST = 297,
     T_DEC = 298,
     T_INC = 299,
     T_POW = 300,
     T_CLONE = 301,
     T_NEW = 302,
     T_EXIT = 303,
     T_IF = 304,
     T_ELSEIF = 305,
     T_ELSE = 306,
     T_ENDIF = 307,
     T_LNUMBER = 308,
     T_DNUMBER = 309,
     T_STRING = 310,
     T_STRING_VARNAME = 311,
     T_VARIABLE = 312,
     T_NUM_STRING = 313,
     T_INLINE_HTML = 314,
     T_CHARACTER = 315,
     T_BAD_CHARACTER = 316,
     T_ENCAPSED_AND_WHITESPACE = 317,
     T_CONSTANT_ENCAPSED_STRING = 318,
     T_ECHO = 319,
     T_DO = 320,
     T_WHILE = 321,
     T_ENDWHILE = 322,
     T_FOR = 323,
     T_ENDFOR = 324,
     T_FOREACH = 325,
     T_ENDFOREACH = 326,
     T_DECLARE = 327,
     T_ENDDECLARE = 328,
     T_AS = 329,
     T_SWITCH = 330,
     T_ENDSWITCH = 331,
     T_CASE = 332,
     T_DEFAULT = 333,
     T_BREAK = 334,
     T_CONTINUE = 335,
     T_GOTO = 336,
     T_FUNCTION = 337,
     T_CONST = 338,
     T_RETURN = 339,
     T_TRY = 340,
     T_CATCH = 341,
     T_FINALLY = 342,
     T_THROW = 343,
     T_USE = 344,
     T_INSTEADOF = 345,
     T_GLOBAL = 346,
     T_PUBLIC = 347,
     T_PROTECTED = 348,
     T_PRIVATE = 349,
     T_FINAL = 350,
     T_ABSTRACT = 351,
     T_STATIC = 352,
     T_VAR = 353,
     T_UNSET = 354,
     T_ISSET = 355,
     T_EMPTY = 356,
     T_HALT_COMPILER = 357,
     T_CLASS = 358,
     T_TRAIT = 359,
     T_INTERFACE = 360,
     T_EXTENDS = 361,
     T_IMPLEMENTS = 362,
     T_OBJECT_OPERATOR = 363,
     T_DOUBLE_ARROW = 364,
     T_LIST = 365,
     T_ARRAY = 366,
     T_CALLABLE = 367,
     T_CLASS_C = 368,
     T_TRAIT_C = 369,
     T_METHOD_C = 370,
     T_FUNC_C = 371,
     T_LINE = 372,
     T_FILE = 373,
     T_COMMENT = 374,
     T_DOC_COMMENT = 375,
     T_OPEN_TAG = 376,
     T_OPEN_TAG_WITH_ECHO = 377,
     T_CLOSE_TAG = 378,
     T_WHITESPACE = 379,
     T_START_HEREDOC = 380,
     T_END_HEREDOC = 381,
     T_DOLLAR_OPEN_CURLY_BRACES = 382,
     T_CURLY_OPEN = 383,
     T_PAAMAYIM_NEKUDOTAYIM = 384,
     T_NAMESPACE = 385,
     T_NS_C = 386,
     T_DIR = 387,
     T_NS_SEPARATOR = 388,
     T_ELLIPSIS = 389
   };
#endif
/* Tokens.  */
#define END 0
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_YIELD 267
#define T_POW_EQUAL 268
#define T_SR_EQUAL 269
#define T_SL_EQUAL 270
#define T_XOR_EQUAL 271
#define T_OR_EQUAL 272
#define T_AND_EQUAL 273
#define T_MOD_EQUAL 274
#define T_CONCAT_EQUAL 275
#define T_DIV_EQUAL 276
#define T_MUL_EQUAL 277
#define T_MINUS_EQUAL 278
#define T_PLUS_EQUAL 279
#define T_BOOLEAN_OR 280
#define T_BOOLEAN_AND 281
#define T_IS_NOT_IDENTICAL 282
#define T_IS_IDENTICAL 283
#define T_IS_NOT_EQUAL 284
#define T_IS_EQUAL 285
#define T_IS_GREATER_OR_EQUAL 286
#define T_IS_SMALLER_OR_EQUAL 287
#define T_SR 288
#define T_SL 289
#define T_INSTANCEOF 290
#define T_UNSET_CAST 291
#define T_BOOL_CAST 292
#define T_OBJECT_CAST 293
#define T_ARRAY_CAST 294
#define T_STRING_CAST 295
#define T_DOUBLE_CAST 296
#define T_INT_CAST 297
#define T_DEC 298
#define T_INC 299
#define T_POW 300
#define T_CLONE 301
#define T_NEW 302
#define T_EXIT 303
#define T_IF 304
#define T_ELSEIF 305
#define T_ELSE 306
#define T_ENDIF 307
#define T_LNUMBER 308
#define T_DNUMBER 309
#define T_STRING 310
#define T_STRING_VARNAME 311
#define T_VARIABLE 312
#define T_NUM_STRING 313
#define T_INLINE_HTML 314
#define T_CHARACTER 315
#define T_BAD_CHARACTER 316
#define T_ENCAPSED_AND_WHITESPACE 317
#define T_CONSTANT_ENCAPSED_STRING 318
#define T_ECHO 319
#define T_DO 320
#define T_WHILE 321
#define T_ENDWHILE 322
#define T_FOR 323
#define T_ENDFOR 324
#define T_FOREACH 325
#define T_ENDFOREACH 326
#define T_DECLARE 327
#define T_ENDDECLARE 328
#define T_AS 329
#define T_SWITCH 330
#define T_ENDSWITCH 331
#define T_CASE 332
#define T_DEFAULT 333
#define T_BREAK 334
#define T_CONTINUE 335
#define T_GOTO 336
#define T_FUNCTION 337
#define T_CONST 338
#define T_RETURN 339
#define T_TRY 340
#define T_CATCH 341
#define T_FINALLY 342
#define T_THROW 343
#define T_USE 344
#define T_INSTEADOF 345
#define T_GLOBAL 346
#define T_PUBLIC 347
#define T_PROTECTED 348
#define T_PRIVATE 349
#define T_FINAL 350
#define T_ABSTRACT 351
#define T_STATIC 352
#define T_VAR 353
#define T_UNSET 354
#define T_ISSET 355
#define T_EMPTY 356
#define T_HALT_COMPILER 357
#define T_CLASS 358
#define T_TRAIT 359
#define T_INTERFACE 360
#define T_EXTENDS 361
#define T_IMPLEMENTS 362
#define T_OBJECT_OPERATOR 363
#define T_DOUBLE_ARROW 364
#define T_LIST 365
#define T_ARRAY 366
#define T_CALLABLE 367
#define T_CLASS_C 368
#define T_TRAIT_C 369
#define T_METHOD_C 370
#define T_FUNC_C 371
#define T_LINE 372
#define T_FILE 373
#define T_COMMENT 374
#define T_DOC_COMMENT 375
#define T_OPEN_TAG 376
#define T_OPEN_TAG_WITH_ECHO 377
#define T_CLOSE_TAG 378
#define T_WHITESPACE 379
#define T_START_HEREDOC 380
#define T_END_HEREDOC 381
#define T_DOLLAR_OPEN_CURLY_BRACES 382
#define T_CURLY_OPEN 383
#define T_PAAMAYIM_NEKUDOTAYIM 384
#define T_NAMESPACE 385
#define T_NS_C 386
#define T_DIR 387
#define T_NS_SEPARATOR 388
#define T_ELLIPSIS 389



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int zendparse (void *YYPARSE_PARAM);
#else
int zendparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int zendparse (void);
#else
int zendparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_ZEND_ROOT_STUDY_PHP_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 468 "/root/study/php/php-src/Zend/zend_language_parser.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  228
/* YYNRULES -- Number of rules.  */
#define YYNRULES  594
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1097

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   389

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,   162,     2,   159,    49,    33,     2,
     154,   155,    47,    44,     8,    45,    46,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,   156,
      38,    14,    39,    27,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,   160,    32,     2,   161,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   157,    31,   158,    52,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      29,    30,    34,    35,    36,    37,    40,    41,    42,    43,
      51,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    56,
      61,    64,    68,    70,    72,    76,    79,    84,    88,    90,
      92,    96,    99,   104,   108,   110,   112,   116,   119,   124,
     130,   135,   136,   140,   141,   143,   145,   147,   152,   154,
     157,   161,   162,   163,   171,   172,   173,   184,   185,   186,
     192,   193,   194,   202,   203,   204,   205,   218,   219,   224,
     227,   231,   234,   238,   241,   245,   249,   252,   256,   260,
     264,   266,   269,   275,   276,   277,   288,   289,   290,   301,
     302,   309,   311,   312,   313,   322,   326,   330,   331,   332,
     333,   334,   335,   349,   350,   351,   357,   359,   360,   362,
     365,   366,   367,   378,   380,   384,   386,   388,   390,   391,
     393,   394,   396,   397,   408,   409,   418,   419,   427,   429,
     432,   434,   437,   438,   441,   443,   444,   447,   448,   451,
     453,   457,   458,   461,   463,   466,   467,   473,   475,   480,
     482,   487,   489,   494,   498,   504,   508,   513,   518,   524,
     525,   526,   533,   534,   540,   542,   544,   546,   551,   552,
     553,   559,   560,   561,   568,   569,   572,   573,   577,   579,
     580,   582,   586,   591,   598,   599,   601,   603,   605,   608,
     612,   616,   618,   622,   624,   626,   629,   632,   636,   638,
     640,   643,   648,   652,   658,   660,   664,   667,   668,   669,
     674,   677,   679,   680,   690,   694,   696,   700,   702,   706,
     707,   709,   711,   714,   717,   720,   724,   726,   730,   732,
     734,   738,   743,   747,   748,   750,   752,   756,   758,   760,
     761,   763,   765,   768,   770,   772,   774,   776,   778,   780,
     784,   790,   792,   796,   802,   807,   811,   813,   814,   816,
     817,   822,   824,   827,   829,   834,   838,   839,   843,   845,
     847,   848,   849,   852,   853,   858,   859,   867,   871,   876,
     877,   885,   888,   892,   896,   900,   904,   908,   912,   916,
     920,   924,   928,   932,   936,   939,   942,   945,   948,   949,
     954,   955,   960,   961,   966,   967,   972,   976,   980,   984,
     988,   992,   996,  1000,  1004,  1008,  1012,  1016,  1020,  1024,
    1027,  1030,  1033,  1036,  1040,  1044,  1048,  1052,  1056,  1060,
    1064,  1068,  1072,  1074,  1076,  1077,  1083,  1084,  1085,  1093,
    1094,  1100,  1102,  1105,  1108,  1111,  1114,  1117,  1120,  1123,
    1126,  1127,  1131,  1133,  1135,  1137,  1141,  1144,  1146,  1147,
    1158,  1159,  1171,  1174,  1177,  1182,  1187,  1192,  1197,  1202,
    1207,  1212,  1216,  1218,  1219,  1224,  1228,  1233,  1235,  1238,
    1239,  1243,  1244,  1250,  1251,  1256,  1257,  1263,  1264,  1270,
    1271,  1277,  1278,  1284,  1285,  1289,  1291,  1293,  1297,  1300,
    1302,  1306,  1309,  1311,  1313,  1314,  1315,  1322,  1324,  1327,
    1328,  1331,  1332,  1335,  1337,  1338,  1340,  1342,  1343,  1345,
    1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,
    1369,  1372,  1376,  1378,  1380,  1382,  1384,  1388,  1391,  1396,
    1400,  1402,  1404,  1406,  1411,  1415,  1419,  1423,  1427,  1431,
    1435,  1438,  1441,  1445,  1449,  1453,  1457,  1461,  1465,  1469,
    1473,  1477,  1481,  1485,  1489,  1493,  1497,  1501,  1505,  1509,
    1513,  1517,  1522,  1528,  1531,  1534,  1538,  1540,  1542,  1546,
    1549,  1551,  1553,  1555,  1557,  1561,  1565,  1567,  1568,  1571,
    1572,  1574,  1580,  1584,  1588,  1590,  1592,  1594,  1598,  1602,
    1604,  1606,  1608,  1609,  1610,  1618,  1620,  1623,  1624,  1625,
    1630,  1635,  1640,  1641,  1644,  1646,  1648,  1649,  1651,  1654,
    1658,  1662,  1664,  1669,  1670,  1676,  1678,  1680,  1682,  1684,
    1687,  1689,  1694,  1699,  1701,  1703,  1708,  1709,  1711,  1713,
    1714,  1717,  1722,  1727,  1729,  1731,  1735,  1737,  1740,  1744,
    1746,  1748,  1749,  1755,  1756,  1757,  1760,  1766,  1770,  1774,
    1776,  1783,  1788,  1793,  1796,  1799,  1802,  1804,  1807,  1809,
    1810,  1816,  1820,  1824,  1831,  1835,  1837,  1839,  1841,  1846,
    1851,  1856,  1859,  1862,  1867,  1870,  1873,  1875,  1876,  1881,
    1883,  1885,  1889,  1893,  1897
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     164,     0,    -1,   165,    -1,    -1,   165,   166,   168,    -1,
      -1,    74,    -1,   167,   152,    74,    -1,   181,    -1,   216,
      -1,   217,    -1,   121,   154,   155,   156,    -1,   149,   167,
     156,    -1,    -1,   149,   167,   157,   169,   165,   158,    -1,
      -1,   149,   157,   170,   165,   158,    -1,   108,   171,   156,
      -1,   108,   101,   173,   156,    -1,   108,   102,   175,   156,
      -1,   177,   156,    -1,   171,     8,   172,    -1,   172,    -1,
     167,    -1,   167,    93,    74,    -1,   152,   167,    -1,   152,
     167,    93,    74,    -1,   173,     8,   174,    -1,   174,    -1,
     167,    -1,   167,    93,    74,    -1,   152,   167,    -1,   152,
     167,    93,    74,    -1,   175,     8,   176,    -1,   176,    -1,
     167,    -1,   167,    93,    74,    -1,   152,   167,    -1,   152,
     167,    93,    74,    -1,   177,     8,    74,    14,   337,    -1,
     102,    74,    14,   337,    -1,    -1,   178,   179,   180,    -1,
      -1,   181,    -1,   216,    -1,   217,    -1,   121,   154,   155,
     156,    -1,   182,    -1,    74,    28,    -1,   157,   178,   158,
      -1,    -1,    -1,    68,   346,   183,   181,   184,   244,   248,
      -1,    -1,    -1,    68,   346,    28,   185,   178,   186,   246,
     249,    71,   156,    -1,    -1,    -1,    85,   187,   346,   188,
     243,    -1,    -1,    -1,    84,   189,   181,    85,   190,   346,
     156,    -1,    -1,    -1,    -1,    87,   154,   284,   156,   191,
     284,   156,   192,   284,   155,   193,   234,    -1,    -1,    94,
     346,   194,   238,    -1,    98,   156,    -1,    98,   345,   156,
      -1,    99,   156,    -1,    99,   345,   156,    -1,   103,   156,
      -1,   103,   295,   156,    -1,   103,   350,   156,    -1,   309,
     156,    -1,   110,   257,   156,    -1,   116,   259,   156,    -1,
      83,   283,   156,    -1,    78,    -1,   345,   156,    -1,   118,
     154,   214,   155,   156,    -1,    -1,    -1,    89,   154,   350,
      93,   195,   232,   231,   155,   196,   235,    -1,    -1,    -1,
      89,   154,   295,    93,   197,   232,   231,   155,   198,   235,
      -1,    -1,    91,   199,   154,   237,   155,   236,    -1,   156,
      -1,    -1,    -1,   104,   200,   157,   178,   158,   202,   201,
     207,    -1,   107,   345,   156,    -1,   100,    74,   156,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   154,   203,   325,   204,
      76,   155,   205,   157,   178,   158,   206,   209,    -1,    -1,
      -1,   106,   208,   157,   178,   158,    -1,   210,    -1,    -1,
     211,    -1,   210,   211,    -1,    -1,    -1,   105,   154,   325,
     212,    76,   155,   213,   157,   178,   158,    -1,   215,    -1,
     214,     8,   215,    -1,   350,    -1,   220,    -1,   222,    -1,
      -1,    33,    -1,    -1,   153,    -1,    -1,   312,   218,    74,
     221,   154,   250,   155,   157,   178,   158,    -1,    -1,   225,
      74,   226,   223,   229,   157,   260,   158,    -1,    -1,   227,
      74,   224,   228,   157,   260,   158,    -1,   122,    -1,   115,
     122,    -1,   123,    -1,   114,   122,    -1,    -1,   125,   325,
      -1,   124,    -1,    -1,   125,   230,    -1,    -1,   126,   230,
      -1,   325,    -1,   230,     8,   325,    -1,    -1,   128,   232,
      -1,   350,    -1,    33,   350,    -1,    -1,   129,   154,   233,
     375,   155,    -1,   181,    -1,    28,   178,    88,   156,    -1,
     181,    -1,    28,   178,    90,   156,    -1,   181,    -1,    28,
     178,    92,   156,    -1,    74,    14,   337,    -1,   237,     8,
      74,    14,   337,    -1,   157,   239,   158,    -1,   157,   156,
     239,   158,    -1,    28,   239,    95,   156,    -1,    28,   156,
     239,    95,   156,    -1,    -1,    -1,   239,    96,   345,   242,
     240,   178,    -1,    -1,   239,    97,   242,   241,   178,    -1,
      28,    -1,   156,    -1,   181,    -1,    28,   178,    86,   156,
      -1,    -1,    -1,   244,    69,   346,   245,   181,    -1,    -1,
      -1,   246,    69,   346,    28,   247,   178,    -1,    -1,    70,
     181,    -1,    -1,    70,    28,   178,    -1,   251,    -1,    -1,
     252,    -1,   251,     8,   252,    -1,   253,   218,   219,    76,
      -1,   253,   218,   219,    76,    14,   337,    -1,    -1,   130,
      -1,   131,    -1,   325,    -1,   154,   155,    -1,   154,   255,
     155,    -1,   154,   309,   155,    -1,   256,    -1,   255,     8,
     256,    -1,   295,    -1,   350,    -1,    33,   348,    -1,   153,
     345,    -1,   257,     8,   258,    -1,   258,    -1,    76,    -1,
     159,   347,    -1,   159,   157,   345,   158,    -1,   259,     8,
      76,    -1,   259,     8,    76,    14,   337,    -1,    76,    -1,
      76,    14,   337,    -1,   260,   261,    -1,    -1,    -1,   277,
     262,   281,   156,    -1,   282,   156,    -1,   264,    -1,    -1,
     278,   312,   218,    74,   263,   154,   250,   155,   276,    -1,
     108,   265,   266,    -1,   325,    -1,   265,     8,   325,    -1,
     156,    -1,   157,   267,   158,    -1,    -1,   268,    -1,   269,
      -1,   268,   269,    -1,   270,   156,    -1,   274,   156,    -1,
     273,   109,   271,    -1,   325,    -1,   271,     8,   325,    -1,
      74,    -1,   273,    -1,   325,   148,    74,    -1,   272,    93,
     275,    74,    -1,   272,    93,   280,    -1,    -1,   280,    -1,
     156,    -1,   157,   178,   158,    -1,   279,    -1,   117,    -1,
      -1,   279,    -1,   280,    -1,   279,   280,    -1,   111,    -1,
     112,    -1,   113,    -1,   116,    -1,   115,    -1,   114,    -1,
     281,     8,    76,    -1,   281,     8,    76,    14,   337,    -1,
      76,    -1,    76,    14,   337,    -1,   282,     8,    74,    14,
     337,    -1,   102,    74,    14,   337,    -1,   283,     8,   345,
      -1,   345,    -1,    -1,   285,    -1,    -1,   285,     8,   286,
     345,    -1,   345,    -1,   287,   354,    -1,   354,    -1,   288,
      64,   369,   160,    -1,    64,   369,   160,    -1,    -1,   288,
     290,   287,    -1,   288,    -1,   287,    -1,    -1,    -1,   292,
     289,    -1,    -1,    66,   326,   294,   334,    -1,    -1,   129,
     154,   296,   375,   155,    14,   345,    -1,   350,    14,   345,
      -1,   350,    14,    33,   350,    -1,    -1,   350,    14,    33,
      66,   326,   297,   334,    -1,    65,   345,    -1,   350,    26,
     345,    -1,   350,    25,   345,    -1,   350,    24,   345,    -1,
     350,    15,   345,    -1,   350,    23,   345,    -1,   350,    22,
     345,    -1,   350,    21,   345,    -1,   350,    20,   345,    -1,
     350,    19,   345,    -1,   350,    18,   345,    -1,   350,    17,
     345,    -1,   350,    16,   345,    -1,   349,    62,    -1,    62,
     349,    -1,   349,    61,    -1,    61,   349,    -1,    -1,   345,
      29,   298,   345,    -1,    -1,   345,    30,   299,   345,    -1,
      -1,   345,     9,   300,   345,    -1,    -1,   345,    11,   301,
     345,    -1,   345,    10,   345,    -1,   345,    31,   345,    -1,
     345,    33,   345,    -1,   345,    32,   345,    -1,   345,    46,
     345,    -1,   345,    44,   345,    -1,   345,    45,   345,    -1,
     345,    47,   345,    -1,   345,    63,   345,    -1,   345,    48,
     345,    -1,   345,    49,   345,    -1,   345,    43,   345,    -1,
     345,    42,   345,    -1,    44,   345,    -1,    45,   345,    -1,
      50,   345,    -1,    52,   345,    -1,   345,    35,   345,    -1,
     345,    34,   345,    -1,   345,    37,   345,    -1,   345,    36,
     345,    -1,   345,    38,   345,    -1,   345,    41,   345,    -1,
     345,    39,   345,    -1,   345,    40,   345,    -1,   345,    51,
     326,    -1,   346,    -1,   293,    -1,    -1,   154,   293,   155,
     302,   291,    -1,    -1,    -1,   345,    27,   303,   345,    28,
     304,   345,    -1,    -1,   345,    27,    28,   305,   345,    -1,
     384,    -1,    60,   345,    -1,    59,   345,    -1,    58,   345,
      -1,    57,   345,    -1,    56,   345,    -1,    55,   345,    -1,
      54,   345,    -1,    67,   332,    -1,    -1,    53,   306,   345,
      -1,   341,    -1,   310,    -1,   311,    -1,   161,   333,   161,
      -1,    12,   345,    -1,    13,    -1,    -1,   312,   218,   307,
     154,   250,   155,   313,   157,   178,   158,    -1,    -1,   116,
     312,   218,   308,   154,   250,   155,   313,   157,   178,   158,
      -1,    13,   295,    -1,    13,   350,    -1,    13,   345,   128,
     295,    -1,    13,   345,   128,   350,    -1,   311,    64,   369,
     160,    -1,   310,    64,   369,   160,    -1,    82,    64,   369,
     160,    -1,   340,    64,   369,   160,    -1,   130,   154,   378,
     155,    -1,    64,   378,   160,    -1,   101,    -1,    -1,   108,
     154,   314,   155,    -1,   314,     8,    76,    -1,   314,     8,
      33,    76,    -1,    76,    -1,    33,    76,    -1,    -1,   167,
     316,   254,    -1,    -1,   149,   152,   167,   317,   254,    -1,
      -1,   152,   167,   318,   254,    -1,    -1,   324,   148,   373,
     319,   254,    -1,    -1,   324,   148,   360,   320,   254,    -1,
      -1,   362,   148,   373,   321,   254,    -1,    -1,   362,   148,
     360,   322,   254,    -1,    -1,   360,   323,   254,    -1,   116,
      -1,   167,    -1,   149,   152,   167,    -1,   152,   167,    -1,
     167,    -1,   149,   152,   167,    -1,   152,   167,    -1,   324,
      -1,   327,    -1,    -1,    -1,   366,   127,   328,   370,   329,
     330,    -1,   366,    -1,   330,   331,    -1,    -1,   127,   370,
      -1,    -1,   154,   155,    -1,   346,    -1,    -1,    81,    -1,
     380,    -1,    -1,   254,    -1,    72,    -1,    73,    -1,    82,
      -1,   136,    -1,   137,    -1,   151,    -1,   133,    -1,   134,
      -1,   135,    -1,   150,    -1,   144,    81,   145,    -1,   144,
     145,    -1,   324,   148,    74,    -1,   338,    -1,   335,    -1,
     389,    -1,   167,    -1,   149,   152,   167,    -1,   152,   167,
      -1,   130,   154,   342,   155,    -1,    64,   342,   160,    -1,
     336,    -1,   132,    -1,   339,    -1,   338,    64,   338,   160,
      -1,   338,    44,   338,    -1,   338,    45,   338,    -1,   338,
      47,   338,    -1,   338,    63,   338,    -1,   338,    48,   338,
      -1,   338,    49,   338,    -1,    50,   338,    -1,    52,   338,
      -1,   338,    31,   338,    -1,   338,    33,   338,    -1,   338,
      32,   338,    -1,   338,    43,   338,    -1,   338,    42,   338,
      -1,   338,    46,   338,    -1,   338,    10,   338,    -1,   338,
      11,   338,    -1,   338,     9,   338,    -1,   338,    30,   338,
      -1,   338,    29,   338,    -1,   338,    35,   338,    -1,   338,
      34,   338,    -1,   338,    37,   338,    -1,   338,    36,   338,
      -1,   338,    38,   338,    -1,   338,    39,   338,    -1,   338,
      41,   338,    -1,   338,    40,   338,    -1,   338,    27,    28,
     338,    -1,   338,    27,   338,    28,   338,    -1,    44,   338,
      -1,    45,   338,    -1,   154,   338,   155,    -1,   388,    -1,
     167,    -1,   149,   152,   167,    -1,   152,   167,    -1,    75,
      -1,   340,    -1,   390,    -1,   335,    -1,   162,   380,   162,
      -1,   144,   380,   145,    -1,   132,    -1,    -1,   344,   343,
      -1,    -1,     8,    -1,   344,     8,   338,   128,   338,    -1,
     344,     8,   338,    -1,   338,   128,   338,    -1,   338,    -1,
     347,    -1,   295,    -1,   154,   345,   155,    -1,   154,   309,
     155,    -1,   350,    -1,   350,    -1,   350,    -1,    -1,    -1,
     365,   127,   351,   370,   352,   359,   353,    -1,   365,    -1,
     353,   354,    -1,    -1,    -1,   127,   370,   355,   359,    -1,
     356,    64,   369,   160,    -1,   357,    64,   369,   160,    -1,
      -1,   358,   254,    -1,   357,    -1,   356,    -1,    -1,   367,
      -1,   374,   367,    -1,   324,   148,   360,    -1,   362,   148,
     360,    -1,   367,    -1,   363,    64,   369,   160,    -1,    -1,
     315,   364,    64,   369,   160,    -1,   366,    -1,   363,    -1,
     315,    -1,   367,    -1,   374,   367,    -1,   361,    -1,   367,
      64,   369,   160,    -1,   367,   157,   345,   158,    -1,   368,
      -1,    76,    -1,   159,   157,   345,   158,    -1,    -1,   345,
      -1,   372,    -1,    -1,   360,   371,    -1,   372,    64,   369,
     160,    -1,   372,   157,   345,   158,    -1,   373,    -1,    74,
      -1,   157,   345,   158,    -1,   159,    -1,   374,   159,    -1,
     375,     8,   376,    -1,   376,    -1,   350,    -1,    -1,   129,
     154,   377,   375,   155,    -1,    -1,    -1,   379,   343,    -1,
     379,     8,   345,   128,   345,    -1,   379,     8,   345,    -1,
     345,   128,   345,    -1,   345,    -1,   379,     8,   345,   128,
      33,   348,    -1,   379,     8,    33,   348,    -1,   345,   128,
      33,   348,    -1,    33,   348,    -1,   380,   381,    -1,   380,
      81,    -1,   381,    -1,    81,   381,    -1,    76,    -1,    -1,
      76,    64,   382,   383,   160,    -1,    76,   127,    74,    -1,
     146,   345,   158,    -1,   146,    75,    64,   345,   160,   158,
      -1,   147,   350,   158,    -1,    74,    -1,    77,    -1,    76,
      -1,   119,   154,   385,   155,    -1,   120,   154,   350,   155,
      -1,   120,   154,   295,   155,    -1,     7,   345,    -1,     6,
     345,    -1,     5,   154,   345,   155,    -1,     4,   345,    -1,
       3,   345,    -1,   387,    -1,    -1,   385,     8,   386,   387,
      -1,   350,    -1,   295,    -1,   324,   148,    74,    -1,   362,
     148,    74,    -1,   324,   148,   122,    -1,   324,   148,   122,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   223,   223,   227,   227,   228,   232,   233,   237,   238,
     239,   240,   241,   242,   242,   244,   244,   246,   247,   248,
     249,   253,   254,   258,   259,   260,   261,   265,   266,   270,
     271,   272,   273,   277,   278,   282,   283,   284,   285,   289,
     290,   294,   294,   295,   300,   301,   302,   303,   308,   309,
     313,   314,   314,   314,   315,   315,   315,   316,   316,   316,
     317,   317,   317,   321,   323,   325,   318,   327,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   343,   344,   342,   347,   348,   346,   350,
     350,   351,   352,   353,   352,   355,   356,   360,   361,   362,
     363,   364,   361,   368,   369,   369,   373,   374,   378,   379,
     383,   383,   383,   387,   388,   392,   396,   400,   404,   405,
     409,   410,   414,   414,   421,   420,   427,   426,   436,   437,
     438,   439,   443,   444,   448,   451,   453,   456,   458,   462,
     463,   467,   468,   472,   473,   474,   474,   478,   479,   484,
     485,   490,   491,   496,   497,   502,   503,   504,   505,   510,
     511,   511,   512,   512,   517,   518,   523,   524,   529,   531,
     531,   535,   537,   537,   541,   543,   547,   549,   554,   555,
     560,   561,   565,   567,   573,   574,   575,   576,   581,   582,
     583,   588,   589,   593,   594,   595,   596,   600,   601,   606,
     607,   608,   613,   614,   615,   616,   622,   623,   628,   628,
     629,   630,   631,   631,   637,   641,   642,   646,   647,   650,
     652,   656,   657,   661,   662,   666,   670,   671,   675,   676,
     680,   684,   685,   689,   690,   694,   695,   699,   700,   704,
     705,   709,   710,   714,   715,   716,   717,   718,   719,   723,
     724,   725,   726,   730,   731,   735,   736,   741,   742,   746,
     746,   747,   751,   752,   756,   757,   761,   761,   762,   763,
     767,   768,   768,   773,   773,   777,   777,   778,   779,   780,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   798,
     799,   799,   800,   800,   801,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   830,   831,   832,   831,   834,
     834,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   845,   846,   847,   848,   849,   850,   851,   852,   852,
     855,   855,   861,   862,   863,   864,   868,   869,   870,   871,
     875,   876,   880,   883,   885,   889,   890,   891,   892,   896,
     896,   898,   898,   900,   900,   902,   902,   904,   904,   906,
     906,   908,   908,   910,   910,   915,   916,   917,   918,   922,
     923,   924,   930,   931,   936,   937,   936,   939,   944,   945,
     950,   954,   955,   956,   960,   961,   962,   967,   968,   973,
     974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
     984,   988,   992,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,  1009,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1045,  1046,  1047,  1048,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1062,  1063,  1066,
    1068,  1072,  1073,  1074,  1075,  1079,  1080,  1084,  1085,  1090,
    1095,  1100,  1105,  1106,  1105,  1108,  1112,  1113,  1118,  1118,
    1122,  1123,  1127,  1127,  1132,  1133,  1134,  1138,  1139,  1143,
    1144,  1149,  1153,  1154,  1154,  1159,  1160,  1161,  1166,  1167,
    1168,  1172,  1173,  1174,  1179,  1180,  1184,  1185,  1190,  1191,
    1191,  1195,  1196,  1197,  1201,  1202,  1206,  1207,  1211,  1212,
    1217,  1218,  1218,  1219,  1224,  1225,  1229,  1230,  1231,  1232,
    1233,  1234,  1235,  1236,  1240,  1241,  1242,  1243,  1249,  1250,
    1250,  1251,  1252,  1253,  1254,  1259,  1260,  1261,  1266,  1267,
    1268,  1269,  1270,  1271,  1272,  1273,  1277,  1278,  1278,  1282,
    1283,  1287,  1288,  1292,  1296
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"", "'='",
  "\"**= (T_POW_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"<<= (T_SL_EQUAL)\"",
  "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"&= (T_AND_EQUAL)\"",
  "\"%= (T_MOD_EQUAL)\"", "\".= (T_CONCAT_EQUAL)\"",
  "\"/= (T_DIV_EQUAL)\"", "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"",
  "\"** (T_POW)\"", "'['", "\"clone (T_CLONE)\"", "\"new (T_NEW)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"",
  "\"else (T_ELSE)\"", "\"endif (T_ENDIF)\"",
  "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"public (T_PUBLIC)\"", "\"protected (T_PROTECTED)\"",
  "\"private (T_PRIVATE)\"", "\"final (T_FINAL)\"",
  "\"abstract (T_ABSTRACT)\"", "\"static (T_STATIC)\"", "\"var (T_VAR)\"",
  "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "\"... (T_ELLIPSIS)\"", "'('", "')'", "';'",
  "'{'", "'}'", "'$'", "']'", "'`'", "'\"'", "$accept", "start",
  "top_statement_list", "$@1", "namespace_name", "top_statement", "$@2",
  "$@3", "use_declarations", "use_declaration",
  "use_function_declarations", "use_function_declaration",
  "use_const_declarations", "use_const_declaration",
  "constant_declaration", "inner_statement_list", "$@4", "inner_statement",
  "statement", "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9",
  "@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "$@22", "$@23", "catch_statement", "$@24",
  "$@25", "$@26", "$@27", "finally_statement", "$@28",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@29", "$@30", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "is_variadic", "unticked_function_declaration_statement",
  "$@31", "unticked_class_declaration_statement", "$@32", "$@33",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "$@34", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@35", "$@36", "case_separator",
  "while_statement", "elseif_list", "$@37", "new_elseif_list", "$@38",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "parameter", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "function_call_parameter", "global_var_list", "global_var",
  "static_var_list", "class_statement_list", "class_statement", "$@39",
  "$@40", "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@41",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "$@42", "instance_call", "$@43", "new_expr",
  "$@44", "expr_without_variable", "$@45", "$@46", "$@47", "$@48", "$@49",
  "$@50", "@51", "$@52", "$@53", "$@54", "$@55", "@56", "@57",
  "yield_expr", "combined_scalar_offset", "combined_scalar", "function",
  "lexical_vars", "lexical_var_list", "function_call", "@58", "@59", "@60",
  "@61", "$@62", "$@63", "$@64", "$@65", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@66", "$@67",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_class_constant",
  "static_scalar", "static_scalar_value", "static_operation",
  "general_constant", "scalar", "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "parenthesis_expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@68", "$@69",
  "variable_properties", "variable_property", "$@70",
  "array_method_dereference", "method", "@71", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@72",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@73", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@74", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@75",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@76", "isset_variable", "class_constant", "static_class_name_scalar",
  "class_name_scalar", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,    61,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    63,    58,   280,
     281,   124,    94,    38,   282,   283,   284,   285,    60,    62,
     286,   287,   288,   289,    43,    45,    46,    42,    47,    37,
      33,   290,   126,    64,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,    91,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,    40,    41,    59,   123,   125,    36,
      93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   166,   165,   165,   167,   167,   168,   168,
     168,   168,   168,   169,   168,   170,   168,   168,   168,   168,
     168,   171,   171,   172,   172,   172,   172,   173,   173,   174,
     174,   174,   174,   175,   175,   176,   176,   176,   176,   177,
     177,   179,   178,   178,   180,   180,   180,   180,   181,   181,
     182,   183,   184,   182,   185,   186,   182,   187,   188,   182,
     189,   190,   182,   191,   192,   193,   182,   194,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   195,   196,   182,   197,   198,   182,   199,
     182,   182,   200,   201,   182,   182,   182,   202,   203,   204,
     205,   206,   202,   207,   208,   207,   209,   209,   210,   210,
     212,   213,   211,   214,   214,   215,   216,   217,   218,   218,
     219,   219,   221,   220,   223,   222,   224,   222,   225,   225,
     225,   225,   226,   226,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   232,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   238,   238,   239,
     240,   239,   241,   239,   242,   242,   243,   243,   244,   245,
     244,   246,   247,   246,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   253,   253,   253,   254,   254,
     254,   255,   255,   256,   256,   256,   256,   257,   257,   258,
     258,   258,   259,   259,   259,   259,   260,   260,   262,   261,
     261,   261,   263,   261,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   269,   269,   270,   271,   271,   272,   272,
     273,   274,   274,   275,   275,   276,   276,   277,   277,   278,
     278,   279,   279,   280,   280,   280,   280,   280,   280,   281,
     281,   281,   281,   282,   282,   283,   283,   284,   284,   286,
     285,   285,   287,   287,   288,   288,   290,   289,   289,   289,
     291,   292,   291,   294,   293,   296,   295,   295,   295,   297,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   298,   295,
     299,   295,   300,   295,   301,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   302,   295,   303,   304,   295,   305,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     306,   295,   295,   295,   295,   295,   295,   295,   307,   295,
     308,   295,   309,   309,   309,   309,   310,   310,   310,   310,
     311,   311,   312,   313,   313,   314,   314,   314,   314,   316,
     315,   317,   315,   318,   315,   319,   315,   320,   315,   321,
     315,   322,   315,   323,   315,   324,   324,   324,   324,   325,
     325,   325,   326,   326,   328,   329,   327,   327,   330,   330,
     331,   332,   332,   332,   333,   333,   333,   334,   334,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   336,   337,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   340,   340,   340,   340,
     341,   341,   341,   341,   341,   341,   341,   342,   342,   343,
     343,   344,   344,   344,   344,   345,   345,   346,   346,   347,
     348,   349,   351,   352,   350,   350,   353,   353,   355,   354,
     356,   356,   358,   357,   359,   359,   359,   360,   360,   361,
     361,   362,   363,   364,   363,   365,   365,   365,   366,   366,
     366,   367,   367,   367,   368,   368,   369,   369,   370,   371,
     370,   372,   372,   372,   373,   373,   374,   374,   375,   375,
     376,   377,   376,   376,   378,   378,   379,   379,   379,   379,
     379,   379,   379,   379,   380,   380,   380,   380,   381,   382,
     381,   381,   381,   381,   381,   383,   383,   383,   384,   384,
     384,   384,   384,   384,   384,   384,   385,   386,   385,   387,
     387,   388,   388,   389,   390
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     4,
       2,     3,     1,     1,     3,     2,     4,     3,     1,     1,
       3,     2,     4,     3,     1,     1,     3,     2,     4,     5,
       4,     0,     3,     0,     1,     1,     1,     4,     1,     2,
       3,     0,     0,     7,     0,     0,    10,     0,     0,     5,
       0,     0,     7,     0,     0,     0,    12,     0,     4,     2,
       3,     2,     3,     2,     3,     3,     2,     3,     3,     3,
       1,     2,     5,     0,     0,    10,     0,     0,    10,     0,
       6,     1,     0,     0,     8,     3,     3,     0,     0,     0,
       0,     0,    13,     0,     0,     5,     1,     0,     1,     2,
       0,     0,    10,     1,     3,     1,     1,     1,     0,     1,
       0,     1,     0,    10,     0,     8,     0,     7,     1,     2,
       1,     2,     0,     2,     1,     0,     2,     0,     2,     1,
       3,     0,     2,     1,     2,     0,     5,     1,     4,     1,
       4,     1,     4,     3,     5,     3,     4,     4,     5,     0,
       0,     6,     0,     5,     1,     1,     1,     4,     0,     0,
       5,     0,     0,     6,     0,     2,     0,     3,     1,     0,
       1,     3,     4,     6,     0,     1,     1,     1,     2,     3,
       3,     1,     3,     1,     1,     2,     2,     3,     1,     1,
       2,     4,     3,     5,     1,     3,     2,     0,     0,     4,
       2,     1,     0,     9,     3,     1,     3,     1,     3,     0,
       1,     1,     2,     2,     2,     3,     1,     3,     1,     1,
       3,     4,     3,     0,     1,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     0,
       4,     1,     2,     1,     4,     3,     0,     3,     1,     1,
       0,     0,     2,     0,     4,     0,     7,     3,     4,     0,
       7,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     0,     5,     0,     0,     7,     0,
       5,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     3,     1,     1,     1,     3,     2,     1,     0,    10,
       0,    11,     2,     2,     4,     4,     4,     4,     4,     4,
       4,     3,     1,     0,     4,     3,     4,     1,     2,     0,
       3,     0,     5,     0,     4,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     3,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     0,     0,     6,     1,     2,     0,
       2,     0,     2,     1,     0,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     1,     1,     1,     1,     3,     2,     4,     3,
       1,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     5,     2,     2,     3,     1,     1,     3,     2,
       1,     1,     1,     1,     3,     3,     1,     0,     2,     0,
       1,     5,     3,     3,     1,     1,     1,     3,     3,     1,
       1,     1,     0,     0,     7,     1,     2,     0,     0,     4,
       4,     4,     0,     2,     1,     1,     0,     1,     2,     3,
       3,     1,     4,     0,     5,     1,     1,     1,     1,     2,
       1,     4,     4,     1,     1,     4,     0,     1,     1,     0,
       2,     4,     4,     1,     1,     3,     1,     2,     3,     1,
       1,     0,     5,     0,     0,     2,     5,     3,     3,     1,
       6,     4,     4,     2,     2,     2,     1,     2,     1,     0,
       5,     3,     3,     6,     3,     1,     1,     1,     4,     4,
       4,     2,     2,     4,     2,     2,     1,     0,     4,     1,
       1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   357,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   554,     0,     0,   411,
       0,   419,   420,     6,   480,   534,    80,   421,     0,    60,
      57,     0,     0,    89,     0,     0,     0,     0,   372,     0,
       0,    92,     0,     0,     0,     0,     0,   395,     0,     0,
       0,     0,   128,   130,   134,     0,     0,   486,   425,   426,
     427,   422,   423,     0,     0,   428,   424,     0,     0,    91,
      43,   546,   414,     0,   477,     4,     0,     8,    48,     9,
      10,   116,   117,     0,     0,   333,   496,     0,   353,   354,
     118,   527,     0,   483,   481,   352,     0,   332,   495,     0,
     499,   393,   530,     0,   526,   505,   525,   528,   533,     0,
     341,   476,   482,   357,     6,   395,     0,   118,   585,   584,
       0,   582,   581,   356,   496,     0,   499,   319,   320,   321,
     322,     0,   348,   347,   346,   345,   344,   343,   342,   395,
       0,     0,   379,     0,   297,   501,     0,   295,     0,   559,
       0,   489,   281,     0,     0,   396,   402,   273,   403,     0,
     407,   528,     0,     0,   349,   413,     0,    51,    49,   536,
       0,   256,     0,     0,   257,     0,     0,    67,    69,     0,
      71,     0,     0,     0,    73,   496,     0,   499,     0,     0,
       0,     0,     0,    23,     0,    22,   199,     0,     0,   198,
     131,   129,   204,     0,   118,     0,     0,     0,     0,   275,
     554,   568,     0,   430,     0,     0,     0,   566,     0,    15,
       0,   479,   333,     0,     0,    41,     0,   415,     0,   416,
       0,     0,     0,     0,     0,    20,   132,   126,    76,   536,
     536,   119,   358,     0,     0,   536,   302,     0,   304,   336,
     298,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,   296,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   536,   502,   536,     0,   547,   529,   358,     0,     0,
     351,     0,   383,     0,     0,   563,   500,     0,   371,   490,
     555,     0,   398,     0,   417,     0,   404,   529,   412,    54,
       0,   537,     0,     0,    79,     0,    58,     0,   258,   261,
     496,   499,     0,     0,    70,    72,    96,     0,    74,    75,
      43,    95,     0,    29,     0,    28,     0,    35,     0,    34,
      25,     0,     0,    17,     0,   200,   499,     0,    77,     0,
       0,    78,   360,     0,   113,   115,   496,   499,     0,   586,
     496,   499,     0,   553,     0,   569,     0,   429,   567,   480,
       0,     0,   565,   485,   564,   478,     5,    12,    13,     0,
     334,   498,   497,    50,     0,     0,   355,   484,     7,     0,
     380,     0,     0,   124,   135,     0,     0,   122,     0,   536,
     591,   594,     0,   519,   517,   385,     0,     0,     0,   306,
       0,   339,     0,     0,     0,   307,   309,   308,   324,   323,
     326,   325,   327,   329,   330,   328,   318,   317,   311,   312,
     310,   313,   315,   316,   331,   314,     0,   277,   285,   293,
     292,   291,   290,   289,   288,   287,   286,   284,   283,   282,
     394,   592,   520,   389,     0,     0,     0,     0,   583,   496,
     499,   381,   544,     0,   558,     0,   557,   397,   519,   418,
     274,   520,     0,    43,    52,   368,   255,    61,     0,    63,
     259,    86,    83,     0,     0,   159,   159,    68,     0,     0,
       0,     0,   487,   421,     0,   441,     0,     0,     0,     0,
     435,     0,   433,   440,    40,   432,   442,   434,    41,    31,
       0,     0,    18,    37,     0,     0,    19,     0,    24,    21,
       0,   197,   205,   202,     0,     0,     0,   587,   578,   580,
     579,    11,     0,   550,     0,   549,   370,     0,   571,     0,
     572,   574,     0,     3,     5,   384,   270,     0,    42,    44,
      45,    46,   535,     0,     0,   188,     0,   191,   496,     0,
     499,     0,     0,     0,   399,   133,   137,     0,     0,   367,
     366,     0,   184,     0,     0,     0,     0,   518,   369,   303,
     305,     0,     0,   299,   301,     0,   278,     0,     0,   522,
     539,   503,   538,   543,   531,   532,   562,   561,     0,   405,
      41,   168,     0,    43,   166,    59,   257,     0,     0,     0,
       0,     0,     0,   159,     0,   159,     0,   473,   474,   450,
     451,   494,     0,   489,   487,     0,     0,   437,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,    30,
      27,     0,    36,    33,    26,   201,     0,   184,   114,    82,
       0,   551,   553,     0,   575,   577,   576,     0,     0,   382,
      16,     3,   335,     0,     0,   195,   196,     0,   189,   190,
      39,     0,   401,     0,     0,   136,   139,   207,   184,   185,
     186,     0,   178,   180,   118,   187,   524,   545,   388,   386,
     340,   337,   279,   392,   390,   540,   516,   536,     0,     0,
     556,   409,   171,   174,     0,    41,     0,   260,     0,     0,
     141,   143,   141,   153,     0,    43,   151,    90,     0,     0,
       0,     0,     0,   155,     0,   439,   490,   488,     0,   436,
     475,   431,   593,   460,   458,   459,     0,     0,   462,   461,
     452,   454,   453,   464,   463,   466,   465,   467,   468,   470,
     469,   456,   455,   444,   445,   457,   446,   448,   449,   447,
       0,     0,    93,    32,    38,   203,     0,   588,   553,   548,
       0,   570,     0,    14,   536,     0,   269,   268,   272,   263,
       0,   192,   400,   138,   207,     0,   239,     0,   373,   184,
     120,     0,   417,   515,   514,     0,   507,     0,     0,   560,
     406,   176,     0,     0,    53,    62,     0,    64,   144,   145,
       0,     0,     0,     0,    41,     0,   157,     0,   164,   165,
     162,   156,   493,   492,   438,   471,     0,   443,    98,   103,
     373,     0,   276,   573,     0,   508,   262,   536,     0,    47,
     239,   140,     0,     0,   243,   244,   245,   248,   247,   246,
     238,   127,   206,   211,   208,     0,   237,   241,     0,     0,
       0,     0,   181,   121,     0,   338,   280,   536,   536,   513,
     504,   541,   542,     0,   408,     0,     0,     0,   169,   175,
     167,   257,   553,   142,    87,    84,   154,     0,   158,   160,
      43,     0,   472,     0,   104,    94,     0,   552,   265,   516,
       0,   267,   125,     0,     0,   215,     0,   118,   242,     0,
     210,    43,     0,    43,   182,     0,     0,   506,   410,     0,
      43,     0,     0,     0,     0,     0,     0,   152,    43,    41,
     491,    99,     0,    43,   509,   264,     0,     0,   217,   219,
     214,   251,     0,     0,     0,    41,     0,   377,     0,    41,
       0,   510,   511,   172,    41,    56,   170,    65,   146,    43,
     149,    88,    85,    41,     0,    43,    41,   254,   216,     6,
       0,   220,   221,     0,     0,   229,     0,     0,     0,     0,
     209,   212,     0,   123,   378,     0,   374,   359,   183,    43,
       0,    41,     0,    41,   361,   218,   222,   223,   233,     0,
     224,     0,   252,   249,     0,   253,     0,   375,    41,    43,
     147,    66,     0,   100,   105,     0,   232,   225,   226,   230,
       0,   184,   376,    41,   150,     0,   231,     0,   250,     0,
       0,    43,   227,     0,   148,    41,   235,    43,   213,   101,
      41,   107,   236,     0,   102,   106,   108,     0,   109,   110,
       0,     0,   111,     0,    43,    41,   112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    84,    85,   564,   396,   204,   205,
     354,   355,   358,   359,    86,   235,   404,   568,  1000,    88,
     330,   621,   493,   742,   183,   498,   182,   622,   626,   921,
    1030,   343,   629,   966,   628,   965,   186,   198,   869,   802,
     933,  1004,  1065,  1081,   935,   972,  1084,  1085,  1086,  1090,
    1093,   373,   374,    89,    90,   252,   904,    91,   591,    92,
     586,   414,    93,   413,    94,   588,   714,   715,   851,   750,
     922,  1051,  1001,   757,   504,   507,   634,   968,   930,   860,
     625,   743,   962,   841,  1029,   844,   917,   721,   722,   723,
     724,   489,   576,   577,   208,   209,   213,   826,   892,   946,
    1044,   893,   944,   980,  1010,  1011,  1012,  1013,  1057,  1014,
    1015,  1016,  1055,  1078,   894,   895,   896,   897,   982,   898,
     180,   337,   338,   627,   816,   817,   818,   878,   702,   703,
      95,   324,    96,   383,   832,   433,   434,   428,   430,   566,
     432,   831,   601,   141,   418,   544,    97,    98,    99,   127,
     901,   988,   101,   243,   562,   399,   596,   595,   608,   607,
     299,   102,   725,   167,   168,   492,   741,   840,   914,   174,
     238,   490,   103,   523,   524,   525,   526,   104,   105,   642,
     320,   643,   331,   107,   108,   315,   109,   110,   475,   736,
     910,   819,   939,   833,   834,   835,   836,   111,   112,   113,
     114,   253,   115,   116,   117,   118,   332,   611,   735,   612,
     613,   119,   554,   555,   808,   160,   161,   226,   227,   557,
     697,   120,   378,   690,   379,   121,   527,   122
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -852
static const yytype_int16 yypact[] =
{
    -852,    79,   104,  -852,  1849,  4304,  4304,   -36,  4304,  4304,
    4304,  4304,  4304,  4304,  4304,  4304,  -852,  4304,  4304,  4304,
    4304,  4304,  4304,  4304,   209,   209,  3089,  4304,   375,   -33,
     -31,  -852,  -852,    98,  -852,  -852,  -852,    74,  4304,  -852,
    -852,   -13,   106,  -852,   -31,  3224,  3359,    72,  -852,    87,
    3494,  -852,  4304,   172,    41,   105,   141,    -2,   111,   118,
     124,   137,  -852,  -852,  -852,   142,   145,  -852,  -852,  -852,
    -852,  -852,  -852,   427,    73,  -852,  -852,   256,  4439,  -852,
    -852,   164,   336,   429,   -60,  -852,    14,  -852,  -852,  -852,
    -852,  -852,  -852,   260,   268,  -852,  -852,   192,   288,   296,
     329,   310,   232,  -852,   325,  -852,  4972,  -852,  -852,    36,
    1248,  -852,  -852,   258,   349,   292,  -852,    -6,  -852,    49,
    -852,  -852,  -852,  -852,  -852,   320,   273,   329,  5708,  5708,
    4304,  5708,  5708,  5941,   -46,  5315,   909,   379,   379,    40,
     379,  4304,   379,   379,   379,   379,   379,   379,   379,  -852,
     287,   256,   -20,   314,  -852,  -852,   316,  -852,   209,  5387,
     295,   450,  -852,   313,   256,   338,   344,  -852,  -852,   345,
     369,    48,    49,  3629,  -852,  -852,  4439,   471,  -852,  4304,
      15,  5708,  2684,   -31,  4304,  4304,   350,  -852,  -852,  5015,
    -852,  5058,   353,   492,  -852,   356,  5708,  1139,   358,  5102,
       1,    82,   256,   -16,    18,  -852,  -852,   194,    19,  -852,
    -852,  -852,   504,    23,   329,   209,  4304,  4304,   373,  -852,
    3089,    -8,   264,  -852,  4574,   209,   469,  -852,   256,  -852,
     -51,   107,   377,   385,  5145,   400,  4304,   143,   403,   454,
     143,    69,   493,   423,   505,  -852,   453,  -852,  -852,  4304,
    4304,  -852,   513,   525,   176,  4304,  -852,  4304,  -852,   562,
    -852,  -852,  4304,  4304,  4304,  4304,  4304,  4304,  4304,  4304,
    4304,  4304,  4304,  4304,  4304,  4304,  4304,  4304,  4304,  4304,
    4304,   375,  4304,  -852,  -852,  -852,  3764,  4304,  4304,  4304,
    4304,  4304,  4304,  4304,  4304,  4304,  4304,  4304,  4304,   423,
      63,  4304,  -852,  4304,  4304,   164,    60,  -852,  5188,  4304,
     379,   256,   129,   190,   190,  -852,  -852,  3899,  -852,  4034,
    -852,   256,   338,    67,   423,    67,  -852,     0,  -852,  -852,
    2684,  5708,   432,  4304,  -852,   512,  -852,   456,   600,  5708,
     524,  1592,   544,     5,  -852,  -852,  -852,  5536,  -852,  -852,
    -852,  -852,   256,   155,    26,  -852,   256,   165,    28,  -852,
     174,   545,   166,  -852,  4304,  -852,  -852,    41,  -852,  5536,
     577,  -852,  -852,    33,  -852,  -852,    34,   376,    35,  -852,
     466,  1159,   498,   291,   502,  -852,   584,  -852,  -852,   595,
    1779,   503,  -852,  -852,  -852,   270,  -852,  -852,  -852,   423,
    -852,  -852,  -852,  -852,  2009,  4710,  -852,  -852,  -852,  2819,
    -852,   651,    89,  -852,   542,   509,   510,  -852,   517,  4304,
     518,  -852,  4304,   520,     0,  -852,    49,   519,  4304,  5868,
    4304,  -852,  4304,  4304,  4304,  3005,  3275,  3678,  3813,  3813,
    3813,  3813,  1825,  1825,  1825,  1825,   770,   770,   535,   535,
     535,    40,    40,    40,  -852,   379,   163,  5941,  5941,  5941,
    5941,  5941,  5941,  5941,  5941,  5941,  5941,  5941,  5941,  5941,
    -852,   518,   523,  -852,   521,   190,   522,  4753,  -852,   -40,
     987,   132,  -852,   209,  5708,   209,  5430,   338,  -852,  -852,
    -852,  -852,   190,  -852,  -852,  -852,  5708,  -852,  2144,  -852,
    -852,  -852,  -852,   664,    39,   528,   529,  -852,  5536,  5536,
    5536,  5536,  5536,  -852,   536,  -852,   -14,   540,   256,  5536,
     -20,   548,  -852,  -852,  -852,  1374,  -852,  -852,   537,   189,
     624,     1,  -852,   226,   625,    82,  -852,   626,  -852,  -852,
    4796,  -852,  -852,   687,   551,   209,   553,  -852,  -852,  -852,
    -852,  -852,   556,  -852,    43,  -852,  -852,   380,  -852,  4304,
    -852,  -852,   423,   555,  -852,  -852,    17,   557,  -852,  -852,
    -852,  -852,  -852,   209,  4304,  -852,    44,  -852,    47,   561,
     452,  5536,   566,   256,   338,  -852,   594,    89,   564,  -852,
    -852,   568,   371,   563,  4840,   423,   423,     0,  -852,  5790,
    5941,  4304,  5665,  6081,  6148,   375,  -852,   423,   423,  -852,
    -852,  -852,    12,  -852,  -852,  -852,  -852,  -852,  4169,  -852,
     360,  -852,   -31,  -852,  -852,  -852,  4304,  4304,     6,     6,
    5536,   652,  2279,  -852,   -10,  -852,   -28,   547,   547,   293,
     293,  5487,   565,   724,  5536,   588,   256,   129,  5232,    -9,
    5536,  5536,  5536,  5258,  5536,  5536,  5536,  5536,  5536,  5536,
    5536,  5536,  5536,  5536,  5536,  5536,  5536,  5536,  5536,  5536,
    5536,  5536,  5536,  5536,  5536,  5536,  5536,   629,   663,  -852,
    -852,   665,  -852,  -852,  -852,  -852,  5536,   371,  -852,  -852,
    4304,  -852,   291,   722,  -852,  -852,  -852,   581,  1542,  -852,
    -852,   585,  -852,    32,   590,  -852,  5708,  2954,  -852,  -852,
    -852,   256,   338,    89,   589,   739,  -852,  -852,   371,  -852,
    -852,   593,   741,  -852,   329,  -852,  -852,  -852,  -852,  -852,
    6012,  -852,  -852,  -852,  -852,  -852,   601,  4304,  4304,   209,
    5708,  -852,  -852,   184,   598,   671,   602,  5708,   209,   605,
     632,  -852,   632,  -852,   747,  -852,  -852,  -852,   442,   616,
    4304,    16,   179,  -852,  5536,  -852,  5536,  -852,   627,   132,
    -852,  -852,  -852,  5750,  5829,  5903,  5536,  5592,  6046,  6114,
    2870,  3139,  3408,  3543,  3543,  3543,  3543,  1634,  1634,  1634,
    1634,   507,   507,   547,   547,   547,   293,   293,   293,   293,
    1698,   631,  -852,  -852,  -852,  -852,   628,  -852,   291,  -852,
    4304,  -852,   622,  -852,  4304,   190,   659,   187,  -852,  -852,
     633,  -852,   338,   739,  -852,    89,   654,   636,   679,   367,
     635,  4304,   423,   735,   738,   423,  -852,   646,  4883,  -852,
     681,   302,   -31,  2684,  -852,  -852,   653,  -852,  -852,  -852,
       6,   655,   656,  5536,   728,   669,  -852,  4928,  -852,  -852,
    -852,  -852,  1374,  5530,  -852,  5976,  5536,  -852,  -852,   725,
     679,    52,  5941,  -852,   668,  -852,  -852,  4304,   659,  -852,
     918,  -852,   756,    89,  -852,  -852,  -852,  -852,  -852,  -852,
    -852,  -852,  -852,  -852,  -852,   320,   662,  -852,    29,   675,
     680,   678,  -852,  -852,   762,  6012,  -852,  4304,  4304,  -852,
     659,  -852,  -852,   190,  -852,   -31,   811,   769,  -852,  -852,
    -852,  4304,   291,  -852,  -852,  -852,  -852,   685,  -852,  -852,
    -852,  5536,  5976,    89,  -852,  -852,   686,  -852,  -852,   601,
     684,   659,  -852,   831,    11,  -852,   774,   329,  -852,   777,
    -852,  -852,    38,  -852,   838,   693,   694,  -852,  -852,   827,
    -852,   700,  2684,   702,    54,  2414,  2414,  -852,  -852,   197,
    1374,  -852,   701,  -852,  -852,  -852,  5536,    89,  -852,   154,
    -852,   846,    30,   787,   848,   706,   790,  -852,    55,   710,
    5536,  -852,  -852,  -852,   826,  -852,  -852,  -852,  -852,  -852,
    -852,  -852,  -852,   290,   828,  -852,   744,  -852,  -852,   810,
     748,   154,  -852,   752,   817,   803,   757,   766,  5536,   839,
    -852,  -852,  5536,  -852,  -852,    57,  -852,  -852,  -852,  -852,
    2549,   829,   761,   759,  -852,  -852,  -852,  -852,   682,    89,
    -852,   847,  -852,   906,   782,  -852,   861,  -852,   491,  -852,
    -852,  -852,   783,  -852,  -852,   864,   866,   933,  -852,  -852,
    5536,   371,  -852,   854,  -852,   786,  -852,    89,  -852,   789,
     793,  -852,  -852,   247,  -852,   788,  -852,  -852,  -852,  -852,
     796,   840,  -852,   794,  -852,   840,  -852,    89,  -852,  -852,
     874,   802,  -852,   804,  -852,   801,  -852
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -852,  -852,  -384,  -852,   -24,  -852,  -852,  -852,  -852,   603,
    -852,   420,  -852,   425,  -852,   167,  -852,  -852,    24,  -852,
    -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,
    -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,
    -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,  -123,  -852,
    -852,  -852,   419,   569,   570,  -125,  -852,  -852,  -852,  -852,
    -852,  -852,  -852,  -852,  -852,  -852,  -852,   255,   217,  -615,
    -852,  -852,     9,  -852,  -852,  -852,  -440,  -852,  -852,   115,
    -852,  -852,  -852,  -852,  -852,  -852,  -852,  -678,  -852,   147,
    -852,  -226,  -852,   271,  -852,   610,  -852,   156,  -852,  -852,
    -852,  -852,  -852,  -852,  -852,  -852,   -32,  -852,  -852,  -852,
    -852,  -852,  -852,  -852,  -852,  -852,  -852,  -851,  -852,  -852,
    -852,  -621,  -852,  -852,   103,  -852,  -852,  -852,  -852,  -852,
     904,  -852,     7,  -852,  -852,  -852,  -852,  -852,  -852,  -852,
    -852,  -852,  -852,  -852,  -852,  -852,   -65,  -852,  -852,     4,
     114,  -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,  -852,
    -852,   219,  -260,  -266,  -852,  -852,  -852,  -852,  -852,  -852,
    -852,   157,   860,  -852,  -310,   792,  -852,  -852,  -852,   346,
     348,  -852,  1069,   -19,   781,  -453,   411,    -4,  -852,  -852,
    -852,  -744,  -852,  -852,  -852,  -852,    53,  -230,  -852,   208,
    -852,  -852,  -852,   -25,   -12,  -852,  -201,  -486,  -852,  -852,
      -5,    50,  -773,   301,  -852,   776,  -852,   364,   307,  -852,
    -852,  -852,  -852,  -852,   309,  -852,  -852,  -852
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -591
static const yytype_int16 yytable[] =
{
     152,   152,   307,   170,   165,   746,   619,   136,   100,   806,
     175,   177,   563,   233,   752,   454,   171,   410,   134,   977,
     155,   155,   244,   333,   423,   187,   362,   367,    87,   203,
     616,   370,   617,   505,   531,   871,   535,   949,  1019,   748,
     827,   545,  -590,   547,   858,   948,   197,   631,   415,   416,
     230,   692,   707,   231,   427,  -193,   385,   195,   303,   542,
     692,   214,   692,  1025,   303,   771,   636,   645,   760,   761,
     472,   986,   876,   470,   212,   124,   737,   361,   172,     3,
     124,  -271,    35,   423,   472,   759,   760,   761,  -396,   372,
    1046,   281,   242,   488,  -379,   491,   814,   284,   285,    48,
     474,   242,   476,   282,    -2,   397,   398,   306,   233,  -362,
    -362,   233,   303,   772,   987,  -364,  -364,   206,   130,   386,
     705,   173,   149,   176,   303,    35,   178,   312,  -396,   214,
     763,   223,   242,  1047,   152,   749,   242,   471,   179,    35,
     322,   184,  -521,    35,  -271,   221,   192,   124,  -517,   964,
     392,   304,   585,   352,   316,   150,   124,   304,   151,   815,
     327,   193,   506,   124,   336,    81,   957,   978,   979,   738,
     245,   334,   859,   565,   363,   368,   353,   357,   360,   371,
     701,   341,   532,   152,   536,   950,  1020,  1056,   546,  -590,
     548,   152,   340,   758,   632,   762,  -521,   876,   693,   708,
     207,   152,  -193,   366,   395,   304,   335,   937,   305,   998,
    1026,   375,   377,   381,  -518,   224,   225,   304,   593,   221,
     422,   391,    81,   376,   380,   228,    81,   210,  1009,   605,
     229,   407,   156,   156,   356,   923,   169,   124,   582,    35,
     124,   583,   424,   153,   153,   610,   124,   166,   530,   425,
     420,   877,    35,   842,   843,  -398,   170,   165,   534,   242,
     185,  -383,   610,   211,   482,   215,    35,   537,   124,   171,
      35,   710,   216,   200,   201,   760,   761,  -398,   217,   149,
    -397,   242,   678,   124,   242,    35,   839,   481,   424,   224,
     225,   218,  -163,  -163,  -163,   473,   219,   487,   421,   220,
     963,   424,   424,   582,   426,   480,   583,   242,   425,   473,
     149,   424,   150,   424,  -266,   151,   479,   242,   202,   681,
     753,   236,    81,   520,   202,   149,   242,   716,   529,   875,
     124,   172,   533,   422,   246,    81,   699,   861,   203,   732,
     221,   242,   247,   150,   579,   520,   151,   422,   248,    81,
     426,   364,   249,    81,   494,  -163,   675,   676,   150,   152,
     250,   151,   251,   426,   426,   124,   156,    35,    81,   728,
     729,   915,   916,   426,  -523,   426,   805,   153,   242,   553,
     254,   733,   734,  1069,  -589,  -161,  -161,  -161,   584,   255,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,  1076,  1077,   580,   300,   149,   100,   387,
     224,   225,   221,   301,   597,   156,   578,   237,  -397,   302,
     552,    48,   242,   156,  -381,   228,   153,   958,   569,   -55,
     -55,   -55,   152,   156,   153,   154,   157,  -501,  -501,   311,
     150,   124,   282,   151,   153,   124,   239,   241,  -161,   124,
      81,    35,   606,   716,   694,   318,   695,   696,   319,   152,
    -194,   152,   313,   424,   314,   321,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   316,
     424,   316,   224,   225,   520,   520,   520,   520,   520,   169,
     242,   149,   323,   325,   647,   520,   326,   719,   720,   329,
     166,   719,   720,   221,   342,   221,   347,   353,   222,   346,
     240,   357,   348,  -501,  -501,   350,   582,   528,   369,   583,
     582,   152,   624,   583,   163,   426,  -179,   164,   382,   388,
     221,  -589,   400,   394,    81,   392,   837,   855,   760,   761,
     401,   375,   426,   926,   388,   221,   394,   388,   394,   152,
     392,   669,   670,   671,   672,   673,   674,   520,   403,   712,
    -173,  -173,  -173,   584,   406,   881,   521,   408,   584,   316,
     675,   676,   223,   224,   225,   224,   225,   409,   412,   411,
     170,   165,   278,   279,   280,   610,   281,   417,   521,   419,
     431,   156,   495,   171,   672,   673,   674,   497,   282,   830,
     224,   225,   153,   744,   152,   152,   520,  -194,   500,   909,
     675,   676,   499,   874,   393,   224,   225,   501,   503,   538,
     520,   549,   769,   945,   751,   751,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   543,   551,   172,   756,   556,   558,   559,
     620,   561,   520,   584,   156,   581,  1007,   587,   152,   589,
     590,   592,  -544,   971,  -387,   153,   940,  -391,   630,   598,
    1028,   609,   614,   610,   633,   635,   377,   822,   553,   584,
     644,   156,   646,   156,   584,   677,   649,   376,   679,   682,
     684,   686,   153,   580,   153,   687,   955,   956,  1042,   689,
     691,   704,  1045,   700,   578,   152,   709,  1008,   711,  1017,
     713,   717,   718,   726,   152,   765,   754,   521,   521,   521,
     521,   521,   766,   387,   801,   316,   810,   803,   521,   804,
     520,   811,   520,   813,   848,   820,   824,   825,   828,   829,
    1068,  1017,   520,   156,   845,  -512,   882,   846,   847,   849,
     850,   853,   883,  -240,   153,   884,   885,   886,   887,   888,
     889,   890,   856,   884,   885,   886,   887,   888,   889,  1058,
     873,   156,   864,   870,   152,   868,   815,   900,   903,   879,
     745,   899,   153,   884,   885,   886,   887,   888,   889,   907,
     521,   584,   908,   424,   553,   584,   911,  1072,   913,   920,
     924,   925,   891,   169,   275,   276,   277,   278,   279,   280,
     927,   281,   983,   918,   166,   928,   152,  1089,   938,   520,
     943,   934,   951,   282,   952,   953,   156,   156,   954,   960,
     961,   967,   520,   973,   975,   976,   751,   153,   153,   521,
     981,   984,   990,   991,   992,   993,   995,   997,  1005,   584,
    1018,  1021,  1022,   521,  1023,   426,  1024,   919,  1027,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   959,  -177,   152,   947,
     156,   424,  1034,  -228,  1032,   521,  1035,   520,  1037,   584,
    1038,   153,  1039,  1040,  1041,  1043,  1053,  1054,   553,  1052,
    1060,  1059,   854,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,  1061,  1062,  1066,  1064,
    -234,  1067,  1070,  1071,  1073,  1083,  1079,   156,  1087,  1074,
    1091,   680,   520,   584,  1082,   584,   156,  1092,   153,  1096,
     683,  1094,  1088,   426,   688,   539,   520,   153,   823,   852,
    -501,  -501,   929,   570,   571,  1002,   902,   541,   821,  1036,
     880,   941,   232,   521,   936,   521,   996,   584,   365,   906,
     768,   767,   974,   809,   520,   521,   384,     0,   520,   807,
       0,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,   584,   156,     0,     0,     0,
     882,     0,     0,     0,     0,     0,   883,   153,     0,   884,
     885,   886,   887,   888,   889,   890,   520,   584,     0,     0,
       0,     0,     0,   584,     0,     0,     0,     0,  -501,  -501,
       0,     0,     0,     0,  1050,     0,     0,     0,   156,     0,
       0,     0,     0,   584,  -363,  -363,     0,     0,     0,   153,
       0,     0,   521,   106,   128,   129,   942,   131,   132,   133,
     135,   137,   138,   139,   140,   521,   142,   143,   144,   145,
     146,   147,   148,     0,     0,   159,   162,   969,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,     0,   189,   191,     0,     0,   985,   196,
     989,   199,     0,     0,     0,     0,     0,   994,     0,     0,
     156,     0,     0,     0,     0,  1003,     0,     0,     0,     0,
    1006,   153,  -365,  -365,     0,     0,     0,   234,     0,     0,
     521,     0,     0,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,  1031,     0,     0,     0,
       0,     0,  1033,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   521,  1048,     0,     0,   308,
    -501,  -501,     0,     0,     0,     0,     0,   522,     0,   521,
     310,     0,     0,     0,     0,     0,  1063,     0,     0,     0,
    -501,  -501,     0,     0,     0,     0,     0,     0,     0,   522,
       0,     0,     0,     0,     0,     0,     0,   521,  1075,     0,
       0,   521,   234,     0,  1080,   234,     0,     0,     0,     0,
       0,   106,     0,   339,   196,     0,     0,     0,     0,     0,
       0,  1095,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,     0,   521,
       0,     0,     0,     0,     0,   196,   196,     0,     0,   159,
       0,     0,     0,   390,     0,   349,     0,     0,     0,     0,
     637,   638,   639,   640,   641,   405,     0,     0,     0,  -501,
    -501,   648,     0,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   429,     0,     0,     0,
       0,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
       0,   455,     0,     0,     0,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   522,   522,
     522,   522,   522,   477,     0,     0,     0,     0,   196,   522,
       0,     0,     0,   650,   651,   652,   484,     0,   486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,   653,   496,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   540,     0,     0,   641,   675,   676,     0,
       0,   522,   773,   774,   775,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,   799,   800,     0,
       0,     0,     0,   106,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     522,   594,     0,     0,     0,     0,     0,   599,     0,   600,
       0,   602,   603,   604,   522,     0,     0,     0,     0,     0,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   522,     0,     0,     0,
       0,   256,   257,   258,     0,     0,   862,     0,   863,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   865,   259,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   282,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,     0,     0,   522,     0,   522,     0,   698,     0,
       0,     0,     0,     0,     0,     0,   522,     0,     0,     0,
       0,     0,     0,   706,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -501,  -501,     0,     0,     0,   932,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,     0,  -591,  -591,  -591,  -591,   667,   668,   669,   670,
     671,   672,   673,   674,     0,   502,     0,   740,     0,     0,
       0,     0,     0,     0,     0,   339,   747,   675,   676,     0,
       0,   106,   812,     0,     0,     0,     0,   650,   651,   652,
       0,     0,     0,   522,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   970,     0,   653,   522,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,   675,   676,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   257,
     258,   522,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,   838,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   857,
     281,     0,     0,     0,     0,     0,   522,     0,     0,     0,
       0,     0,   282,     0,     0,     0,     0,     0,     0,     0,
     522,     0,     5,     6,     7,     8,     9,     0,   867,     0,
       0,    10,    11,  -591,  -591,  -591,  -591,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,     0,   522,   872,
       0,     0,   522,     0,     0,     0,     0,     0,   282,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
     905,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   106,    26,    27,    28,    29,    30,     0,     0,
     522,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,   560,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    51,     0,     0,    52,    53,     0,    54,
       0,     0,     0,    55,    56,    57,     0,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
     339,     0,     0,    73,     0,     0,     0,     0,    74,    75,
      76,    77,     0,    78,     0,    79,    80,     0,    81,     0,
      82,    83,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,   106,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,   106,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,    55,    56,    57,     0,    58,    59,    60,
     567,    62,    63,    64,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   126,    75,
      76,    77,     0,    78,     0,    79,    80,     0,    81,     0,
      82,    83,   623,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   126,    75,    76,    77,     0,    78,     0,
      79,    80,     0,    81,     0,    82,    83,   755,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   126,    75,
      76,    77,     0,    78,     0,    79,    80,     0,    81,     0,
      82,    83,   999,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   126,    75,    76,    77,     0,    78,     0,
      79,    80,     0,    81,     0,    82,    83,  1049,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   126,    75,
      76,    77,     0,    78,     0,    79,    80,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   126,    75,    76,    77,     0,    78,     0,
      79,    80,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,   573,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   124,    34,    35,     0,     0,     0,     0,
       0,    37,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,   125,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   123,   126,    75,
      76,    77,   574,    78,   575,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,   573,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   124,    34,
      35,     0,     0,     0,     0,     0,    37,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,    48,   281,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   282,     0,
     125,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   123,   126,    75,    76,    77,   574,    78,     0,
       0,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   124,    34,    35,     0,     0,     0,     0,
       0,    37,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   676,     0,   125,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   123,   126,    75,
      76,    77,     0,    78,     0,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   124,    34,
      35,     0,     0,     0,     0,     0,    37,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,    48,   281,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   282,     0,
     125,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   123,   126,    75,    76,    77,     0,    78,     0,
     188,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   124,    34,    35,     0,     0,     0,     0,
       0,    37,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   675,   676,     0,     0,   125,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   123,   126,    75,
      76,    77,     0,    78,     0,   190,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   124,    34,
      35,     0,     0,     0,     0,     0,    37,  -591,  -591,  -591,
    -591,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,     0,     0,
     125,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   126,    75,    76,    77,     0,    78,     0,
     194,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   124,    34,    35,     0,     0,     0,     0,
       0,    37,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,   281,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,     0,   125,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   123,   126,    75,
      76,    77,     0,    78,   328,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,   456,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   124,    34,
      35,     0,     0,     0,     0,     0,    37,  -591,  -591,  -591,
    -591,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   282,     0,     0,     0,
     125,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   123,   126,    75,    76,    77,     0,    78,     0,
       0,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   124,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   123,   126,    75,
      76,    77,     0,    78,     0,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,   485,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   124,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   123,   126,    75,    76,    77,     0,    78,     0,
       0,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,   739,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   124,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   123,   126,    75,
      76,    77,     0,    78,     0,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   124,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   126,    75,    76,    77,     0,    78,     0,
       0,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   124,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   123,   126,    75,
      76,    77,     0,    78,     0,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   124,   389,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,   256,
     257,   258,     0,   126,    75,    76,    77,     0,    78,     0,
       0,     0,     0,    81,     0,    82,    83,   259,     0,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   281,   256,   257,   258,     0,     0,     0,     0,     0,
       0,     0,     0,   282,     0,     0,     0,     0,     0,     0,
     259,     0,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,   256,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,   282,     0,     0,     0,
       0,     0,     0,   259,     0,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     0,   281,     0,   256,
     257,   258,     0,     0,     0,     0,     0,     0,     0,   282,
       0,     0,     0,     0,     0,     0,     0,   259,   572,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   281,   256,   257,   258,     0,     0,     0,     0,     0,
       0,     0,     0,   282,     0,     0,     0,     0,     0,     0,
     259,   615,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,     0,     0,   256,   257,   258,
       0,     0,     0,     0,     0,     0,   282,     0,     0,     0,
       0,     0,     0,     0,   685,   259,   858,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,   281,
       0,   256,   257,   258,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,     0,     0,     0,     0,   727,   259,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,   256,   257,   258,     0,     0,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
       0,   912,   259,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,   256,   257,   258,
       0,     0,     0,     0,     0,     0,     0,     0,   282,     0,
       0,     0,     0,     0,   859,   259,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,   281,
       0,   256,   257,   258,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,     0,     0,     0,     0,   283,   259,
       0,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,   256,   257,   258,     0,     0,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
       0,   344,   259,     0,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,   256,   257,   258,
       0,     0,     0,     0,     0,     0,     0,     0,   282,     0,
       0,     0,     0,     0,   345,   259,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,   281,
       0,   650,   651,   652,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,     0,     0,     0,     0,   351,   653,
       0,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,   776,     0,     0,     0,
       0,     0,     0,     0,     0,   675,   676,     0,     0,     0,
     402,     0,   508,   509,     0,     0,     0,     0,   510,     0,
     511,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   512,     0,   256,   257,   258,     0,     0,     0,
      31,    32,   124,     0,     0,     0,     0,     0,     0,     0,
     513,     0,   259,   478,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,     0,     0,     0,
       0,     0,     0,     0,   149,     0,     0,     0,   282,     0,
       0,     0,     0,     0,     0,     0,     0,   770,   514,     0,
     515,    68,    69,    70,    71,    72,   256,   257,   258,     0,
       0,     0,   516,     0,     0,     0,     0,   517,    75,    76,
     518,     0,   519,     0,   259,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,     0,   281,   256,
     257,   258,     0,   309,     0,     0,     0,     0,     0,     0,
     282,     0,     0,     0,     0,     0,     0,   259,     0,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   282,     0,     0,   650,   651,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   653,   317,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,     0,     0,   650,
     651,   652,     0,     0,     0,     0,     0,     0,     0,     0,
     675,   676,     0,     0,     0,     0,     0,   653,   618,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     508,   509,     0,     0,     0,     0,   510,     0,   511,     0,
       0,     0,     0,   675,   676,     0,     0,     0,     0,     0,
     512,   650,   651,   652,     0,     0,     0,     0,    31,    32,
     124,     0,     0,     0,     0,   764,     0,     0,   513,   653,
     866,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     673,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,   675,   676,     0,   931,     0,
       0,     0,     0,     0,     0,     0,   514,     0,   515,    68,
      69,    70,    71,    72,   256,   257,   258,     0,     0,     0,
     516,     0,     0,     0,     0,   517,    75,    76,   518,     0,
     519,     0,   259,   731,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,   256,   257,   258,
       0,     0,     0,     0,     0,     0,     0,     0,   282,     0,
       0,     0,     0,     0,     0,   259,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,   281,
     651,   652,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,     0,     0,     0,   653,     0,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     257,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,     0,     0,   259,     0,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     652,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   282,     0,     0,   653,     0,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   676,     0,   259,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,   281,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     653,   282,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   675,   676,   259,     0,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   675,
     676,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   282,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   675,
     676,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   675,   676,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,   281,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-852)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-591)))

static const yytype_int16 yycheck[] =
{
      24,    25,   127,    28,    28,   626,   492,    11,     4,   687,
      29,    30,   396,    78,   629,   281,    28,   243,    11,     8,
      24,    25,     8,     8,   254,    44,     8,     8,     4,    53,
     483,     8,   485,    28,     8,   808,     8,     8,     8,    33,
     718,     8,     8,     8,    28,   896,    50,     8,   249,   250,
      74,     8,     8,    77,   255,     8,    64,    50,    64,   369,
       8,    57,     8,     8,    64,    74,   506,    81,    96,    97,
     300,    33,   816,   299,    76,    74,    64,    93,    28,     0,
      74,    64,    76,   313,   314,    95,    96,    97,   148,   214,
      33,    51,   152,   323,   154,   325,    64,    61,    62,   101,
     301,   152,   303,    63,     0,   156,   157,   119,   173,   155,
     156,   176,    64,   122,    76,   155,   156,    76,   154,   127,
     573,   154,   116,   154,    64,    76,    28,   151,   148,   125,
     158,   145,   152,    76,   158,   129,   152,    74,    64,    76,
     164,   154,   148,    76,   127,    76,    74,    74,   154,   922,
      81,   157,   412,   152,   158,   149,    74,   157,   152,   127,
     172,    74,   157,    74,   183,   159,   910,   156,   157,   157,
     156,   156,   156,   399,   156,   156,   200,   201,   202,   156,
     564,   185,   156,   207,   156,   156,   156,  1038,   155,   155,
     155,   215,   185,   633,   155,   635,   148,   941,   155,   155,
     159,   225,   155,   207,   228,   157,   182,   155,   159,   155,
     155,   215,   216,   217,   154,   146,   147,   157,   419,    76,
     157,   225,   159,   216,   217,   152,   159,   122,    74,    66,
     157,   162,    24,    25,   152,   850,    28,    74,   149,    76,
      74,   152,   254,    24,    25,   475,    74,    28,    93,   254,
      74,    64,    76,    69,    70,   148,   281,   281,    93,   152,
     154,   154,   492,   122,    74,   154,    76,    93,    74,   281,
      76,   581,   154,   101,   102,    96,    97,   148,   154,   116,
     148,   152,    93,    74,   152,    76,   739,   311,   300,   146,
     147,   154,    95,    96,    97,   300,   154,   321,   122,   154,
     921,   313,   314,   149,   254,   309,   152,   152,   313,   314,
     116,   323,   149,   325,   127,   152,   309,   152,   152,    93,
     630,   157,   159,   347,   152,   116,   152,   587,   352,   815,
      74,   281,   356,   157,    74,   159,   562,   158,   362,   605,
      76,   152,    74,   149,   409,   369,   152,   157,   156,   159,
     300,   157,    64,   159,   330,   158,    63,    64,   149,   383,
      64,   152,    33,   313,   314,    74,   158,    76,   159,   595,
     596,    69,    70,   323,    64,   325,   686,   158,   152,   383,
     148,   607,   608,  1061,     8,    95,    96,    97,   412,    64,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   156,   157,   409,   148,   116,   404,   145,
     146,   147,    76,    64,   426,   207,   409,    81,   148,   127,
     129,   101,   152,   215,   154,   152,   207,   913,   404,    69,
      70,    71,   456,   225,   215,    24,    25,    61,    62,   152,
     149,    74,    63,   152,   225,    74,    82,    83,   158,    74,
     159,    76,   456,   713,    74,   160,    76,    77,     8,   483,
       8,   485,   148,   475,   148,   152,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   483,
     492,   485,   146,   147,   508,   509,   510,   511,   512,   281,
     152,   116,   148,   148,   518,   519,   127,   130,   131,    28,
     281,   130,   131,    76,   154,    76,    14,   531,    81,   156,
      81,   535,   156,    61,    62,   157,   149,   350,    14,   152,
     149,   545,   498,   152,   149,   475,   155,   152,   155,   222,
      76,   155,   155,   226,   159,    81,   737,    95,    96,    97,
     155,   545,   492,   853,   237,    76,   239,   240,   241,   573,
      81,    44,    45,    46,    47,    48,    49,   581,   158,   583,
      69,    70,    71,   587,   161,   825,   347,    74,   592,   573,
      63,    64,   145,   146,   147,   146,   147,   154,   125,    74,
     605,   605,    47,    48,    49,   815,    51,    74,   369,    64,
      28,   383,   160,   605,    47,    48,    49,    85,    63,   724,
     146,   147,   383,   622,   628,   629,   630,   155,     8,   835,
      63,    64,   156,   814,   145,   146,   147,    93,    74,    74,
     644,   155,   646,   883,   628,   629,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,    76,   156,   605,   632,   155,    74,    64,
     493,   158,   686,   687,   456,    14,   976,   125,   692,   160,
     160,   154,   154,   933,   154,   456,   877,   154,    14,   160,
     990,   160,   160,   913,   156,   156,   690,   711,   692,   713,
     154,   483,   152,   485,   718,   158,   148,   690,    74,    74,
      74,    14,   483,   707,   485,   154,   907,   908,  1018,   156,
     154,   154,  1022,   158,   707,   739,   155,   977,   152,   979,
     126,   157,   154,   160,   748,   160,    74,   508,   509,   510,
     511,   512,     8,   145,   105,   739,    14,    74,   519,    74,
     764,   160,   766,   158,   748,   155,   157,     8,   155,     8,
    1060,  1011,   776,   545,   156,   154,   102,    86,   156,   154,
     128,    14,   108,   101,   545,   111,   112,   113,   114,   115,
     116,   117,   156,   111,   112,   113,   114,   115,   116,  1039,
     158,   573,   155,   155,   808,   154,   127,   108,   153,   156,
     623,   155,   573,   111,   112,   113,   114,   115,   116,    64,
     581,   825,    64,   815,   808,   829,   160,  1067,   127,   156,
     155,   155,   158,   605,    44,    45,    46,    47,    48,    49,
      92,    51,   947,   842,   605,   156,   850,  1087,   160,   853,
      74,   106,   157,    63,   154,   157,   628,   629,    76,    28,
      71,   156,   866,   157,   160,    14,   850,   628,   629,   630,
      76,    74,    14,   160,   160,    28,   156,   155,   157,   883,
      14,    74,    14,   644,   158,   815,    76,   843,   158,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   915,    71,   922,   895,
     692,   913,   158,    93,    76,   686,   158,   931,   156,   933,
      93,   692,   109,   156,   148,    76,   155,   158,   922,    90,
      14,    74,   755,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   154,    76,    74,   156,
      74,     8,    88,   157,   155,   105,   158,   739,   154,   156,
      76,   531,   976,   977,   158,   979,   748,   155,   739,   158,
     535,   157,  1085,   913,   545,   362,   990,   748,   713,   752,
      61,    62,   857,   404,   404,   966,   829,   367,   707,  1011,
     824,   878,    78,   764,   870,   766,   962,  1011,   207,   832,
     644,   643,   939,   692,  1018,   776,   220,    -1,  1022,   690,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,  1039,   808,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,   108,   808,    -1,   111,
     112,   113,   114,   115,   116,   117,  1060,  1061,    -1,    -1,
      -1,    -1,    -1,  1067,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,  1030,    -1,    -1,    -1,   850,    -1,
      -1,    -1,    -1,  1087,   155,   156,    -1,    -1,    -1,   850,
      -1,    -1,   853,     4,     5,     6,   158,     8,     9,    10,
      11,    12,    13,    14,    15,   866,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,   930,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,   951,    50,
     953,    52,    -1,    -1,    -1,    -1,    -1,   960,    -1,    -1,
     922,    -1,    -1,    -1,    -1,   968,    -1,    -1,    -1,    -1,
     973,   922,   155,   156,    -1,    -1,    -1,    78,    -1,    -1,
     931,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   999,    -1,    -1,    -1,
      -1,    -1,  1005,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   976,  1029,    -1,    -1,   130,
      61,    62,    -1,    -1,    -1,    -1,    -1,   347,    -1,   990,
     141,    -1,    -1,    -1,    -1,    -1,  1049,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   369,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1018,  1071,    -1,
      -1,  1022,   173,    -1,  1077,   176,    -1,    -1,    -1,    -1,
      -1,   182,    -1,   184,   185,    -1,    -1,    -1,    -1,    -1,
      -1,  1094,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,  1060,
      -1,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,
      -1,    -1,    -1,   224,    -1,   156,    -1,    -1,    -1,    -1,
     508,   509,   510,   511,   512,   236,    -1,    -1,    -1,    61,
      62,   519,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
      -1,   282,    -1,    -1,    -1,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   508,   509,
     510,   511,   512,   304,    -1,    -1,    -1,    -1,   309,   519,
      -1,    -1,    -1,     9,    10,    11,   317,    -1,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
      -1,    27,   333,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   364,    -1,    -1,   644,    63,    64,    -1,
      -1,   581,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,    -1,
      -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,   409,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     630,   422,    -1,    -1,    -1,    -1,    -1,   428,    -1,   430,
      -1,   432,   433,   434,   644,    -1,    -1,    -1,    -1,    -1,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,   764,    -1,   766,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   498,   776,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,   764,    -1,   766,    -1,   559,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   776,    -1,    -1,    -1,
      -1,    -1,    -1,   574,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,   866,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     601,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    93,    -1,   618,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   626,   627,    63,    64,    -1,
      -1,   632,   160,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,   853,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   931,    -1,    27,   866,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   690,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   707,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,   931,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,   738,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   760,
      51,    -1,    -1,    -1,    -1,    -1,   976,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     990,    -1,     3,     4,     5,     6,     7,    -1,   160,    -1,
      -1,    12,    13,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,  1018,   810,
      -1,    -1,  1022,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
     831,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,   843,    64,    65,    66,    67,    68,    -1,    -1,
    1060,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    87,   158,    89,    -1,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,   107,   108,    -1,   110,
      -1,    -1,    -1,   114,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
     921,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,   152,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
     161,   162,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   962,    -1,    -1,   965,   966,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    87,    -1,    89,  1030,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,   114,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
     161,   162,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,   161,   162,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
     161,   162,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,   161,   162,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,   156,   157,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
     156,   157,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   101,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,   153,   154,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   101,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
     156,    -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,   156,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
     156,    -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,   155,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,   154,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,     9,
      10,    11,    -1,   149,   150,   151,   152,    -1,   154,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,   158,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      27,   158,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,   158,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,   158,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,   156,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,   156,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,   156,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,   156,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,   156,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
     155,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,     9,    10,    11,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    27,   155,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   130,    -1,
     132,   133,   134,   135,   136,   137,     9,    10,    11,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,
     152,    -1,   154,    -1,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,     9,
      10,    11,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,   128,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    27,   128,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      64,     9,    10,    11,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,   128,    -1,    -1,    82,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    63,    64,    -1,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,   132,   133,
     134,   135,   136,   137,     9,    10,    11,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,   149,   150,   151,   152,    -1,
     154,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      11,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    63,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   164,   165,     0,   166,     3,     4,     5,     6,     7,
      12,    13,    44,    45,    50,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    64,    65,    66,    67,
      68,    72,    73,    74,    75,    76,    78,    82,    83,    84,
      85,    87,    89,    91,    94,    98,    99,   100,   101,   102,
     103,   104,   107,   108,   110,   114,   115,   116,   118,   119,
     120,   121,   122,   123,   124,   129,   130,   132,   133,   134,
     135,   136,   137,   144,   149,   150,   151,   152,   154,   156,
     157,   159,   161,   162,   167,   168,   177,   181,   182,   216,
     217,   220,   222,   225,   227,   293,   295,   309,   310,   311,
     312,   315,   324,   335,   340,   341,   345,   346,   347,   349,
     350,   360,   361,   362,   363,   365,   366,   367,   368,   374,
     384,   388,   390,    13,    74,   116,   149,   312,   345,   345,
     154,   345,   345,   345,   295,   345,   350,   345,   345,   345,
     345,   306,   345,   345,   345,   345,   345,   345,   345,   116,
     149,   152,   167,   324,   349,   350,   362,   349,    33,   345,
     378,   379,   345,   149,   152,   167,   324,   326,   327,   362,
     366,   367,   374,   154,   332,   346,   154,   346,    28,    64,
     283,   345,   189,   187,   154,   154,   199,   346,   156,   345,
     156,   345,    74,    74,   156,   295,   345,   350,   200,   345,
     101,   102,   152,   167,   171,   172,    76,   159,   257,   258,
     122,   122,    76,   259,   312,   154,   154,   154,   154,   154,
     154,    76,    81,   145,   146,   147,   380,   381,   152,   157,
     167,   167,   293,   309,   345,   178,   157,    81,   333,   380,
      81,   380,   152,   316,     8,   156,    74,    74,   156,    64,
      64,    33,   218,   364,   148,    64,     9,    10,    11,    27,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    51,    63,   156,    61,    62,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   323,
     148,    64,   127,    64,   157,   159,   367,   218,   345,   128,
     345,   152,   167,   148,   148,   348,   350,   128,   160,     8,
     343,   152,   167,   148,   294,   148,   127,   367,   155,    28,
     183,   345,   369,     8,   156,   181,   346,   284,   285,   345,
     295,   350,   154,   194,   156,   156,   156,    14,   156,   156,
     157,   156,   152,   167,   173,   174,   152,   167,   175,   176,
     167,    93,     8,   156,   157,   347,   350,     8,   156,    14,
       8,   156,   218,   214,   215,   350,   295,   350,   385,   387,
     295,   350,   155,   296,   378,    64,   127,   145,   381,    75,
     345,   350,    81,   145,   381,   167,   170,   156,   157,   318,
     155,   155,   155,   158,   179,   345,   161,   162,    74,   154,
     254,    74,   125,   226,   224,   369,   369,    74,   307,    64,
      74,   122,   157,   360,   367,   373,   374,   369,   300,   345,
     301,    28,   303,   298,   299,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   326,   345,    33,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     254,    74,   360,   373,   369,   351,   369,   345,   155,   295,
     350,   167,    74,    33,   345,    33,   345,   167,   360,   254,
     334,   360,   328,   185,   181,   160,   345,    85,   188,   156,
       8,    93,    93,    74,   237,    28,   157,   238,    44,    45,
      50,    52,    64,    82,   130,   132,   144,   149,   152,   154,
     167,   324,   335,   336,   337,   338,   339,   389,   178,   167,
      93,     8,   156,   167,    93,     8,   156,    93,    74,   172,
     345,   258,   337,    76,   308,     8,   155,     8,   155,   155,
     155,   156,   129,   350,   375,   376,   155,   382,    74,    64,
     158,   158,   317,   165,   169,   254,   302,   121,   180,   181,
     216,   217,   158,    33,   153,   155,   255,   256,   295,   309,
     350,    14,   149,   152,   167,   325,   223,   125,   228,   160,
     160,   221,   154,   369,   345,   320,   319,   367,   160,   345,
     345,   305,   345,   345,   345,    66,   350,   322,   321,   160,
     360,   370,   372,   373,   160,   158,   348,   348,   128,   370,
     178,   184,   190,    28,   181,   243,   191,   286,   197,   195,
      14,     8,   155,   156,   239,   156,   239,   338,   338,   338,
     338,   338,   342,   344,   154,    81,   152,   167,   338,   148,
       9,    10,    11,    27,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    63,    64,   158,    93,    74,
     174,    93,    74,   176,    74,   158,    14,   154,   215,   156,
     386,   154,     8,   155,    74,    76,    77,   383,   345,   254,
     158,   165,   291,   292,   154,   348,   345,     8,   155,   155,
     337,   152,   167,   126,   229,   230,   325,   157,   154,   130,
     131,   250,   251,   252,   253,   325,   160,   158,   254,   254,
     345,    28,   326,   254,   254,   371,   352,    64,   157,    33,
     345,   329,   186,   244,   346,   178,   284,   345,    33,   129,
     232,   350,   232,   337,    74,    28,   181,   236,   239,    95,
      96,    97,   239,   158,   128,   160,     8,   343,   342,   167,
     155,    74,   122,   338,   338,   338,    28,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   105,   202,    74,    74,   337,   250,   387,   377,   376,
      14,   160,   160,   158,    64,   127,   287,   288,   289,   354,
     155,   256,   167,   230,   157,     8,   260,   250,   155,     8,
     218,   304,   297,   356,   357,   358,   359,   369,   345,   348,
     330,   246,    69,    70,   248,   156,    86,   156,   350,   154,
     128,   231,   231,    14,   178,    95,   156,   345,    28,   156,
     242,   158,   338,   338,   155,   338,    28,   160,   154,   201,
     155,   375,   345,   158,   369,   370,   354,    64,   290,   156,
     260,   325,   102,   108,   111,   112,   113,   114,   115,   116,
     117,   158,   261,   264,   277,   278,   279,   280,   282,   155,
     108,   313,   252,   153,   219,   345,   334,    64,    64,   254,
     353,   160,   158,   127,   331,    69,    70,   249,   346,   181,
     156,   192,   233,   232,   155,   155,   337,    92,   156,   242,
     241,   128,   338,   203,   106,   207,   313,   155,   160,   355,
     369,   287,   158,    74,   265,   325,   262,   312,   280,     8,
     156,   157,   154,   157,    76,   369,   369,   354,   370,   346,
      28,    71,   245,   284,   375,   198,   196,   156,   240,   178,
     338,   325,   208,   157,   359,   160,    14,     8,   156,   157,
     266,    76,   281,   218,    74,   178,    33,    76,   314,   178,
      14,   160,   160,    28,   178,   156,   181,   155,   155,    28,
     181,   235,   235,   178,   204,   157,   178,   337,   325,    74,
     267,   268,   269,   270,   272,   273,   274,   325,    14,     8,
     156,    74,    14,   158,    76,     8,   155,   158,   337,   247,
     193,   178,    76,   178,   158,   158,   269,   156,    93,   109,
     156,   148,   337,    76,   263,   337,    33,    76,   178,    28,
     181,   234,    90,   155,   158,   275,   280,   271,   325,    74,
      14,   154,    76,   178,   156,   205,    74,     8,   337,   250,
      88,   157,   325,   155,   156,   178,   156,   157,   276,   158,
     178,   206,   158,   105,   209,   210,   211,   154,   211,   325,
     212,    76,   155,   213,   157,   178,   158
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 223 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 227 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 227 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 232 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 233 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 237 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 238 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 239 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 240 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 241 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 242 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 243 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 244 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 245 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 246 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 247 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 248 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 249 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 258 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL TSRMLS_CC); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 259 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 260 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 261 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 270 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(1) - (1)]), NULL TSRMLS_CC); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 271 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 272 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 273 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 282 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(1) - (1)]), NULL TSRMLS_CC); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 283 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 284 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 285 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 289 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 290 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 294 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 294 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 303 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_error_noreturn(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 308 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 309 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 314 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (2)]), &(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 314 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 314 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 315 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 315 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 315 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 316 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 316 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(3) - (3)]), &(yyval) TSRMLS_CC); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 316 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 317 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 317 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 317 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 321 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 323 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 325 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 326 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 327 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 327 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 328 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 329 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 330 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 331 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 332 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 333 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 334 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 335 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 339 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 340 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 343 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 344 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 345 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 347 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 348 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 349 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 350 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 350 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 352 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 353 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_bind_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 354 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_finally(&(yyvsp[(1) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 355 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 356 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 360 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 361 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 362 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 363 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 364 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 365 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 368 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 369 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 369 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 373 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 374 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 378 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 379 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 383 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 383 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 383 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 392 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 396 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 400 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 404 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = 0; }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 405 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = 1; }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 409 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = 0; }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 410 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = 1; }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 414 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 416 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 421 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 425 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 427 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 431 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 436 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 437 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 438 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 439 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 443 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 444 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 448 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 462 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 463 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 467 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 468 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 472 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 473 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 474 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 474 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (5)]); (yyval).EA = ZEND_PARSED_LIST_EXPR; }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 496 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 497 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 502 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 503 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 504 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 505 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 510 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 511 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 511 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 512 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 512 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 531 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 531 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 537 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 537 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 566 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_receive_param(ZEND_RECV, &(yyvsp[(4) - (4)]), NULL, &(yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]).op_type, (yyvsp[(3) - (4)]).op_type TSRMLS_CC); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 568 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_receive_param(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyvsp[(6) - (6)]), &(yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]).op_type, (yyvsp[(3) - (6)]).op_type TSRMLS_CC); }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 573 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 574 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 575 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 576 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 581 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 582 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 583 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 593 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 594 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR TSRMLS_CC); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 595 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF TSRMLS_CC); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 596 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_unpack_params(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 600 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 601 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 606 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 607 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 608 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 613 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 614 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 615 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 616 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 628 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 631 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 633 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 641 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 642 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 666 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 670 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 671 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]) TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 675 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 676 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 680 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 684 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 685 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 689 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 690 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 694 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 695 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 699 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 700 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 704 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 705 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 709 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 710 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 714 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 715 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 716 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 717 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 718 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 719 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 723 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 724 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 725 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 726 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 730 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 731 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 735 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 736 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 741 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 742 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 746 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 746 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 747 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 751 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 752 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 756 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 757 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 761 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 761 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 762 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 763 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 767 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 768 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 769 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 773 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 773 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 777 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 777 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 778 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 779 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 780 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 780 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 781 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 782 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 783 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 784 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 785 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 786 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 787 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 788 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 789 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 790 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 791 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 792 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 793 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 794 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 795 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 796 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 797 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 798 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 798 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 799 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 799 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 800 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 800 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 801 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 801 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 802 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 803 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 804 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 805 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 806 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 807 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 808 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 809 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 810 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 811 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 812 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 813 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 814 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 815 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 816 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 817 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 818 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 819 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 820 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 821 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 822 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 823 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 824 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 825 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 826 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 827 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 828 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 829 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 830 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 830 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 831 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 832 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 833 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 834 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 835 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 836 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 837 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 838 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 839 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 840 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 841 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 842 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 843 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 844 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 845 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 845 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 846 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 847 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 848 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 849 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 850 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 851 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 852 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 854 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 855 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 857 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 861 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 862 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 863 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 864 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 868 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 869 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 870 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 871 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 875 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 876 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 880 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 889 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 890 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 891 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 892 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 896 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 897 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 898 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 899 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 900 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 901 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 902 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 903 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 904 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 905 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 906 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 907 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 908 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 909 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 910 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 911 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 915 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 916 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 917 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 918 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 922 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 923 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 924 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 930 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 931 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 936 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 405:
/* Line 1792 of yacc.c  */
#line 937 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 938 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 407:
/* Line 1792 of yacc.c  */
#line 939 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 950 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 411:
/* Line 1792 of yacc.c  */
#line 954 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 955 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 956 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 960 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 961 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 962 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 967 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 968 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 973 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 974 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 975 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 976 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 977 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 978 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 979 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 980 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 981 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 982 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 983 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 984 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 988 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 992 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_constant_expression(&(yyval), (yyvsp[(1) - (1)]).u.ast TSRMLS_CC); }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 996 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 997 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 998 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 999 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 1000 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 1001 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 1002 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 1003 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 1004 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 1005 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 1009 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_FETCH_DIM_R, (yyvsp[(1) - (4)]).u.ast, (yyvsp[(3) - (4)]).u.ast); }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 1010 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_ADD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 1011 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SUB, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 1012 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_MUL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 1013 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_POW, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 1014 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_DIV, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 1015 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_MOD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 1016 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_BOOL_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 1017 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_BW_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 1018 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 1019 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 1020 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 1021 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 1022 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 1023 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_CONCAT, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 1024 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 1025 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 1026 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 1027 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 1028 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 1029 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 1030 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 1031 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 1032 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 1033 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 1034 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 1035 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 1036 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 1037 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (4)]).u.ast, NULL, (yyvsp[(4) - (4)]).u.ast); }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 1038 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (5)]).u.ast, (yyvsp[(3) - (5)]).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 1039 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_PLUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 1040 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_MINUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 1041 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 1045 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 1046 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 1047 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 1048 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 1052 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 1053 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 1054 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 1055 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 1056 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 1057 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 1058 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 1062 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 1063 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_ast_dynamic_shrink(&(yyvsp[(1) - (2)]).u.ast); (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 1072 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (5)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 1073 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 1074 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (3)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 1075 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (1)]).u.ast); }
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 1079 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 1080 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 1084 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 1085 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 1090 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 1095 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 1100 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 1105 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 1106 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 1107 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 1108 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 1112 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 1113 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 1118 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 1118 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 1122 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 1123 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 1127 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 1128 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 1132 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 1133 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 1134 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 1138 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 1139 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 1143 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 1144 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 1149 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 522:
/* Line 1792 of yacc.c  */
#line 1153 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 1154 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 1155 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 1159 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 1160 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 1161 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 1166 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 1167 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 1168 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 1172 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 1173 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 1174 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 1179 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 1180 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 1184 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 1185 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 1190 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 1191 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 1191 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 1195 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 1196 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 1197 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 1201 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 1202 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 1206 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 1207 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 1217 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 1218 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 1218 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 1219 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 1224 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 1225 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 1229 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 1230 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 1231 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 1232 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 1233 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 1234 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 1235 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 1236 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 1240 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 1241 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 1242 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 1243 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 1249 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 1250 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 1250 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 1251 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 1252 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 1253 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 1254 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 1259 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 1260 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 1261 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 1266 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 1267 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 1268 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 1269 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 1270 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 1271 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 1272 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 1273 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 1277 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 1278 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 1278 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 1282 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 1283 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_error_noreturn(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 1287 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 1288 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 1292 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 1296 "/root/study/php/php-src/Zend/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;


/* Line 1792 of yacc.c  */
#line 7006 "/root/study/php/php-src/Zend/zend_language_parser.c"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1299 "/root/study/php/php-src/Zend/zend_language_parser.y"


/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		TSRMLS_FETCH();
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;
			
			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}
			
			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = yystrlen(yystr);
			
			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}
			
			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}		
	}	
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
