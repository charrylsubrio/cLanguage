/*
Draw the flowchart that represents the logic of the program which accepts a number. If the number is positive, the program should display “Positive”; else of the number
is negative, the program should display “Negative”; else it should display “Zero”.
*/

#include <stdio.h>
#include <string.h>

int main () {
	int num1;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	if (num1 > 0) {
		printf("Positive");	
	}
	else if (num1 < 0) {
		printf("Negative");	
	}
	else {
		printf("Zero");	
	}

	return 0;
}