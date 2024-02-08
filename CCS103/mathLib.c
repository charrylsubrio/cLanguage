#include <stdio.h>
#include <math.h>

int main() {
	float num1, squareR;
	
	printf("Enter any number: ");
	scanf("%f", &num1);
	
	squareR = sqrt(num1);
	
	printf("\nSquare Root of %.2f is = %.2f", num1, squareR);
	
	return 0;
}