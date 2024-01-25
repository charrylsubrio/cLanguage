/*
Benefit for each family:

No. of
children	Benefit

0 - 5 		3,000.00
6 - 9 		5,000.00
10 - 12 	8,000.00
above 12 	12,000.00
*/

#include <stdio.h>

int main () {
	int childCount; 
	
	printf("Enter number of children: ");
	scanf("%d", &childCount);
	
	printf("\nAmount of benefit: Php ");
	
	if (childCount >= 0 && childCount <= 5) {
		printf("3,000.00");
	}
	else if (childCount >= 6 && childCount <= 9) {
		printf("5,000.00");
	}
	else if (childCount >= 10 && childCount <= 12) {
		printf("8,000.00");
	}
	else {
		printf("12,000.00");
	}
	
	return 0;
}