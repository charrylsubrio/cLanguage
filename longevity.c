/*
The longevity pay of employees is based from the number of years the employee has worked in the company. Refer to the table below for the amounts:

Number of years 	Longevity Pay
Above 25 			10,000.00
18 to 25 			8,000.00
14 to 17 			6,000.00
10 to 13 			4,500.00
6 to 9 				3,000.00
3 to 5 				2,000.00
No pay for below 3 years

Draw the flowchart that represents the logic of the program which accepts the number of years that the employee has worked in the company. The program should
display the longevity pay of the employee.
*/

#include <stdio.h>

int main () {
	int years, pay;
	
	printf("Enter the number of years worked: ");
	scanf("%d", &years);
	
	if (years > 25) {
		printf("\nLongevity Pay: Php 10,000.00");			
	}
	else if (years >= 18 && years <= 25) {
		printf("\nLongevity Pay: Php 8,000.00");			
	}
	else if (years >= 14 && years <= 17) {
		printf("\nLongevity Pay: Php 6,000.00");			
	}
	else if (years >= 10 && years <= 13) {
		printf("\nLongevity Pay: Php 4,500.00");			
	}
	else if (years >= 6 && years <= 9) {
		printf("\nLongevity Pay: Php 3,000.00");			
	}
	else if (years >= 3 && years <= 5) {
		printf("\nLongevity Pay: Php 2,000.00");			
	}
	else {
		printf("\nNo Longevity pay for below 3 years");
	}
	
	return 0;
	
}