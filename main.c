#include "inc/lexer/lexer.h"
#include "inc/lexer/token.h"
#include <stdio.h>

int 
main() 
{
	char *source_code = 
		"let num = 10\n"
		"# My commentaire bro\n"
		"print(num)";

	lexer_t *lexer = new_lexer(source_code);
	
	token_t *token = get_token(lexer);

	while (token->kind != EOF_F) {
		
		token = get_token(lexer);
		
	}

	free_lexer(lexer);
	return (0);
}
