#include <stdio.h>

float acceptUnitPrice(void);
int acceptQty(void);

int main() {
	float unitPrice, qty;
	
	unitPrice = acceptUnitPrice();
	qty = acceptQty();

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