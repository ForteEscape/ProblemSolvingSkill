#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int sum_even = 0, sum_odd = 0;
	int inputCount = 0;

	for (;;) {
		scanf("%d", &number);
		inputCount++;

		if (number % 2 == 0) {
			sum_even += number;
		}
		else sum_odd += number;

		if (sum_even == sum_odd) {
			printf("%d\n", inputCount);
			break;
		}
	}

	return 0;
}