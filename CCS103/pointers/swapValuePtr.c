#include <stdio.h>

int main() {
	int num1, num2, *ptr, temp;
	
	printf("Enter value for num1: ");
	scanf("%d", &num1);
	
	printf("Enter value for num2: ");
	scanf("%d", &num2);
	
	printf("\nInputted Value of num1 before swap: %d", num1);
	printf("\nInputted Value of num2 before swap: %d\n", num2);
	
	ptr = &num1;
	temp = *ptr;
	num1 = num2;
	num2 = temp;
	
	printf("\nInputted Value of num1 after swap: %d", num1);
	printf("\nInputted Value of num2 after swap: %d\n", num2);
	
	return 0;
}