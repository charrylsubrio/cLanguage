/*
Write a program that accepts the fare and the status of the passenger. If the status is “senior citizen” or “student”, there is a discount 
of 20% of the fare; otherwise, there is a discount of 5% of the fare. The program should compute the discount and the discounted fare of the
passenger. It should display the original fare, the discount and the discounted fare.
*/

#include <stdio.h>
#include <string.h>

int main() {
	float fare, dis, distedFare;
	char senior[] = "senior citizen", student[] = "student", status[100];
	
	printf("Enter the fare amount: ");
	scanf("%f", &fare);
	printf("\nAre you a senior citizen or student?");
	printf("\nInput \"senior citizen\" or \"student\": ");
	scanf("%s", &status);
	
	if (strcmp(status, senior) == 0 || strcmp(status, student) == 0) {
		dis = fare * 0.20;
	} 
	else {
		dis = fare * 0.05;	
	}
	
	distedFare = fare - dis;
	
	printf("\nOriginal Fare: %.2f", fare);
	printf("\nDiscount: %.2f", dis);
	printf("\nDiscounted Fare: %.2f", distedFare);
	
	return 0;
}
