#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int NUMBER_MAX = -999999999;
	int NUMBER_MIN = 999999999;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &number);

		if (number > NUMBER_MAX) {
			NUMBER_MAX = number;
		}
		if (number < NUMBER_MIN) {
			NUMBER_MIN = number;
		}

		printf("%d\n", NUMBER_MAX - NUMBER_MIN);
	}
}