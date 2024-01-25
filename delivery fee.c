/*
When one sends a package via a delivery service provider, the fee is dependent on the weight of the package. If the weight is 5 kilograms or 
below, the fee is 35.00. When it exceeds 5 kilograms, the succeeding kilograms cost 5.00 per kilogram. Write a program that accepts the 
weight of the package. It should compute the cost of the package. The program should display the weight of the package in kilograms and the 
delivery fee of the package.
*/

#include <stdio.h>
#define minRate 35.00

int main() {
	float weight, cost, excess, extraCost; 
	
	printf("Enter the package's weight in kg: ");
	scanf("%f", &weight);
	
	cost = minRate;
	
	if (weight >= 5) {
		excess = weight - 5;
		extraCost = excess * 5.00;
		cost += extraCost;	
	}
	
	printf("\nPackage's Weight: %.1f kg", weight);
	printf("\nDelivery fee: Php %.2f", cost);
	
	return 0;
}
