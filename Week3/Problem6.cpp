#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	double initNumber = 1;
	double average;
	double errorRange = -999999;
	double temp = 0;

	scanf("%d", &number);

	for (;;) {
		if (temp > initNumber && temp - initNumber <= errorRange) {
			printf("%lf\n", initNumber);
			break;
		}
		else if (temp < initNumber && initNumber - temp <= errorRange) {
			printf("%lf\n", initNumber);
			break;
		}

		average = (initNumber + (double)(number / initNumber)) / 2;
		temp = initNumber;
		initNumber = average;
		errorRange = 0.0000100 * initNumber;
	}
}
