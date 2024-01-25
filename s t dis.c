/*
Write a program that accepts the fare and the status of the passenger. If the status is “senior citizen” or “student”, there is a discount 
of 20% of the fare; otherwise, there is a discount of 5% of the fare. The program should compute the discount and the discounted fare of the
passenger. It should display the original fare, the discount and the discounted fare.
*/

#include <stdio.h>

#define senStuR 0.20
#define regR 0.05

int main() {
	float fare, dis, distedFare;
	char stat;
	
	printf("Enter status: ");
	stat = getchar();
	
	printf("Enter the fare amount: ");
	scanf("%f", &fare);
	
	if (stat == 'S' || stat == 's' || stat == 'T' || stat == 't') {
		dis = fare * senStuR;
	} 
	else if (stat == 'R' || stat == 'r') {
		dis = fare * regR;	
	}
	else {
		printf("Please input S, T & R");
	}
	
	distedFare = fare - dis;
	
	printf("\nOriginal Fare: %.2f", fare);
	printf("\nDiscount: %.2f", dis);
	printf("\nDiscounted Fare: %.2f", distedFare);
	
	return 0;
}
