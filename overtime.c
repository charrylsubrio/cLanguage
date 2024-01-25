/*
Write a program that accepts the number of hours worked and the rate per hour of an employee from the user. If the number of hours worked is
above 40 hours, compute the overtime pay (overtime times 150% of rate per hour). The gross salary is computed as number of hours worked times
rate per hour plus overtime pay, if there is any. The program should compute and display the gross salary. 
*/

#include <stdio.h>

int main() {
	float hrsWrkd, hrRate, ovrtm, overP, grossSalary;

	printf("Enter the number of hours worked: ");
	scanf("%f", &hrsWrkd);
	printf("Enter the rate per hour: ");
	scanf("%f", &hrRate);
	
	if (hrsWrkd > 40) {
		ovrtm = hrsWrkd - 40;
		hrsWrkd -= ovrtm;
		overP = ovrtm * (hrRate * 1.5);
		grossSalary = hrsWrkd * hrRate + overP;
	} 
	else {
		grossSalary = hrsWrkd * hrRate;	
	}
	
	printf("Gross Salary: %.2f", grossSalary);
	
	return 0;
}
