/*
	5)	Write a C program that accepts 2 integers from the user and store these in variable num1 (first number inputted) and num2 (second number inputted).
	The program should swap the values of the 2 variables, that is, the first number inputted should be stored in num2 and the second number inputted will 
	be stored in num1.  It should display the values of the 2 variables before and after the swap.
*/

#include <stdio.h>

main() {
	int num1, num2, num1B;
	
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	
	num1B = num1;
	
	printf("\nBefore Swap:");
	printf("\nnum1 = %d", num1);
	printf("\nnum2 = %d", num2);
	
	num1 = num2;
	num2 = num1B;
	
	printf("\n\nAfter Swap:");
	printf("\nnum1 = %d", num1);
	printf("\nnum2 = %d", num2);
}

