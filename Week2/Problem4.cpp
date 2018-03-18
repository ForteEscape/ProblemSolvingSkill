#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int NUMBER_MIN = 9999999;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &number);

		if (number < 0) {
			continue;
		}
		else {
			if (number < NUMBER_MIN) {
				NUMBER_MIN = number;
			}
		}
	}

	printf("%d", NUMBER_MIN);
}