/*
Draw the flowchart that represents the logic of the program which accepts a unit price. If the unit price is below 200, the discount rate is 2%; else if the price is 
200 to 500, the discount rate is 3%; else if the price is above 500, the discount rate is 5%. The program should compute and display the discount and the discounted 
price.
*/

#include <stdio.h>

int main () {
	int unPrice; 
	float dis, distedP;
	
	printf("Enter unit price: ");
	scanf("%d", &unPrice);
	
	if (unPrice < 200) {
		dis = unPrice * 0.02;
	}
	else if (unPrice >= 200 && unPrice <= 500) {
		dis = unPrice * 0.03;
	}
	else if (unPrice > 500) {
		dis = unPrice * 0.05;
	}
	
	distedP = unPrice - dis;
	
	printf("\nDiscount: %.2f", dis);
	printf("\n\nDiscounted Price: %.2f", distedP);
	
	return 0;
}