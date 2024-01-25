#include <stdio.h>

#define _dRate1 0.05
#define _dRate2 0.10
#define _dRate3 0.12

int main () {
	float unitP, quan, dis, payable;
	
	printf("Enter Unit Price: ");
	scanf("%f", &unitP);
	
	printf("Enter Quantity: ");
	scanf("%f", &quan);
	
	payable = unitP * quan;
	
	if (unitP <= 1000) {
		dis = payable * _dRate1;
	}
	else if (unitP > 1000 && unitP <= 5000) {
		dis = payable * _dRate2;
	}
	else {
		dis = payable * _dRate3;
	}
	
	payable -= dis;
	
	printf("\nOrig Payable = %.2f", unitP);
	printf("\nDiscount: %.2f", dis);
	printf("\nPayable = %.2f", payable);
	
	return 0;
}
