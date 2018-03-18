#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number1, number2, number3;
	int number_MAX = 0;
	int temp;

	scanf("%d %d %d", &number1, &number2, &number3);

	if (number1 > number2 && number1 > number3) {
		if (number3 > number2) {
			temp = number3;
			number3 = number2;
			number2 = temp;
		}
	}

	if (number2 > number1 && number2 > number3) {
		temp = number2;
		number2 = number1;
		number1 = temp;

		if (number3 > number2) {
			temp = number3;
			number3 = number2;
			number2 = temp;
		}
	}

	if (number3 > number1 && number3 > number2) {
		temp = number3;
		number3 = number1;
		number1 = temp;

		if (number3 > number2) {
			temp = number3;
			number3 = number2;
			number2 = temp;
		}
	}

	printf("%d %d %d\n", number1, number2, number3);
	return 0;
}