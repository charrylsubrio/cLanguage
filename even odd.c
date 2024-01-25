/*
Write a program that accepts an integer from the user. If the integer is an even number, display “EVEN”; else display “ODD”.
*/

#include <stdio.h>

int main() {
	int num1;

	printf("Enter a number: ");
	scanf("%d", &num1);
	
	if (num1 % 2 == 0) {
		printf("\nEVEN");
	} else {
		printf("\nODD");	
	}
	
	return 0;
}

