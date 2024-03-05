#include <stdio.h>

int main() {
	int num1, *ptr;
	
	printf("Enter a number: ");
	scanf("%d", &num1);
	
	printf("\nInputted value of num1 = %d\n\n", num1);
	
	ptr = &num1;
	
	*ptr += 10;
	
	printf("Increased value of num1 = %d", num1);
	
	return 0;
}