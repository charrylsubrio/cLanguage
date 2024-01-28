/*
	Write a C program that accepts two numbers from the user and performs all the arithmetic operations in C (sum, difference, product, quotient and modulus).
	It should display the results of the operations.
*/

#include <stdio.h>

main() {
	int num1, num2;
	float sum, difference, product, quotient, modulus;
	
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;
	modulus = num1 % num2;
	
	printf("\nSum = %.2f", sum);
	printf("\nDifference = %.2f", difference);
	printf("\nProduct = %.2f", product);
	printf("\nQuotient = %.2f", quotient);
	printf("\nModulus = %.2f", modulus);  
}

