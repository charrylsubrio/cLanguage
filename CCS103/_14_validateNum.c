/*
	14.) Write a program in C program that validates the entry of the user.
		It should accept positive numbers only.  If the user inputs a negative or 0, it should ask the user to input again.
		The program should display the inputted positive number.
*/

#include <stdio.h>

int main() {
	int num1;
	
	do {
		printf("Enter any positive number: ");
		scanf("%d", &num1);
		
		if(num1 <= 0) {
			printf("\nPlease input a positive number only\n\n");
		}
	} while (num1 <= 0);
	
	printf("\n%d", num1);

	return 0;
}
