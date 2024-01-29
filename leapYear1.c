/*
	10)	A leap year is a year that contains an additional day in February month i.e. February 29.
	It means that a leap year has 366 days instead of the usual 365 days.
	A leap year occurs once every four years and to check whether a year is a leap year, the following conditions should be satisfied: 
		a.	t is a multiple of 4 but not of 100, or
		b.	It is a multiple of 400.
*/

#include <stdio.h>

main() {
	int year;
	
	printf("Enter any year: ");
	scanf("%d", &year);
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("\nLeap Year");
	} else {
		printf("\nNot a Leap Year");
	}
}


