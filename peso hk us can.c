/*
Write a program that accepts from the user an amount in Peso. It should compute the equivalent amount in HK dollar, 
US dollar and Canadian dollar. Display the amount in Peso and the equivalent amount in the different currencies. 
Given:
1 HK dollar = Php 6.25
1 US dollar = Php 48.47
1 Can. Dollar = Php 36.43
*/

#include <stdio.h>

#define hkRate 6.25
#define usRate 48.47
#define canRate 36.43

int main () {
	
	float peso, hkDol, usDol, canDol;

	printf("Enter amount in Peso: ");
	scanf("%f", &peso);

	hkDol = peso / hkRate;
	usDol = peso / usRate;
	canDol = peso / canRate;

	printf("\nAmount in Peso: %.2f", peso);
	printf("\n\nEquivalent amount in:");
	printf("\n\nHK Dollar: %.2f", hkDol);
	printf("\nUS Dollar: %.2f", usDol);
	printf("\nCANADIAN Dollar: %.2f", canDol);
	
	return 0;
	
}