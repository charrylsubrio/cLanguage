#include <stdio.h>

int main() {
	
  int amount;

  printf("Enter amount in peso (whole number only, up to 9999 only): ");
  scanf("%d", &amount);

  int thousandPesoBills = amount / 1000;
  amount %= 1000;

  int fiveHundredPesoBills = amount / 500;
  amount %= 500;

  int twoHundredPesoBills = amount / 200;
  amount %= 200;

  int oneHundredPesoBills = amount / 100;
  amount %= 100;

  int fiftyPesoBills = amount / 50;
  amount %= 50;

  int twentyPesoBills = amount / 20;
  amount %= 20;

  int tenPesoCoins = amount / 10;
  amount %= 10;

  int fivePesoCoins = amount / 5;
  amount %= 5;

  int onePesoCoins = amount;

  printf("Denomination distribution:\n");
  printf("1000 - %d ---- %d.00\n", thousandPesoBills, thousandPesoBills * 1000);
  printf("500 - %d ---- %d.00\n", fiveHundredPesoBills, fiveHundredPesoBills * 500);
  printf("200 - %d ---- %d.00\n", twoHundredPesoBills, twoHundredPesoBills * 200);
  printf("100 - %d ---- %d.00\n", oneHundredPesoBills, oneHundredPesoBills * 100);
  printf("50 - %d ---- %d.00\n", fiftyPesoBills, fiftyPesoBills * 50);
  printf("20 - %d ---- %d.00\n", twentyPesoBills, twentyPesoBills * 20);
  printf("10 - %d ---- %d.00\n", tenPesoCoins, tenPesoCoins * 10);
  printf("5 - %d ---- %d.00\n", fivePesoCoins, fivePesoCoins * 5);
  printf("1 - %d ---- %d.00\n", onePesoCoins, onePesoCoins * 1);

  return 0;
  
}