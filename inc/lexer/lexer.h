#ifndef LEXER_H
#define LEXER_H
#include "token.h"

typedef struct 
lexer_s {
	int pos;
	char curr;
	char *source;	
	int end;
} lexer_t;


typedef
struct sym_token_s {
	char value;
	token_t *(*decode)(lexer_t*);
} sym_token_t;

// Allocate new lexer chunk
lexer_t *new_lexer(char *source);

// free lexer pointer
void free_lexer(lexer_t *lexer);

// get the next byte
char get_peek_byte(lexer_t *lexer);

// Incremente position token
void next_token(lexer_t *lexer);

void skip_whitespace(lexer_t *lexer);

void skip_comments(lexer_t *lexer);

token_t *get_token(lexer_t *lexer);

#endif
