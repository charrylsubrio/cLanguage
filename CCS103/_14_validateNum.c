/*
	14.) Write a program in C program that validates the entry of the user.
		It should accept positive numbers only.  If the user inputs a negative or 0, it should ask the user to input again.
		The program should display the inputted positive number.
*/

#include <stdio.h>

int main() {
	int num1;
	
	do {
		printf("Enter any positive number: ");
		
		if(scanf("%d", &num1) != 1 || num1 <= 0) {
			fflush(stdin);
			printf("\nPlease input a positive number only.\nPress any key to re-input ... ");
			getch();
			system("cls");
		}

	} while (num1 <= 0);
	
	printf("\n%d", num1);

	return 0;
}
