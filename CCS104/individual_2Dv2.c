/*
Write a program that accepts from the user the scores of 3 students in the 4 quizzes and stores these scores in an array. Display the scores of each student.
It should also do the following tasks:
 a. Ask the user to choose whose scores to display (student 1, student 2 or student 3).  
 b. Ask the user to choose a student number, and computes and displays the average score of that student.
 c. Ask the user to choose a quiz number (columns: 1, 2, 3 or 4), it finds the highest score, finds lowest score,  and computes and displays the average score of the specific quiz.

Your program should be menu-driven and includes the following options:
 1. Display all scores
 2. Display the scores of a specific student
 3. Display the average score of a specific student
 4. Display quiz statistics (Find the lowest score, highest score, average score) 

Note:  Make sure to include functions in your program, not just the main function.  

You may consider the following functions:
 a. acceptScores() - accept scores of 3 students in the 4 quizzes and store these into an array
 b. displayStudentScore() - displays the scores of a specific student. It allows the user to input the student number.
 c. displayAllScores() - displays all the scores of all the students
 d. computeStudentAve() - calculates the average score of a specific student.  It allows the user to input the student number.
 e. showQuizStats() - should compute the lowest, highest and average score of a specific quiz.  It allows the user to input the quiz number.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define STUDENTS 3
#define QUIZZES 4

void acceptScores(int arr[STUDENTS][QUIZZES]);
int getMenuChoice();
void displayAllScores(int arr[STUDENTS][QUIZZES]);
void displayStudentScore(int arr[STUDENTS][QUIZZES]);
void computeStudentAve(int arr[STUDENTS][QUIZZES]);
void showQuizStats(int arr[STUDENTS][QUIZZES]);

int main() {
	int scores[STUDENTS][QUIZZES], choice;
	
	acceptScores(scores);
	
	do {
		choice = getMenuChoice(choice);

		switch (choice) {
			case 1:
				displayAllScores(scores);
				break;
			case 2:
				displayStudentScore(scores);	
				break;			
		}
	} while (choice != 5);
	
	
	
	computeStudentAve(scores);
	showQuizStats(scores);
	
	return 0;
}

void acceptScores(int arr[STUDENTS][QUIZZES]) {
	for(int row = 0; row < STUDENTS; row++) {
		for(int col = 0; col < QUIZZES; col++) {
			do {
				printf("Score of Student %d in Quiz %d: ", row + 1, col + 1);
				scanf("%d", &arr[row][col]);
				
				if(arr[row][col] < 0) {
					printf("Invalid input!\n\n");
				}	
			} while(arr[row][col] < 0);
		}
	}
}

int getMenuChoice(int choice) {
	do {
		printf("\n\nMAIN MENU\n\n");
		printf("[1] - Display all scores\n");
		printf("[2] - Display the scores of a specific student\n");
		printf("[3] - Display the average score of a specific student\n");
		printf("[4] - Display quiz statistics\n\n");
		printf("Enter your choice: ");

		if (scanf("%d", &choice) != 1 || choice <= 0 || choice >= 5) {
			printf("Invalid input!\n");
		}
	} while (choice <= 0 || choice >= 5);

	return choice;
}

void displayAllScores(int arr[STUDENTS][QUIZZES]) {
	printf("\n\nAll Scores:\n\n");
	
	for(int row = 0; row < STUDENTS; row++) {
		for(int col = 0; col < QUIZZES; col++) {
			printf("%d\t", arr[row][col]);
		}
		printf("\n");
	}
}

void displayStudentScore(int arr[STUDENTS][QUIZZES]) {
	int rowNum;
	
	do {
		printf("\nInput Student number to be displayed: ");
		scanf("%d", &rowNum);
		
		if(rowNum < 1 || rowNum > 3) {
			printf("Invalid Student number!.\n");
		}
	} while(rowNum < 1 || rowNum > 3);
	
	printf("\n");
	
	for(int col = 0; col < QUIZZES; col++) {
		printf("%d\t", arr[rowNum - 1][col]);
	}
}

void computeStudentAve(int arr[STUDENTS][QUIZZES]) {
	int rowNum, sum = 0;
	float avrg;
	
	do {
		printf("\nInput row number to be displayed: ");
		scanf("%d", &rowNum);
		
		if(rowNum < 1 || rowNum > 3) {
			printf("Invalid row number! Choose between row 1 - 3.\n");
		}
	} while(rowNum < 1 || rowNum > 3);
	
	printf("\n");
	
	for(int col = 0; col < QUIZZES; col++) {
		sum += arr[rowNum - 1][col];
	}
	
	avrg = (float)sum / QUIZZES;
	
	printf("Average: %.2f", avrg);
}

void showQuizStats(int arr[STUDENTS][QUIZZES]) {
	int colNum, sum = 0;
	float avrg;
	
	printf("\n\n");
	
	do {
		printf("\nInput column number to be displayed: ");
		scanf("%d", &colNum);
		
		if(colNum < 1 || colNum > QUIZZES) {
			printf("Invalid column number! Choose between column 1 - 4.\n");
		}
	} while(colNum < 1 || colNum > QUIZZES);
	
	printf("\n");
	
	for(int row = 0; row < STUDENTS; row++) {
		printf("%d\n\n", arr[row][colNum - 1]);
		sum += arr[row][colNum - 1];
	}

	avrg = (float)sum / STUDENTS;
	
	printf("\n\nAverage: %.2f", avrg);
	
	int highest = arr[0][colNum - 1];
	int lowest = arr[0][colNum - 1];
	
	for(int row = 1; row < STUDENTS; row++) {
		if(arr[row][colNum - 1] > highest) {
			highest = arr[row][colNum - 1];
		}
		
		if(arr[row][colNum - 1] < lowest) {
			lowest = arr[row][colNum - 1];
		}
	}
	
	printf("\n\nHighest: %d", highest);
	printf("\n\nLowest: %d", lowest);
}