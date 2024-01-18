#include <stdio.h>

main() {
	int num1;
	printf("Enter a number: ");
	scanf("%d", &num1);
	if(num1 > 0) {
		printf("Positive");
	} else if(num1 < 0) {
		printf("Negative");
	} else {
		printf("Zero");
	}
}
