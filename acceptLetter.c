/*
CHARRYL SUBRIO

This program continuously accepts a letter from the user and displays it until the user wishes to stop.

November 14, 2023
*/

#include <stdio.h>

int main() {
	char ans = 'Y', letter;

	while(toupper(ans) == 'Y') {
		printf("Enter letter: ");
		scanf("%c", &letter);
		fflush(stdin);
		
		printf("Inputted: %c", letter);
		
		printf("\n\nPress Y to continue... ");
		ans = getche();
		
		printf("\n\n");
	}

	return 0;
}
