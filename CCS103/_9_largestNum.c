/*
	9.)	Write a C program that accepts 3 numbers from the user.
		It should find the largest number among the three numbers.
		The program should display the largest number.
*/

#include <stdio.h>

int main() {
	int num1, num2, num3;
	
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	
	printf("Enter 3rd number: ");
	scanf("%d", &num3);
	
	if(num1 > num2 && num1 > num3) {
		printf("\n%d", num1);
	} else if(num2 > num1 && num2 > num3) {
		printf("\n%d", num2);
	} else {
		printf("\n%d", num3);
	}
	
	return 0;
}
