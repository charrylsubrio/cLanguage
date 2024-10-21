#include <stdio.h>

#define SIZE 8

int getMenuChoice(int);
void displayElements();
void bubbleSort();
void selectionSort();
void insertionSort();

int main() {
	int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8}, choice;
	
	choice = getMenuChoice(choice);
	
	switch(choice) {
		case 1:
			displayElements(arr);
			break;
		case 2:
			//bubbleSort();
			break;
		case 3:
			//selectionSort();
			break;
		case 4:
			//insertionSort();
			break;
	}
	
	return 0;
}

int getMenuChoice(int choice) {
	printf("MENU\n");
	printf("\n[1] - display all elements");
	printf("\n[2] - bubble sort (ascending)");
	printf("\n[3] - selection sort (descending)");
	printf("\n[4] - insertion sort (ascending)");
	printf("\n[0] - exit");
	
	do{
		printf("\n\nEnter choice: ");
		
		if(scanf("%d", &choice) != 1 || choice < 0 || choice > 4) {
			fflush(stdin);
			printf("Error");
		}
	} while(choice < 0 || choice > 4);
	
	return choice;
}

void displayElements(int arr[SIZE]) {
	for(int i = 0; i < SIZE; i++) {
		printf("%d\n", arr[i]);	
	}
}

void bubbleSort() {
	//code
}

void selectionSort() {
	//code
}

void insertionSort() {
	//code
}