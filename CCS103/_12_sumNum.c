/*
	12.) Write a C program to compute the sum of the first 10 natural numbers.
		Expected Output:
		The first 10 natural number: 1 2 3 4 5 6 7 8 9 10
		The Sum is: 55
*/

#include <stdio.h>

main() {
	int i, sum = 0;
	
	printf("The first 10 natural number: ");
	
	for(i = 1; i <= 10; i++) {
		printf("%d", i);
		sum += i;
	}
	
	printf("\n\nThe sum is: %d", sum);
}


