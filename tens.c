/*
Write a program that accepts from the use a 4-digit integer. It should find the digit in the ones place, tens place, hundreds place and
thousands place. Display these digits. Example, if the input of the user is 3157, the digit in the ones place is 7, tens place is 5,
hundreds place is 1 and thousands place is 3.
(hint: modulo operation is the key).
*/

#include <stdio.h>

int main() {
	
  int number;

  printf("Enter a 4-digit integer: ");
  scanf("%d", &number);

  int onesDigit = number % 10;
  number /= 10;

  int tensDigit = number % 10;
  number /= 10;

  int hundredsDigit = number % 10;
  number /= 10;

  int thousandsDigit = number % 10;
  
  printf("\nOnes digit: %d\n", onesDigit);
  printf("Tens digit: %d\n", tensDigit);
  printf("Hundreds digit: %d\n", hundredsDigit);
  printf("Thousands digit: %d\n", thousandsDigit);
  
  return 0;
  
}