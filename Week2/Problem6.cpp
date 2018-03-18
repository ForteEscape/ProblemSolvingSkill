#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int year1, month1, day1;
	int year2, month2, day2;

	scanf("%d %d %d", &year1, &month1, &day1);
	scanf("%d %d %d", &year2, &month2, &day2);

	if (year1 > year2) {
		printf("1");
	}
	else if (year1 < year2) {
		printf("-1");
	}
	else if (year1 == year2) {
		if (month1 > month2) {
			printf("1");
		}
		else if (month1 < month2) {
			printf("-1");
		}
		else if (month1 == month2 && day1 > day2) {
			printf("1");
		}
		else if (month1 == month2 && day1 < day2) {
			printf("-1");
		}
		else printf("0\n");
	}
}