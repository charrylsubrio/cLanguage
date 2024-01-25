/*
for loop syntax: 

for (initialization statement; condition expression; increment expression) {
  statement(s) to be executed;
}
*/

#include <stdio.h>

int main() {
	int i, uPrice, qty, amnt, amntP = 0;

	for (i = 1; i <= 5; i++) {
		printf("Enter Unit Price: ");
		scanf("%d", &uPrice);
		printf("Enter Quantity: ");
		scanf("%d", &qty);
		amnt = uPrice * qty;
		printf("Amount: %d", amnt);
		amntP += amnt;
		printf("\n\nTotal Amount Payable: %d\n\n", amntP);
	}

	return 0;

}