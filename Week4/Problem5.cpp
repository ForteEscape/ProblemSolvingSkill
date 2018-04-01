/*#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int limitnumber;
	int zeroCount = -1;
	int number = 0;
	int temp;

	scanf("%d", &limitnumber);

	while (number <= limitnumber) {
		temp = number;
		if (number < 10 && number == 0) {
			zeroCount++;
		}
		else {
			while (temp > 0)
			{
				if (temp % 10 == 0) {
					zeroCount++;
				}
				temp /= 10;
			}
		}
		number++;
	}

	printf("%d\n", zeroCount);
}*/