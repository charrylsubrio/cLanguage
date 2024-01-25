#include <stdio.h>

int main () {
	float unitP, quan, dis, payable;
	
	printf("Enter Unit Price: ");
	scanf("%f", &unitP);
	
	printf("Enter Quantity: ");
	scanf("%f", &quan);
	
	if (unitP <= 1000) {
		dis = unitP * 0.05;
	}
	else if (unitP > 1000 && unitP <= 5000) {
		dis = unitP * 0.10;
	}
	else {
		dis = unitP * 0.12;
	}
	
	payable = (unitP - dis) * quan;
	
	printf("\nDiscount: %.2f", dis);
	printf("\nPayable = %.2f", payable);
	
	return 0;
}
