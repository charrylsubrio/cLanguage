/*
for loop syntax: 

for (initialization statement; condition expression; increment expression) {
  statement(s) to be executed;
}
*/

#include <stdio.h>

int main() {
	int i, num, d;

	for (i = 1; i <= 10; i++) {
		printf("Enter a number: ");
		scanf("%d", &num);
		d = num * 2;
		printf("Double: %d\n\n", d);
	}

	return 0;

}