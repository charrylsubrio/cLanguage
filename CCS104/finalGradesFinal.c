/*
	Write a program that accepts the final grade (college grade) of 10 students from the user and stores these into an array.
	The program should count how many grades are from 1.0 to 1.9, how many are from 2.0 to 3.0, and how many have failing grades, meaning more than 3.0.
	The program should display all these counts.  It should also display “high performance level” if more than 70% passed (grades from 1.0 to 3.0), otherwise,
	it should display “low performance level”.
	
	a)  accept 10 grades
	b) high grades count
	c) mid grades count
	d) low grades count
	e) display high, mid and low grades
	f) display performance level 
	g) size definition
	
	Sep. 18, 2024	 
*/

#include <stdio.h>

#define SIZE 10

void acceptGrades(float arr[]);
void countHighMidLow(float arr[], int *highCtr, int *midCtr, int *lowCtr);
void displayCounts(int *highCtr, int *midCtr, int *lowCtr);
void displayLevel(int *highCtr, int *midCtr);

int main() {
	float grades[SIZE];
	int highCtr = 0, midCtr = 0, lowCtr = 0;
	
	acceptGrades(grades);
	countHighMidLow(grades, &highCtr, &midCtr, &lowCtr);
	displayCounts(&highCtr, &midCtr, &lowCtr);
	displayLevel(&highCtr, &midCtr);
	
	return 0;
}

void acceptGrades(float arr[]) {
	printf("FINAL GRADES:\n\n");
	
	for(int i = 0; i < SIZE; i++) {
		do {
			printf("Student %d: ", i + 1);
			
			if(scanf("%f", &arr[i]) != 1 || arr[i] <= 0 || arr[i] > 5) {
				fflush(stdin);
				printf("Please enter from 1.0 - 5.0 only.\n\n");
			}
		} while(arr[i] <= 0 || arr[i] > 5);
	}
}

void countHighMidLow(float arr[], int *highCtr, int *midCtr, int *lowCtr) {
	for(int i = 0; i < SIZE; i++) {
		if(arr[i] >= 1.0 && arr[i] <= 1.9) {
			*highCtr += 1; 	
		} else if(arr[i] >= 2.0 && arr[i] <= 3.0) {
			*midCtr += 1;							
		} else {
			*lowCtr += 1;
		}
	}
}

void displayCounts(int *highCtr, int *midCtr, int *lowCtr) {
	printf("\nHigh Grades: %d", *highCtr);
	printf("\nMid  Grades: %d", *midCtr);
	printf("\nLow  Grades: %d", *lowCtr);
}

void displayLevel(int *highCtr, int *midCtr) {
	if(*highCtr + *midCtr > SIZE * 0.70) {
		printf("\n\nHigh Performance Level");
	} else {
		printf("\n\nLow Performance Level");
	}					
}