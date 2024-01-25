#include <stdio.h>

int main () {
	
	int num1 = 1, num2 = 2, temp;
	
	printf("Before:\n");
	printf("Num1 = %d\nNum2 = %d", num1, num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("\n\nAfter:");
	printf("\nNum1 = %d\nNum2 = %d", num1, num2);
	
	return 0;
	
}