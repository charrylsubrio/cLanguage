#include <stdio.h>
#include <string.h>

//global variable
int gradYr;

//function prototypes
int getY;
int computeGradYr(int);

int main() {
	char name[50];
	int yearLvl;
	
	printf("Enter Your\n\nName: ");
	gets(name);
	
	printf("Year level: ");
	scanf("%d", &yearLvl);
	
	gradYr = computeGradYr(yearLvl);
	
	printf("\nInputted\n\nName: %s", name);
	printf("\nYear Level: %d", yearLvl);
	printf("\nGraduation Year: %d", gradYr);
	printf("\n\nHi %s! You're on track to graduate in %d. \n\nKeep up the coding, and remember, the future is digital!\n", name, gradYr);
	
	return 0;
}

int computeGradYr(int yearLvl) {
	gradYr = 2024 + (4 - yearLvl);
	
	return gradYr;
}