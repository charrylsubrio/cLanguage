/*
for loop syntax: 

for (initialization statement; condition expression; increment expression) {
  statement(s) to be executed;
}

*/

#include <stdio.h>

int main() {
	int i, uPrice, qty, amnt, amntP = 0;
	char ans, letter;

	for (ans = 'Y'; ans == 'Y' || ans == 'y';) {
		printf("Enter letter: ");
		scanf("%c", &letter);
		fflush(stdin);
		printf("Inputted: %c", letter);
		printf("\n\nInput Y to continue: ");
		scanf("%c", &ans);
		fflush(stdin);
		printf("\n");
	}

	return 0;

}