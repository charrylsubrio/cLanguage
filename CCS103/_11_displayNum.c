/*
	11.) Using the looping logic, write a program in C to display the first 10 natural numbers. 
		Expected Output: 1 2 3 4 5 6 7 8 9 10
*/

#include <stdio.h>

main() {
	int i;
	
	for(i = 1; i <= 10; i++) {
		printf("%d", i);
	}
}
