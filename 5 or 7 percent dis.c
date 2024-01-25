/*
Write a program that accepts a unit price from the user. If the price is 150 and below, discount rate is 5% else the discount rate is 7%. 
The program should compute the discount and the discounted price. It should display the original price, discount and the discounted price.
*/

#include <stdio.h>

int main() {
	float unitPrice, dis, distedP;

	printf("Enter the unit price: ");
	scanf("%f", &unitPrice);
		
	if (unitPrice <= 150) {
		dis = unitPrice * 0.05;
	}
	else {
		dis = unitPrice * 0.07;
	}
	
	distedP = unitPrice - dis;
	
	printf("\nOrig price: %.2f", unitPrice);
	printf("\nDiscount: %.2f", dis);
	printf("\nDiscounted price = %.2f", distedP);
	
	return 0;
}
