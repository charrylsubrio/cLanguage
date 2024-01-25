/*
Write a program that accepts from the user the distance travelled by a bus to a certain destination. It should also accept the speed of the 
bus (km per hour). Compute and display the duration of the travel in hours and in minutes. For example, if the input are: distance travelled 
is 65 km and the speed is 50 km per hour, the duration is 1.3 hours or 78 minutes.
*/

#include <stdio.h>

int main () {
	
	float disTravelled, kmSpeed, hoursDur, minsDur;
	
	printf("INPUT THE FOLLOWING:");
	printf("\nDistance travelled in km: ");
	scanf("%d", &disTravelled);
	printf("Speed in km: ");
	scanf("%d", &kmSpeed);
	
	hoursDur = disTravelled / kmSpeed;
	minsDur = hoursDur * 60;
	
	printf("\nDuration of the travel in hours: %.1f", hoursDur);
	printf("\nDuration of the travel in minutes: %.1f", minsDur);
	
	return 0;
	
}



























































































































































































































































































































































































































































































































































































































































