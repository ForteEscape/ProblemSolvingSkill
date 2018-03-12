
/*  12번 과제 소스코드 */	

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	double sum = 0;
	double average;

	for (int i = 1; i <= 10; i++) {
		scanf("%d", &number);

		sum += number;
		average = sum / i;
		printf("%lf\n", average);
	}

	return 0;
}