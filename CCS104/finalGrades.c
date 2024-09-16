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
*/

#include <stdio.h>

#define SIZE 10

void acceptGrades(float arr[]);
int countHigh(float arr[]);
int countMid(float arr[]);
int countLow(float arr[]);
void displayLevel(int highCtr, int midCtr, int lowCtr);

int main() {
	float grades[SIZE];
	int highCtr, midCtr, lowCtr;
	
	acceptGrades(grades);
	highCtr = countHigh(grades);
	midCtr = countMid(grades);
	lowCtr = countLow(grades);
	
	printf("\nHigh Grades: %d", highCtr);
	printf("\nMid  Grades: %d", midCtr);
	printf("\nLow  Grades: %d", lowCtr);
	
	displayLevel(highCtr, midCtr, lowCtr);
	
	return 0;
}

void acceptGrades(float arr[]) {
	for(int i = 0; i < SIZE; i++) {
		do {
			printf("Final Grade of Student %d: ", i + 1);
			scanf("%f", &arr[i]);
			
			if(arr[i] <= 0) {
				printf("Invalid input!\n\n");
			}
		} while(arr[i] <= 0);
	}
	
}

int countHigh(float arr[]) {
	int counter = 0;
	
	for(int i = 0; i < SIZE; i++) {
		if(arr[i] >= 1.0 && arr[i] <= 1.9) {
			counter += 1; 	
		}							
	}
	
	return counter;
}

int countMid(float arr[]) {
	int counter = 0;
	
	for(int i = 0; i < SIZE; i++) {
		if(arr[i] >= 2.0 && arr[i] <= 3.0) {
			counter += 1; 	
		}							
	}
	
	return counter;
}

int countLow(float arr[]) {
	int counter = 0;
	
	for(int i = 0; i < SIZE; i++) {
		if(arr[i] > 3.0) {
			counter += 1; 	
		}							
	}
	
	return counter;
}

void displayLevel(int highCtr, int midCtr, int lowCtr) {
	if(highCtr + midCtr > SIZE * 0.70) {
		printf("\n\nHigh Performance Level");
	} else {
		printf("\n\nLow Performance Level");
	}					
}