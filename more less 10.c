/*
Write a program that accepts an integer from the user. If the integer is above 10,
display “more than 10”; else display “10 and below”.
*/

#include <stdio.h>

int main() {
	int num1;

	printf("Enter a number: ");
	scanf("%d", &num1);
		
	if (num1 > 10) {
		printf("more than 10");
	}
	else {
		printf("10 and below");
	}
	
	return 0;
}
