
/*  7锅 苞力 家胶内靛
	201712011 辫技绕  */

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	double sum = 1;
	int ratio = -1;
	double ratio2 = 0.5;

	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		sum += ratio * ratio2;
		ratio *= -1;
		ratio2 *= 0.5;
	}

	printf("%lf", sum);

	return 0;
}