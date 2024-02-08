#include <stdio.h>
#include <math.h>

int main() {
	float base, power, powR;
	
	printf("Enter first number: ");
	scanf("%f", &base);
	
	printf("Enter second number: ");
	scanf("%f", &power);
	
	powR = pow(base, power);
	
	printf("\n%.2f to the power of %.2f = %.2f", base, power, powR);
	
	return 0; 
}