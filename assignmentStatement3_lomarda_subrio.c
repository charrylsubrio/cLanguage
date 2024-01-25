/************************************************************
LOMARDA, ISMAEL & SUBRIO, CHARRYL

This program allows the user to input 5 numbers,
compute the average of these numbers,
and print the sum and average of these numbers.

10-08-2023
************************************************************/

#include <stdio.h>

int main () {

  int n1, n2, n3, n4, n5;
  float sum, avrg;

  printf ("ENTER FIVE NUMBERS");
  
  printf("\nFirst: ");
  scanf ("%d", &n1);
  
  printf("Second: ");
  scanf ("%d", &n2);
  
  printf("Third: ");
  scanf ("%d", &n3);
  
  printf("Fourth: ");
  scanf ("%d", &n4);
  
  printf("Fifth: ");
  scanf ("%d", &n5);
 
  sum = n1 + n2 + n3 + n4 + n5;
  avrg = sum / 5;

  printf ("\nSum of the five numbers: %.f", sum);
  printf ("\nAverage of the five numbers: %.1f", avrg);

  return 0;
  
}
