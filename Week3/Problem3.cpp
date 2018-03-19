#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number1, number2;
	int temp;

	scanf("%d %d", &number1, &number2);

	for (;;) {
		if (number1 >= number2 && number1 % number2 == 0) {
			printf("%d\n", number2);
			break;
		}
		else if (number1 >= number2 && number1 % number2 != 0) {
			number1 = number1 % number2;
		}
		else if (number1 < number2 && number2 % number1 == 0) {
			printf("%d\n", number1);
			break;
		}
		else if (number1 < number2 && number2 % number1 != 0) {
			number2 = number2 % number1;
		}
	}

	return 0;
}