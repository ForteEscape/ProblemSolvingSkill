
/*  11번 과제 소스코드  */

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int temp;

	scanf("%d", &number);

	temp = number;

	for (int i = number; i > 1; i /= 2) {
		printf("%d ", temp / 2);
		temp /= 2;
	}

	return 0;
}