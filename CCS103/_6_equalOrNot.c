/*
	6.)	Write a C program to accept two integers and check whether they are equal or not.  
		It should display “The integers are equal” or ““The integers are not equal”.
*/

#include <stdio.h>

main() {
	int num1, num2;
	
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	
	if(num1 == num2) {
		printf("\nThe integers are equal");
	} else {
		printf("\nThe integers are not equal");
	}
}
