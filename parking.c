/*
Draw the flowchart that represents the logic of the program which accepts the type of customer (it could be type A, B, C or D) and the number of hours the customer has
parked his car. If the type of the customer is A, the parking fee is 30.00 per hour, else if B, the parking fee is 40.00 per hour; else if C, the parking fee is 50.00 
per hour; else if D, the parking fee is 60.00 per hour. The program should compute and display the parking fee that the customer should pay.
*/

#include <stdio.h>
#include <string.h>

int main () {
	char cusType[100], _A[] = "A", _B[] = "B", _C[] = "C", _D[] = "D";
	float hrsParked, fee, fFee;
	
	printf("Customer type: ");
	scanf("%s", &cusType);
	printf("Hours parked: ");
	scanf("%f", &hrsParked);
	
	if (strcmp(cusType, _A) == 0) {
		fee = 30.00;	
	}
	else if (strcmp(cusType, _B) == 0) {
		fee = 40.00;	
	}
	else if (strcmp(cusType, _C) == 0) {
		fee = 50.00;	
	}
	else if (strcmp(cusType, _D) == 0) {
		fee = 60.00;	
	}
	
	fFee = hrsParked * fee;
	
	printf("\nParking fee: %.2f", fFee);
	
	return 0;
}