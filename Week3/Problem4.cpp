#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int numberReverse;

	scanf("%d", &number);

	while (number > 0) {
		numberReverse = number % 10;
		printf("%d", numberReverse);
		number /= 10;
	}
}