#include <stdio.h>

#define SIZE 8

int getMenuChoice(int choice);
void displayElements(int arr[SIZE]);
void bubbleSort(int arr[SIZE]);
void selectionSort(int arr[SIZE]);
void insertionSort(int arr[SIZE]);

int main() {
	int arr[SIZE] = {8, 7, 6, 5, 4, 3, 2, 1}, choice;
	
	do {
		choice = getMenuChoice(choice);
		
		switch(choice) {
			case 1:
				displayElements(arr);
				break;
			case 2:
				bubbleSort(arr);
				break;
			case 3:
				//selectionSort(arr);
				break;
			case 4:
				//insertionSort(arr);
				break;
		}
	} while(choice != 0);
	
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

void bubbleSort(int arr[SIZE]) {
	for(int pass = 1; pass <= SIZE - 1; pass++) {
		for(int pointer = 0; pointer < SIZE - 1; pointer++) {
			if(arr[pointer] > arr[pointer + 1]) {
				int temp = arr[pointer];
				arr[pointer] = arr[pointer + 1];
				arr[pointer + 1] = temp;
			}
		}
	}	
}

void selectionSort(int arr[SIZE]) {
	//code
}

void insertionSort(int arr[SIZE]) {
	//code
}