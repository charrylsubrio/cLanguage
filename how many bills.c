/*
Write a program that accepts from the use the an amount in peso (whole number only, up to 9999 only). Find the number of 1000 peso bill,
500 peso bill, 200 peso bill, 100 peso bill, 50 peso bill, 20 peso bill, 10 peso coin, 5 peso coin and, 1 peso coin that compose the amount.
For example, amount is 2898.00. The denomination distribution is: 
1000 – 2 ---- 2000.00
500 – 1 ---- 500.00
200 – 1 ---- 200.00
100 – 1 ---- 100.00
50 – 1 ---- 50.00
20 – 2 ---- 40.00
10 – 0 ---- 0.00
5 – 1 ---- 5.00
1 – 3 ---- 3.00
(hint: modulo operation is the key)
*/

#include <stdio.h>

int main () {
	
	int peso, _1000, _500, _200, _100, _50, _20, _10, _5, _1;
	float totalP, _1kT, _5hT, _2hT, _1hT, _5tT, _2tT, _1tT, _5oT, _1oT;
	printf("Enter any whole number of an amount in peso up to 9999: ");
	scanf("%d", &peso);
	printf("\nFor the amount of Php %d.00, the denomination distribution is:", peso);
	
	totalP = peso;
	_1000 = peso / 1000;
	_1kT = _1000 * 1000;
	peso -= _1kT;
	_500 = peso / 500;
	_5hT = _500 * 500;
	peso -= _5hT;
	_200 = peso / 200;
	_2hT = _200 * 200;
	peso -= _2hT;
	_100 = peso / 100;
	_1hT = _100 * 100;
	peso -= _1hT;
	_50 = peso / 50;
	_5tT = _50 * 50;
	peso -= _5tT;
	_20 = peso / 20;
	_2tT = _20 * 20;
	peso -= _2tT;
	_10 = peso / 10;
	_1tT = _10 * 10;
	peso -= _1tT;
	_5 = peso / 5;
	_5oT = _5 * 5;
	peso -= _5oT;
	_1 = peso / 1;
	_1oT = _1 * 1;
	peso -= _1oT;

	printf("\n\n1000 - %d ---- %.2f", _1000, _1kT);
	printf("\n500  - %d ---- %.2f", _500, _5hT);
	printf("\n200  - %d ---- %.2f", _200, _2hT);
	printf("\n100  - %d ---- %.2f", _100, _1hT);
	printf("\n50   - %d ---- %.2f", _50, _5tT);
	printf("\n20   - %d ---- %.2f", _20, _2tT);
	printf("\n10   - %d ---- %.2f", _10, _1tT);
	printf("\n5    - %d ---- %.2f", _5, _5oT);
	printf("\n1    - %d ---- %.2f", _1, _1oT);
	printf("\n\n         ---- %.2f", totalP);

	return 0;
	
}