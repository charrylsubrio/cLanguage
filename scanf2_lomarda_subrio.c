/************************************************************
LOMARDA, ISMAEL & SUBRIO, CHARRYL

This program allows the user to input the final grades of the three subjects and displays them.

09-24-2023
************************************************************/

#include <stdio.h>

int main() {
	
	float en1, fi1, so1;
	
	printf("Input the final grades of Lon Gwapo:");
	
	printf("\nEnglish 1 >> ");
	scanf("%f", &en1);
	
	printf("Filipino 1 >> ");
	scanf("%f", &fi1);
	
	printf("SocSci 1 >> ");
	scanf("%f", &so1);
	
	printf("\nFinal Grades: Lon Gwapo");
	printf("\n\nEnlish 1\tFilipino 1\tSocSci 1");
	printf("\n%.1f\t\t%.1f\t\t%.1f", en1, fi1, so1);
	
	return 0;
	
}