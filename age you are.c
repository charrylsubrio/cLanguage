/*
Draw the flowchart that represents the logic of the program which accepts an age of a person. If the age is from 0 to 12, display “you are very young”; else if the age 
is from 13 to 18, display “you are a teenager”; else if age is from 19 to 59, display “you are an adult”; else if 60 and above, display “you are a senior citizen”.
*/

#include <stdio.h>

int main () {
	int age; 
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("\nRemarks: ");
	
	if (age >= 0 && age <= 12) {
		printf("you are very young");
	}
	else if (age >= 13 && age <= 18) {
		printf("you are a teenager");
	}
	else if (age >= 19 && age <= 59) {
		printf("you are an adult");
	}
	else{
		printf("you are a senior citizen");
	}
	
	return 0;
}