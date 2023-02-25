#ifndef OPERATORS_H
#define OPERATORS_H

#include "lexer.h"

token_t * token_plus(lexer_t *lexer);
token_t * token_minus(lexer_t *lexer);
token_t * token_div(lexer_t *lexer);
token_t * token_prod(lexer_t *lexer);

#endif