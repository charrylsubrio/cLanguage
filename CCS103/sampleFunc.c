#include <stdio.h>

char acceptChar(void);

int main(void) {
	char letter;
	
	letter = acceptChar();
	
	printf("\nValue from acceptChar function: %c", letter);
	
	return 0;
}

char acceptChar(void) {
	char letter;
	
	printf("Enter a letter: ");
	scanf("%c", &letter);
	
	return letter;
}
