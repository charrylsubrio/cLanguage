 /*
	Write a C program that accepts a product price from the user. If the price is 500 or below, increase it by 3%;
	if the price is above 500 and up to 1000, increase it by 5%;
	if it is above 1000 and below 3000, increase it by 6%; otherwise increase it by 7%.
	The program should display the original price and the increased price. 

	The program should include the following functions:
		1. input() - accepts a price from the user (include validations here) and returns the value to the calling function.
		2. increase() - receives 1 argument (price) from the calling function which is passed by reference and
						increases the price based on the given conditions above. The function does not return anything.
		3. output() - displays a price.
*/

#include <stdio.h>

float input(void);
void increase(float *);
void output(char *, float);

int main() {
   	float price;

	price = input();
		
	output("\nOriginal price: ", price);
	increase(&price);  // Pass by reference
	output("\nIncreased price: ", price);
	
	return 0;
}

float input(void) {
   float price;

   do {
       printf("Enter the product price: ");
       
		if (scanf("%f", &price) != 1 || price <= 0) {
			fflush(stdin);
       		printf("Invalid price. Please enter a positive number only.\n\n");
   		}
   } while(price <= 0);

   return price;
}

void increase(float *price) {
   if (*price <= 500) {
       *price *= 1.03;  // Increase price by 3%
   } else if (*price <= 1000) {
       *price *= 1.05;  // Increase price by 5%
   } else if (*price <= 3000) {
       *price *= 1.06;  // Increase price by 6%
   } else { 
       *price *= 1.07;  // Increase price by 7%
   }
}

void output(char *message, float price) {
   printf("%s%.2f", message, price);
}