#include <stdio.h>
#include <string.h>
#include "stackL.h"
#include "testPair.h"


int testPair(char* exp) {
	char symbol, open_pair;

	int i, length = strlen(exp);
	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		switch (symbol) {

		case '<':
		case '/>':
			if (isStackEmpty()) return 0;
			else {
				open_pair = pop();

				if (open_pair == '<' && symbol != '/>')
					push(symbol);

				else break;
			}
		case '\n':
		case '.':
			if (isStackEmpty()) return 0;
			else {

				pop(symbol);
			}
		}
	}
	if (top == NULL) return 1;
	else return 0;
}