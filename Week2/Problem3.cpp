#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int sum_odd = 0;
	int sum_even = 0;
	int result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &number);

		if (number % 2 == 0) {
			sum_even += number;
		}
		else if (number % 2 != 0) {
			sum_odd += number;
		}
	}

	result = sum_even - sum_odd;
	if (result < 0) {
		result = -result;
	}

	printf("%d", result);
}