/*
	Write a C program that accepts the radius of a circle from the user and find the diameter, circumference and area of the circle.
	It should display the calculated diameter, circumference and area of the circle.
*/

#include <stdio.h>

main() {
	float rad, dia, cir, area;
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &rad);
	
	dia = 2 * rad;
	cir = 2 * 3.14 * rad;
	area = 3.14 * rad * rad;
	
	printf("\nDiameter= %.2f", dia);
	printf("\nCircumference= %.2f", cir);
	printf("\nArea= %.2f", area);
}

