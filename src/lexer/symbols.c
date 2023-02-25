#include "../../inc/lexer/symbols.h"
#include "../../inc/lexer/operators.h"

#define SYM_TABLE_SIZE 5

const sym_byte_t sym_table[] = {
	{'+', &token_plus},
	{'-', &token_minus},
	{'/', &token_div},
	{'*', &token_prod},
	{'%', &token_mod},
};


int
search_sym(char tok)
{
	for (int i = 0; i < SYM_TABLE_SIZE; i++) {
		if (sym_table[i].lexer_byte == tok)
			return (1);
	}
	
	return (0);
}

sym_byte_t 
get_sym_by_lexer_value(char tok)
{
	sym_byte_t sym;

	for (int i = 0; i < SYM_TABLE_SIZE; i++) {
		if (sym_table[i].lexer_byte == tok)
			sym = sym_table[i];
	}

	return (sym);
}
