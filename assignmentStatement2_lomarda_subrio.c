/************************************************************
LOMARDA, ISMAEL & SUBRIO, CHARRYL

This program allows the user to input an amount in Peso,
compute the equivalent amount in US dollars (1USD = 57.20PHP),
and print the amount in Peso and Dollar.

10-08-2023
************************************************************/

#include <stdio.h>
#define exchangeRate 57.20

int main () {

  float php_amnt, usd_amnt;

  printf ("Enter an amount in Peso: ");
  scanf ("%f", &php_amnt);

  usd_amnt = php_amnt / exchangeRate;

  printf ("\nAmount in Peso: %.2f", php_amnt);
  printf ("\nEquivalent amount in US Dollar: %.2f", usd_amnt);

  return 0;
  
}
