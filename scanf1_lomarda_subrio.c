/************************************************************
LOMARDA, ISMAEL & SUBRIO, CHARRYL

This program allows the user to input five symbols and display 
them in reverse order.

09-24-2023
************************************************************/

#include <stdio.h>

int main() {
	
	char in1, in2, in3, in4, in5;
	
	printf("Input 5 symbols: ");
	
	printf("\nSymbol 1 >> ");
	scanf("%c", &in1);
	fflush(stdin);

	printf("Symbol 2 >> ");
	scanf("%c", &in2);
	fflush(stdin);
	
	printf("Symbol 3 >> ");
	scanf("%c", &in3);
	fflush(stdin);
	
	printf("Symbol 4 >> ");
	scanf("%c", &in4);
	fflush(stdin);
	
	printf("Symbol 5 >> ");
	scanf("%c", &in5);
	
	printf("\nThese are the 5 symbols:");
	printf("\n\n%c\t%c\t%c\t%c\t%c", in5, in4, in3, in2, in1);
	
	return 0;
	
}
