/*
Write a program that accepts 12 integers (example: 3, 2, 5, 1, 4, 7, 8, 2, 5, 9, 3, 6).
It should display these numbers with this format:
Inputted numbers:
3 2 5 1
4 7 8 2
5 9 3 6
The program should compute and display the double of all these numbers. Follow the
format below:
The double of the numbers:
6 4 10 2
8 14 16 4
10 18 9 12
*/

#include <stdio.h>

int main () {
	
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
	
	printf("Enter 12 Integers:");
	
	printf("\n\n1st: ");
	scanf("%d", &n1);
	printf("2nd: ");
	scanf("%d", &n2);
	printf("3rd: ");
	scanf("%d", &n3);
	printf("4th: ");
	scanf("%d", &n4);
	printf("5th: ");
	scanf("%d", &n5);
	printf("6th: ");
	scanf("%d", &n6);
	printf("7th: ");
	scanf("%d", &n7);
	printf("8th: ");
	scanf("%d", &n8);
	printf("9th: ");
	scanf("%d", &n9);
	printf("10th: ");
	scanf("%d", &n10);
	printf("11th: ");
	scanf("%d", &n11);
	printf("12th: ");
	scanf("%d", &n12);
	
	printf("\n\nInputted Numbers:");
	printf("\n\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12);
	
	n1 *= 2;
	n2 *= 2;
	n3 *= 2;
	n4 *= 2;
	n5 *= 2;
	n6 *= 2;
	n7 *= 2;
	n8 *= 2;
	n9 *= 2;
	n10 *= 2;
	n11 *= 2;
	n12 *= 2;
	
	printf("\n\n\nThe Double of the Numbers:");
	printf("\n\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12);
	
	return 0;
	
}