#include <stdio.h>

float getNum(void);
float doubleTheNum(float);
float numLoopTen(void);

int main() {
	float doubleNum, num1, num;
	 
	
	num = numLoopTen();
	
	doubleNum = doubleTheNum(num);
	
	printf("%.0f", doubleNum);
	
	return 0;
}
 float numLoopTen() {
 	float num, num1;
 	int i;
 	
 	for(i = 1; i <= 10; i++) {
		num1 = getNum();
		num += num1;
	}
	
	return num;
 }


float getNum(void){
	float num;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	
	return num;
}
	

float doubleTheNum(float num) {
	float doubleNum;
	
	doubleNum = num * 2;
	
	return doubleNum;
}


