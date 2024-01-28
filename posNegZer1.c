/*
	7)	Write a C program that accepts an integer from the user and checks whether the integer is positive, negative or zero.
	It should display either “Positive”, “Negative” or “Zero”.
*/

#include <stdio.h>

main() {
	int num1;
	
	printf("Enter any number: ");
	scanf("%d", &num1);
	
	if(num1 > 0) {
		printf("\nPositive");
	} else if(num1 < 0) {
		printf("\nNegative");
	} else {
		printf("\nZero");
	}
}

