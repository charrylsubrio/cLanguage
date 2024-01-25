/*
The dosage of a certain
medicine:

Age
bracket		Dosage

below 10 	5 mg
11 to 18 	10 mg
19 to 40 	20 mg
41 to 60 	30 mg
above 60 	40 mg
*/

#include <stdio.h>

int main () {
	int age, dosage;
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	if (age <= 10) {
		dosage = 5;
	}
	else if (age >= 11 && age <= 18) {
		dosage = 10;
	}
	else if (age >= 19 && age <= 40) {
		dosage = 20;
	}
	else if (age >= 41 && age <= 60) {
		dosage = 30;
	}
	else {
		dosage = 40;
	}
	
	printf("\nRecommended medicine dosage: %d", dosage);
	
	return 0;
}