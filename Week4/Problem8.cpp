/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main() {
	int dice_once_cnt = 0;
	int dice_twice_cnt = 0;
	int percent_dice_once = 0;
	int percent_dice_twice = 0;

	srand((unsigned int)time(NULL));

	for (int i = 1; i <= 1000000; i++) {
		for (int j = 1; j < 7; j++) {
			int dicenum1 = rand() % 6 + 1;
			if (dicenum1 == 1) {
				dice_once_cnt++;
			}
		}

		for (int j = 1; j < 13; j++) {
			int dicenum2 = rand() % 6 + 1;
			if (dicenum2 == 1) {
				dice_twice_cnt++;
			}
		}

		if (dice_once_cnt >= 1) percent_dice_once++;
		if (dice_twice_cnt >= 1) percent_dice_twice++;

		dice_once_cnt = 0;
		dice_twice_cnt = 0;
	}

	printf("percentage of case 1 : %lf\n", percent_dice_once / 1000000.0);
	printf("percentage of case 2 : %lf\n", percent_dice_twice / 1000000.0);
}*/