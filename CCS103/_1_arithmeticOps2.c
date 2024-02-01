/*
	1.) Write a C program that accepts two numbers from the user and performs all the arithmetic operations in C (sum, difference, product, quotient and modulus).
		It should display the results of the operations.
*/

#include <stdio.h>

int main() {
   	int num1, num2, sum, dif, pro, mod;
   	float quo;

   	printf("Enter first numbers: ");
	scanf("%d", &num1);

	do {
		printf("Enter second numbers: ");
		scanf("%d", &num2);
		
		if(num2 == 0) {
			printf("error message")
		}
	} while(num2 == 0);
	
   	// Perform arithmetic operations
   	sum = num1 + num2;
	dif = num1 - num2;
   	pro = num1 * num2;
	// Use type casting for accurate division
   	quo = (float)num1 / num2;
   	mod = num1 % num2;

   	// Display results
   	printf("\nSum: %d\n", sum);
   	printf("Difference: %d\n", dif);
   	printf("Product: %d\n", pro);
   	printf("Quotient: %.1f\n", quo);
   	printf("Modulus: %d\n", mod);

   return 0;
}