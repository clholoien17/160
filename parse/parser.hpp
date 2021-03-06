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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    T_comma = 258,
    T_assign = 259,
    T_or = 260,
    T_and = 261,
    T_isEq = 262,
    T_notEq = 263,
    T_less = 264,
    T_lessOrEq = 265,
    T_great = 266,
    T_greatOrEq = 267,
    T_plus = 268,
    T_minus = 269,
    T_times = 270,
    T_divide = 271,
    T_mod = 272,
    T_not = 273,
    T_deRef = 274,
    T_addr = 275,
    T_openCurly = 276,
    T_closeCurly = 277,
    T_openBracket = 278,
    T_closeBracket = 279,
    T_openParen = 280,
    T_closeParen = 281,
    T_true = 282,
    T_false = 283,
    T_string = 284,
    T_char = 285,
    T_num_oct = 286,
    T_num_bin = 287,
    T_num_hex = 288,
    T_num_dec = 289,
    T_null = 290,
    T_if = 291,
    T_else = 292,
    T_while = 293,
    T_bool_type = 294,
    T_char_type = 295,
    T_int_type = 296,
    T_string_type = 297,
    T_intptr_type = 298,
    T_charptr_type = 299,
    T_proc = 300,
    T_return = 301,
    T_var = 302,
    T_identifier = 303,
    T_col = 304,
    T_semiCol = 305,
    T_pipe = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
