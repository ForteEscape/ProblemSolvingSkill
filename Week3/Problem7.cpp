#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int prevNumber = 9999999, prevNumber2 = 9999999;
	int localMinimaCount = 0;

	for (int i = 0;1;i++) {
		scanf("%d", &number);

		if (number == -1) {
			if (prevNumber2 >= prevNumber) {
				localMinimaCount++;
			}
			break;
		}

		if (i == 1 && prevNumber <= number) {
			localMinimaCount++;
		}
		else if (prevNumber <= prevNumber2 && prevNumber <= number) {
			localMinimaCount++;
		}

		prevNumber2 = prevNumber;
		prevNumber = number;
	}

	printf("%d\n", localMinimaCount);

	return 0;
}