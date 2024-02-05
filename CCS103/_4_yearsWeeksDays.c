/*
	4.) Write a C program that accepts number of days from user and converts it to years, weeks and days.
		It should display the number of years weeks and days. 
		Example:  373 days = 1 year, 1 week, 1 day (given that there are 365 days in a year).
*/

#include <stdio.h>

int main() {
	int numDays, numDays2, years, weeks, days;
	
	printf("Enter number of Days: ");
	scanf("%d", &numDays);
	
	numDays2 = numDays;
	
	if(numDays >= 365) {
		years = numDays / 365;
	} else {
		years = 0;
	}
	numDays -= years * 365;
	
	if(numDays >= 7) {
		weeks = numDays / 7;
	} else {
		weeks = 0;
	}
	numDays -= weeks * 7;
	
	if(numDays >= 1) {
		days = numDays / 1;
	} else {
		days = 0;
	}
	numDays -= days * 1;
	
	printf("\n%d days = %d year/s, %d week/s, %d day/s", numDays2, years, weeks, days);

	return 0;
}
