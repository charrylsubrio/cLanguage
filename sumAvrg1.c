#include <stdio.h>

main() {
	int num1, sum = 0, counter = 0, avrg;
	
	do {
		printf("Enter any positive number: ");
		scanf("%d", &num1);
		
		if(num1 != 0) {
			sum += num1;
			counter += 1;
		}
	} while(num1 != 0);
	
	avrg = sum / counter;
	
	printf("\nSum = %d", sum);
	printf("\nAverage = %d", avrg);
}


