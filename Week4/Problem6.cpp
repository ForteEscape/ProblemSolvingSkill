/*#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int limitnumber;
	int number = 0;
	int sumEachNumber = 0;
	int sevenNumberCount = -1;
	int temp = 0;

	scanf("%d", &limitnumber);

	while (number <= limitnumber) {
		temp = number;

		if (number < 10 && number == 7) {
			sevenNumberCount++;
		}
		else {
			while (temp > 0) {
				sumEachNumber += temp % 10;
				temp /= 10;
			}
			if (sumEachNumber % 7 == 0) {
				sevenNumberCount++;
			}
		}
		
		number++;
		sumEachNumber = 0;
	}

	printf("%d\n", sevenNumberCount);
}*/