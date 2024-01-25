/*
Mass schedule per year level:
LEVEL		DAY
1st year 	Monday
2nd year 	Tuesday
3rd year 	Wednesday
4th year 	Thursday
5th year 	Friday
*/

#include <stdio.h>

int main () {
	int level; 
	
	printf("Enter year level (1-5): ");
	scanf("%d", &level);
	
	printf("\nMass schedule: ");
	
	if (level == 1) {
		printf("Monday");
	}
	else if (level == 2) {
		printf("Tuesday");
	}
	else if (level == 3) {
		printf("Wednesday");
	}
	else if (level == 4) {
		printf("Thursday");
	}
	else if (level == 4) {
		printf("Friday");
	}
	else {
		printf("No sched, Please input 1-5 only!");
	}
	
	return 0;
}