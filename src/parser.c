#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND_SQUOTE = 1,
  anon_sym_SQUOTE = 2,
  anon_sym_BQUOTE = 3,
  anon_sym_COMMA = 4,
  aux_sym_integer_token1 = 5,
  aux_sym_integer_token2 = 6,
  aux_sym_float_token1 = 7,
  aux_sym_float_token2 = 8,
  aux_sym_float_token3 = 9,
  sym_symbol = 10,
  sym_string = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_comment = 16,
  sym_source_file = 17,
  sym__sexp = 18,
  sym_quote = 19,
  sym_unquote = 20,
  sym__atom = 21,
  sym_integer = 22,
  sym_float = 23,
  sym_list = 24,
  sym_vector = 25,
  aux_sym_source_file_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_quote] = "quote",
  [sym_unquote] = "unquote",
  [sym__atom] = "_atom",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_quote] = sym_quote,
  [sym_unquote] = sym_unquote,
  [sym__atom] = sym__atom,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '`') ADVANCE(12);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('*' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == 'b' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__sexp] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym__atom] = STATE(5),
    [sym_integer] = STATE(5),
    [sym_float] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_float] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(30),
    [aux_sym_integer_token1] = ACTIONS(33),
    [aux_sym_integer_token2] = ACTIONS(36),
    [aux_sym_float_token1] = ACTIONS(39),
    [aux_sym_float_token2] = ACTIONS(39),
    [aux_sym_float_token3] = ACTIONS(42),
    [sym_symbol] = ACTIONS(45),
    [sym_string] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(48),
  },
  [3] = {
    [sym__sexp] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym__atom] = STATE(6),
    [sym_integer] = STATE(6),
    [sym_float] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(57),
    [sym_string] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(59),
  },
  [4] = {
    [sym__sexp] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_integer] = STATE(7),
    [sym_float] = STATE(7),
    [sym_list] = STATE(7),
    [sym_vector] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(63),
    [sym_string] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(67),
    [sym_comment] = ACTIONS(65),
  },
  [5] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_float] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(73),
  },
  [6] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_float] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(73),
  },
  [7] = {
    [sym__sexp] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym__atom] = STATE(2),
    [sym_integer] = STATE(2),
    [sym_float] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(77),
    [sym_comment] = ACTIONS(73),
  },
  [8] = {
    [sym__sexp] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_float] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(79),
    [sym_string] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
  },
  [9] = {
    [sym__sexp] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_float] = STATE(13),
    [sym_list] = STATE(13),
    [sym_vector] = STATE(13),
    [anon_sym_POUND_SQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(7),
    [aux_sym_integer_token1] = ACTIONS(9),
    [aux_sym_integer_token2] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(13),
    [aux_sym_float_token3] = ACTIONS(15),
    [sym_symbol] = ACTIONS(83),
    [sym_string] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_POUND_SQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [aux_sym_integer_token1] = ACTIONS(89),
    [aux_sym_integer_token2] = ACTIONS(87),
    [aux_sym_float_token1] = ACTIONS(89),
    [aux_sym_float_token2] = ACTIONS(89),
    [aux_sym_float_token3] = ACTIONS(87),
    [sym_symbol] = ACTIONS(89),
    [sym_string] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym_comment] = ACTIONS(87),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_POUND_SQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [aux_sym_integer_token1] = ACTIONS(93),
    [aux_sym_integer_token2] = ACTIONS(91),
    [aux_sym_float_token1] = ACTIONS(93),
    [aux_sym_float_token2] = ACTIONS(93),
    [aux_sym_float_token3] = ACTIONS(91),
    [sym_symbol] = ACTIONS(93),
    [sym_string] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_comment] = ACTIONS(91),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_POUND_SQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [aux_sym_integer_token1] = ACTIONS(97),
    [aux_sym_integer_token2] = ACTIONS(95),
    [aux_sym_float_token1] = ACTIONS(97),
    [aux_sym_float_token2] = ACTIONS(97),
    [aux_sym_float_token3] = ACTIONS(95),
    [sym_symbol] = ACTIONS(97),
    [sym_string] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_comment] = ACTIONS(95),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_POUND_SQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [aux_sym_integer_token1] = ACTIONS(101),
    [aux_sym_integer_token2] = ACTIONS(99),
    [aux_sym_float_token1] = ACTIONS(101),
    [aux_sym_float_token2] = ACTIONS(101),
    [aux_sym_float_token3] = ACTIONS(99),
    [sym_symbol] = ACTIONS(101),
    [sym_string] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_comment] = ACTIONS(99),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_POUND_SQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [aux_sym_integer_token1] = ACTIONS(105),
    [aux_sym_integer_token2] = ACTIONS(103),
    [aux_sym_float_token1] = ACTIONS(105),
    [aux_sym_float_token2] = ACTIONS(105),
    [aux_sym_float_token3] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_string] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_comment] = ACTIONS(103),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_POUND_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [aux_sym_integer_token1] = ACTIONS(109),
    [aux_sym_integer_token2] = ACTIONS(107),
    [aux_sym_float_token1] = ACTIONS(109),
    [aux_sym_float_token2] = ACTIONS(109),
    [aux_sym_float_token3] = ACTIONS(107),
    [sym_symbol] = ACTIONS(109),
    [sym_string] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_POUND_SQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [aux_sym_integer_token1] = ACTIONS(113),
    [aux_sym_integer_token2] = ACTIONS(111),
    [aux_sym_float_token1] = ACTIONS(113),
    [aux_sym_float_token2] = ACTIONS(113),
    [aux_sym_float_token3] = ACTIONS(111),
    [sym_symbol] = ACTIONS(113),
    [sym_string] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_comment] = ACTIONS(111),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_POUND_SQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [aux_sym_integer_token1] = ACTIONS(117),
    [aux_sym_integer_token2] = ACTIONS(115),
    [aux_sym_float_token1] = ACTIONS(117),
    [aux_sym_float_token2] = ACTIONS(117),
    [aux_sym_float_token3] = ACTIONS(115),
    [sym_symbol] = ACTIONS(117),
    [sym_string] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_comment] = ACTIONS(115),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elisp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
