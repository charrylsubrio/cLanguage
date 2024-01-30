/*
	8.)	Write a C program that accepts the age of a candidate and determine whether he is eligible to cast his/her own vote.
		The eligible age is 18 and above.
		It should display “Congratulations, you eligible to cast your vote” or “Sorry, you are not eligible to cast your vote”.
*/

#include <stdio.h>

main() {
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age >= 18) {
		printf("\nCongratulations, you are eligible to cast your vote");
	} else {
		printf("\nSorry, you are not eligible to cast your vote");
	}
}
