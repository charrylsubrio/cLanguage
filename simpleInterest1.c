/*
	Write a C program that accept principal, time and rate (P, T, R) from the user and find the simple Interest.
	Simple interest is calculated as P x R x T / 100.  
	The program should display the inputted principal, time, rate and the calculated simple interest.
*/

main() {
	float P, T, R, interest;
	
	printf("Enter Principal: ");
	scanf("%f", &P);
	
	printf("Enter Time: ");
	scanf("%f", &T);
	
	printf("Enter Rate: ");
	scanf("%f", &R);
	
	interest = P * R * T / 100;
	
	printf("\nPrincipal = %.2f", P);
	printf("\nTime = %.2f", T);
	printf("\nRate = %.2f", R);
	printf("\nSimple Interest = %.2f", interest);
}

