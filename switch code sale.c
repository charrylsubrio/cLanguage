/*
A certain store is having a sale and the discount rate is based from the product code (it could be 1, 2 3 or 4). If the code is 1, the discount rate is 10%;
else if the code is 2, the discount rate is 7%; else if the code is 3, the discount rate is 5%; else if the code is 4, the discount rate is 3%. Draw the flowchart
that represents the logic of the program which accepts the product code, unit price and quantity of the product purchased by a customer. The program should compute
and display the discount and the discounted price and the amount payable by the customer.
*/

#include <stdio.h>

#define rate1 0.10
#define rate2 0.07
#define rate3 0.05
#define rate4 0.03


int main () {
	int pCode, uPrice, qty;
	float dis, distedP, amntP;
	
	printf("Enter the product code (1-4): ");
	scanf("%d", &pCode);
	
	printf("Enter the price: ");
	scanf("%d", &uPrice);
	
	printf("Enter the quantity: ");
	scanf("%d", &qty);
	
	switch(pCode) {
		case 1:
			dis = uPrice * rate1;
			break;
		case 2: 
			dis = uPrice * rate2;
			break;
		case 3:
			dis = uPrice * rate3;
			break;
		case 4:
			dis = uPrice * rate4;
			break; 
		default:
			printf("\nInvalid product code, expect no discount!\n");
			
	}
	
	distedP = uPrice - dis;
	amntP = distedP * qty;
	
	printf("\nDiscount: %.2f", dis);
	printf("\nDiscounted: %.2f", distedP);
	printf("\nAmount Payable: %.2f", amntP);
	
	return 0;
}


