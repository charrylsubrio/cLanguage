#include <stdio.h>

float acceptDistance();
float computeMiles(float);
float computeMeters(float);
void displayDistance(float, float, float);

int main() {
	float kilo, miles, meters;
	
	kilo = acceptDistance();
	miles = computeMiles(kilo);
	meters = computeMeters(kilo);
	
	displayDistance(kilo, miles, meters);
	
	return 0;
}

float acceptDistance() {
	float kilo;
	
	printf("Enter Distance in Kilometers: ");
	scanf("%f", &kilo);
	
	return kilo;
}

float computeMiles(float kilo) {
	float miles;
	
	miles = kilo / 1.609;
	
	return miles;
}

float computeMeters(float kilo) {
	float meters;
	
	meters = kilo * 1000;
	
	return meters;
}

void displayDistance(float kilo, float miles, float meters) {
	printf("\nInputted Distance in Kilometers: %.2f", kilo);
	printf("\n%.2f Kilometers in Miles: %.2f", kilo, miles);
	printf("\n%.2f Kilometers in Meters: %.2f", kilo, meters);
}