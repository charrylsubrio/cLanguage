#include <stdio.h>

int main() {
	int testScore, classRank;

	printf("Enter your test score: ");
	scanf("%d", &testScore);
	printf("Enter your high school class rank: ");
	scanf("%d", &classRank);
	
	if (testScore >= 90 && classRank >= 25) {
		printf("Accept");
	}
	else if (testScore >= 80 && classRank >= 50) {
		printf("Accept");
	}
	else if (testScore >= 70 && classRank >= 75) {
		printf("Accept");
	}
	else {
		printf("Reject");
	}
	
	return 0;
}
