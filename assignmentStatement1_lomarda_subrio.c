/************************************************************
LOMARDA, ISMAEL & SUBRIO, CHARRYL

This program allows user to input a distance in kilometers,
compute the equivalent distance in meters (1km = 1000m),
and print the distance in kilometers and meters.

10-08-2023
************************************************************/

#include <stdio.h>

int main () {

  float km_dis;
  int m_dis;

  printf ("Enter distance in kilometers: ");
  scanf ("%f", &km_dis);

  m_dis = km_dis * 1000;

  printf ("\nDistance in kilometers: %.1f", km_dis);
  printf ("\nEquivalent distance in meters: %d", m_dis);

  return 0;
  
}
