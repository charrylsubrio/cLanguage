#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 10

int displayMenu(int choice);
int getCode(int code, int choice);
int exhaustiveSearch(int arr[SIZE], int code);
int binarySearch(int arr[SIZE], int code);
void displayResult(int result, int code);

int main() {
	int prodCodes[SIZE] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000}, choice, code, result;
	
	do {
		choice = displayMenu(choice);
		
		switch(choice) {
			case 1:
				code = getCode(code, choice);
				result = exhaustiveSearch(prodCodes, code);
				displayResult(result, code);
				break;
			case 2:
				code = getCode(code, choice);
				result = binarySearch(prodCodes, code);
				displayResult(result, code);
				break;
		}
	} while(choice != 0);
	
	return 0;
}

int displayMenu(int choice) {
	system("cls");
	
	do {
		printf("==== MAIN MENU ====\n");
		printf("\n[1] - LINEAR SEARCH");
		printf("\n[2] - BINARY SEARCH");
		printf("\n[0] - EXIT\n\n");
		printf("Enter your choice: ");
		
		if(scanf("%d", &choice) != 1 || choice < 0 || choice > 2) {
			fflush(stdin);
			printf("\nInvalid input! Press any key to continue . . . ");
			getch();
			system("cls");		
		}
	}while (choice < 0 || choice > 2);
	
	return choice;
}

int getCode(int code, int choice) {
	system("cls");
	
	do {
		if(choice == 1) {
			printf("==== LINEAR SEARCH ====\n\n");
		} else {
			printf("==== BINARY SEARCH ====\n\n");
		}
		
		printf("Input a product code: ");
		if(scanf("%d", &code) != 1 || code < 0) {
			fflush(stdin);
			printf("\nInvalid input! Press any key to continue . . . ");
			getch();
			system("cls");
		}
	} while(code < 0);
	
	return code;
}

int exhaustiveSearch(int arr[SIZE], int code) {
	for(int i = 0; i <= SIZE; i++) {
		if(arr[i] == code) {
			return 1;
		}
	}
	
	return 0;
}

int binarySearch(int arr[SIZE], int code) {
	int low = 0, high = 9, mid = 0;
	
	while(low <= high) {
		mid = (low + high) / 2;
			
		if(arr[mid] == code) {
			return 1;
		} else if(arr[mid] > code) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	
	return 0;
}

void displayResult(int result, int code) {
		if(result == 1) {
			printf("\nProduct code \"%d\" is found in the array\n\n", code);	
		} else {
			printf("\nProduct code \"%d\" is not found in the array\n\n", code);	
		}
		
		printf("\nPress any key to continue . . . ");
		getch();
		system("cls");
}