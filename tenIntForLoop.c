/*
CHARRYL SUBRIO

This program accepts 10 integers from the user. 
The program should compute and display the double of each integer.

November 14, 2023
*/

#include <stdio.h>

int main() {
	int i, num, d;

	for (i = 1; i <= 10; i++) {
		printf("Enter a number: ");
		scanf("%d", &num);
		
		d = num * 2;
		
		printf("Double: %d\n\n", d);
	}

	return 0;
}
