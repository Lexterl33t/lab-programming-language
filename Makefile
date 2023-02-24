
lexer: src/lexer/lexer.c main.c
	gcc -o bin/lexer src/lexer/lexer.c src/lexer/token.c main.c -I.
