/*
Draw the flowchart that represents the logic of the program which accepts the type of customer (it could be type A, B, C or D) and the number of hours the customer has
parked his car. If the type of the customer is A, the parking fee is 30.00 per hour, else if B, the parking fee is 40.00 per hour; else if C, the parking fee is 50.00 
per hour; else if D, the parking fee is 60.00 per hour. The program should compute and display the parking fee that the customer should pay.
*/

#include <stdio.h>

#define fee1 30.00
#define fee2 40.00
#define fee3 50.00
#define fee4 60.00

int main () {
	char type;
	float hours, hrFee, pFee;
	
	printf("Enter customer type (A-D): ");
	type = getche();
	printf("\nEnter hours parked: ");
	scanf("%f", &hours);
	
	switch (toupper(type)) {
		case 'A': 
			hrFee = fee1;
			break;
		case 'B': 
			hrFee = fee2;
			break;		
		case 'C': 
			hrFee = fee3;
			break;		
		case 'D': 
			hrFee = fee4;
			break;
		default:
			printf("\nwrong type\n");
	}
	
	pFee = hrFee * hours;
	
	printf("\nFee per hour: %.2f", hrFee);
	printf("\nTotal parking fee: %.2f", pFee);
	
	/* fFee = hrsParked * fee;
	
	printf("\nParking fee: %.2f", fFee); */
	
	return 0;
}