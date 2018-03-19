#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number = 0;
	int temp;
	int NUMBER_MAX = -99999999;
	int NUMBER_MAX2 = -99999999;

	for (;;) {
		scanf("%d", &number);
		if (number == -1) break;

		if (number > NUMBER_MAX) {
			NUMBER_MAX2 = NUMBER_MAX;
			NUMBER_MAX = number;
		}
		else if (number >= NUMBER_MAX2) {
			NUMBER_MAX2 = number;
		}
	}

	printf("%d %d\n", NUMBER_MAX, NUMBER_MAX2);

	return 0;
}