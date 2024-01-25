/*
Write a program that accepts from the user a weight of an object in kilograms. The program should compute the equivalent weight in gram, milligram and metric ton.
1 metric ton = 1000 kilograms
1 kilogram = 1000 grams
1 gram = 1000 milligrams
*/

#include <stdio.h>

int main () {
	
	int kg, gram, milligram, metricTon;
	
	printf("Enter a weight of an object in kilogram: ");
	scanf("%d", &kg);
	
	gram = kg * 1000;
	milligram = gram * 1000;
	metricTon = kg / 1000;
	
	printf("\nInputted weight in kiligram: %d", kg);
	printf("\n\nIt's equivalent weight in:");
	printf("\n\nGram: %d", gram);
	printf("\nMilligram: %d", milligram);
	printf("\nMetric Ton: %d", metricTon);
	
	return 0;
	
}