#include <stdio.h>

float acceptUnitPrice(void);
int acceptQty(void);
float computeDiscount(float);
float computeDiscountedPrice(float, float);
float computeAmountPayable(float, int);

int main() {
	float uPrice, discount, discPrice, amountPayable;
	int qty;
	
	uPrice = acceptUnitPrice();
	qty = acceptQty();
	discount = computeDiscount(uPrice);
	discPrice = computeDiscountedPrice(discount, uPrice);
	amountPayable = computeAmountPayable(discPrice, qty);
	
	printf("\nDiscount = %.2f", discount);
	printf("\nDiscounted Price = %.2f", discPrice);
	printf("\n\nTotal Amount Payabale = %.2f", amountPayable);
	
	return 0;
}

float acceptUnitPrice(void) {
	float uPrice;
	
	printf("Enter Unit Price: ");
	scanf("%f", &uPrice);
	
	return uPrice;
}

int acceptQty(void) {
	int qty;
	
	printf("Enter Quantity: ");
	scanf("%d", &qty);
	
	return qty;
}

float computeDiscount( float uPrice) {
	return uPrice * 0.05;	
}

float computeDiscountedPrice(float discount, float uPrice) {
	return uPrice - discount;
}

float computeAmountPayable(float discPrice, int qty) {
	return discPrice * qty;
}