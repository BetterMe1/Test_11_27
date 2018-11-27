#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//¼ÆËã1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ¡­¡­ + 1 / 99 - 1 / 100 µÄÖµ¡£
int main(){
	int i = 0;
	double result = 0;
	for (i = 1; i <= 100; i++){
		if (i % 2 != 0){
			result = result +( 1 / i);
		}
		else{
			result = result - (1 / i);
		}
	}
	printf("1/1-1/2+1/3-1/4+1/5¡­+ 1/99 - 1/100=%f\n", result);
	system("pause");
	return 0;
}

