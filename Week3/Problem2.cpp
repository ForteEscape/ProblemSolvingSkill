#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int numberPow2 = 1;

	scanf("%d", &number);

	for (;;) {
		numberPow2 *= 2;
		if (numberPow2 > number) {
			numberPow2 /= 2;
			break;
		}
	}

	while (numberPow2 > 0) {
		if (number >= numberPow2) {
			number = number - numberPow2;
			printf("1");
			numberPow2 /= 2;
		}
		else {
			printf("0");
			numberPow2 /= 2;
		}
	}
	printf("\n");

	return 0;
}