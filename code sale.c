/*
A certain store is having a sale and the discount rate is based from the product code (it could be 1, 2 3 or 4). If the code is 1, the discount rate is 10%;
else if the code is 2, the discount rate is 7%; else if the code is 3, the discount rate is 5%; else if the code is 4, the discount rate is 3%. Draw the flowchart
that represents the logic of the program which accepts the product code, unit price and quantity of the product purchased by a customer. The program should compute
and display the discount and the discounted price and the amount payable by the customer.
*/

#include <stdio.h>

int main () {
	int code, price, quan;
	float dis, distedP, amntP;
	
	printf("Enter the product code (1-4): ");
	scanf("%d", &code);
	
	printf("Enter the price: ");
	scanf("%d", &price);
	
	printf("Enter the quantity: ");
	scanf("%d", &quan);
	
	if (code == 1) {
		dis = price * 0.10;
	} 
	else if (code == 2) {
		dis = price * 0.07;			
	}
	else if (code == 3) {
		dis = price * 0.05;			
	}
	else if (code == 4) {
		dis = price * 0.03;			
	}
	
	distedP = price - dis;
	amntP = distedP * quan;
	
	printf("\nDiscount: %.2f", dis);
	printf("\nDiscounted: %.2f", distedP);
	printf("\nAmount Payable: %.2f", amntP);
	
	return 0;
}

