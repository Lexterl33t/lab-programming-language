#ifndef SYMBOLS_H
#define SYMBOLS_H

#include "token.h"
#include "lexer.h"


typedef struct 
sym_byte_s {
	char lexer_byte;
	token_t *(*decode)(lexer_t*);
} sym_byte_t;


int search_sym(char tok);
sym_byte_t get_sym_by_lexer_value(char tok);

#endif
