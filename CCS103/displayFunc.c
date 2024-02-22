#include <stdio.h>

float acceptDistance(void);
float computeMiles(float);
float computeMeters(float);
void displayDistance(float, float, float);

int main() {
	float dis, miles, meters;
	
	dis = acceptDistance();
	miles = computeMiles(dis);
	meters = computeMeters(dis);
	displayDistance(dis, miles, meters);

	return 0;
}

float acceptDistance(void) {
	float dis;
	
	printf("Enter Distance in Kilometers: ");
	scanf("%f", &dis);
	
	return dis;
}

float computeMiles(float olik) {
	float miles;
	
	miles = olik / 1.609;
	
	return miles;
}

float computeMeters(float kilo) {
	float meters;
	
	meters = kilo * 1000;
	
	return meters;
}

void displayDistance(float dis, float miles, float meters) {
	printf("\nDistance in Kilometers: %.2f", dis);
	printf("\n%.2f kilometers in Miles: %.2f", dis, miles);
	printf("\n%.2f kilometers in Meters: %.2f", dis, meters);
	
}
