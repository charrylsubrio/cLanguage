/*
	5)	Write a C program that accepts 2 integers from the user and store these in variable num1 (first number inputted) and num2 (second number inputted).
		The program should swap the values of the 2 variables, that is, the first number inputted should be stored in num2 and the second number inputted will 
		be stored in num1.  It should display the values of the 2 variables before and after the swap.
*/

#include <stdio.h>

int main() {
	int num1, num2, temp;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	temp = num1;
	
	printf("\nBefore Swap:");
	printf("\nnum1 = %d", num1);
	printf("\nnum2 = %d", num2);
	
	num1 = num2;
	num2 = temp;
	
	printf("\n\nAfter Swap:");
	printf("\nnum1 = %d", num1);
	printf("\nnum2 = %d", num2);

	return 0;
}
