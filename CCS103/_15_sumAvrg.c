/*
	15.) Write a C program continuously accepts a positive integer from the user until the user inputs a zero.
		The program should compute the sum and average of all the inputted positive numbers.
		It should display the sum and average.
*/

#include <stdio.h>

int main() {
	int num1, sum = 0, counter = 0, avrg;
	
	do {
		printf("Enter any positive number: ");
		scanf("%d", &num1);
		
		if(num1 != 0) {
			sum += num1;
			counter += 1;
		}
	} while(num1 != 0);
	
	avrg = sum / counter;
	
	printf("\nSum = %d", sum);
	printf("\nAverage = %d", avrg);

	return 0;
}
