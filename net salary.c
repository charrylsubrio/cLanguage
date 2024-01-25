/*
Write a program that accepts from the user the number of days worked by an employee within a month and the rate per day of that employee. 
It should also accept an amount for SSS contribution, Pag-ibig fund, and Philhealth contribution. All these are deductions. The tax is also
deducted from the employees salary. Tax is 1% of the gross salary. The program should compute for the gross salary (days worked times rate 
per day), total deduction (sum of all the deductions), and net salary (difference of gross and total deduction).
*/

#include <stdio.h>

int main () {
	
	int daysWorked, perDay, sss, pagIbig, philHealth, gross; 
	float tax, totalDeduct, net;
	
	printf("INPUT THE FOLLOWING:");
	printf("\nNumber of days worked: ");
	scanf("%d", &daysWorked);
	printf("Rate per day: ");
	scanf("%d", &perDay);
	printf("SSS contribution: ");
	scanf("%d", &sss);
	printf("Pag-ibig fund contribution: ");
	scanf("%d", &pagIbig);
	printf("Philhealth conribution: ");
	scanf("%d", &philHealth);
	
	gross = daysWorked * perDay;
	tax = gross * 0.01;
	totalDeduct = sss + pagIbig + philHealth + tax;
	net = gross - totalDeduct;
	
	printf("\nGross salary: %d", gross);
	printf("\nTotal deduction: %.2f", totalDeduct);
	printf("\nNet salary: %.2f", net); 
	
	return 0;
	
}