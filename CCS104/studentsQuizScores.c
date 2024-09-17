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
void displayStudentScore(int arr[STUDENTS][QUIZZES]);
void displayAllScores(int arr[STUDENTS][QUIZZES]);
void computeStudentAve(int arr[STUDENTS][QUIZZES]);
void showQuizStats(int arr[STUDENTS][QUIZZES]);

int getMenuChoice(int choice);
void clearScrn();

int main() {
	int scores[STUDENTS][QUIZZES], choice;
	
	acceptScores(scores);
	
	do {
		system("cls");
		choice = getMenuChoice(choice);
		system("cls");
		
		switch (choice) {
			case 1:
				displayAllScores(scores);
				clearScrn();
				break;
			case 2:
				displayStudentScore(scores);
				clearScrn();
				break;
			case 3:
				computeStudentAve(scores);
				clearScrn();
				break;
			case 4:
				showQuizStats(scores);
				clearScrn();
				break;					
		}
	} while (choice != 0);	
	
	return 0;
}

void acceptScores(int arr[STUDENTS][QUIZZES]) {
	for(int row = 0; row < STUDENTS; row++) {
		printf("SCORES OF STUDENT %d:\n", row + 1);
		
		for(int col = 0; col < QUIZZES; col++) {
			do {
				printf(" QUIZ %d: ", col + 1);
				
				if(scanf("%d", &arr[row][col]) != 1 || arr[row][col] < 0) {
					fflush(stdin);	
					printf("Please enter positive numbers only.\n\n");
				}	
			} while(arr[row][col] < 0);
		}
		
		printf("\n");
	}
}

void displayStudentScore(int arr[STUDENTS][QUIZZES]) {
	int rowNum;
	
	do {
		printf("==== SCORES OF A SPECIFIC STUDENT ====\n\n");
		printf("Enter Student number to be displayed: ");
		
		if(scanf("%d", &rowNum) != 1 || rowNum < 1 || rowNum > 3) {
			printf("\nPlease enter from 1 - %d only.", STUDENTS);
			clearScrn();
		} else {
			printf("\n\t");
		}
	} while(rowNum < 1 || rowNum > 3);
	
	for(int i = 1; i <= QUIZZES; i++) {
		printf("\tQuiz-%d", i);
		
		if(i == QUIZZES) {
			printf("\n");	
		}
	}

	printf("\nStudent-%d\t", rowNum);
	
	for(int col = 0; col < QUIZZES; col++) {
		printf("%d\t", arr[rowNum - 1][col]);
		
		if(col == QUIZZES - 1) {
			printf("\n");	
		}
	}
}

void displayAllScores(int arr[STUDENTS][QUIZZES]) {
	printf("==== ALL SCORES ====\n\n\t");
	
	for(int i = 1; i <= QUIZZES; i++) {
		printf("\tQuiz-%d", i);
		
		if(i == QUIZZES) {
			printf("\n");	
		}
	}
	
	for(int row = 0; row < STUDENTS; row++) {
		printf("\nStudent-%d\t", row + 1);
		
		for(int col = 0; col < QUIZZES; col++) {
			printf("%d\t", arr[row][col]);
		}
		
		printf("\n");
	}
}

void computeStudentAve(int arr[STUDENTS][QUIZZES]) {
	int rowNum, sum = 0;
	float avrg;
	
	do {
		printf("==== AVERAGE SCORE OF A SPECIFIC STUDENT ====\n\n");
		printf("Enter Student number to be displayed: ");
		
		if(scanf("%d", &rowNum) != 1 || rowNum < 1 || rowNum > 3) {
			printf("\nPlease enter from 1 - %d only.", STUDENTS);
			clearScrn();
		}
	} while(rowNum < 1 || rowNum > 3);
	
	for(int col = 0; col < QUIZZES; col++) {
		sum += arr[rowNum - 1][col];
	}
	
	avrg = (float)sum / QUIZZES;
	
	printf("\nAverage score of student %d: %.2f", rowNum, avrg);
}

void showQuizStats(int arr[STUDENTS][QUIZZES]) {
	int colNum, sum = 0;
	float avrg;
	
	do {
		printf("==== QUIZ STATISTICS ====\n");
		printf("\nEnter Quiz number to be displayed: ");
		
		if(scanf("%d", &colNum) != 1 || colNum < 1 || colNum > QUIZZES) {
			printf("\nPlease enter from 1 - %d only.", QUIZZES);
			clearScrn();
		}
	} while(colNum < 1 || colNum > QUIZZES);
	
	printf("\n\t\tQuiz-%d\n\n", colNum);
	
	for(int row = 0; row < STUDENTS; row++) {
		printf("Student-%d\t%d\n\n", row + 1, arr[row][colNum - 1]);
		sum += arr[row][colNum - 1];
	}

	avrg = (float)sum / STUDENTS;
	
	int highest = arr[0][colNum - 1], lowest = arr[0][colNum - 1];
	
	for(int row = 1; row < STUDENTS; row++) {
		if(arr[row][colNum - 1] > highest) {
			highest = arr[row][colNum - 1];
		}
		
		if(arr[row][colNum - 1] < lowest) {
			lowest = arr[row][colNum - 1];
		}
	}
	
	printf("\nHighest score: %d", highest);
	printf("\nLowest  score: %d", lowest);
	printf("\nAverage score: %.2f\n", avrg);
}

int getMenuChoice(int choice) {
	do {
		printf("==== MAIN MENU ====\n\n");
		printf("[1] - Display all scores\n");
		printf("[2] - Display the scores of a specific student\n");
		printf("[3] - Display the average score of a specific student\n");
		printf("[4] - Display quiz statistics\n\n");
		printf("[0] - Exit\n\n");
		printf("Enter your choice: ");

		if (scanf("%d", &choice) != 1 || choice < 0 || choice > 4) {
			printf("\nPlease enter from 0 - 4 only.");
			clearScrn();
		}
	} while (choice < 0 || choice > 4);

	return choice;
}

void clearScrn() {
	printf("\n\nPress any key to continue . . . ");
	getch();
	fflush(stdin);
	system("cls");
}