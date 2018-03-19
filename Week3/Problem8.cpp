#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int getMoney;
	int fee = 0;
	int levelMoney1, levelMoney2, levelMoney3, levelMoney4, levelMoney5;

	levelMoney1 = 12000000;
	levelMoney2 = 46000000;
	levelMoney3 = 88000000;
	levelMoney4 = 150000000;
	levelMoney5 = 500000000;

	scanf("%d", &getMoney);

	for (;;) {
		if (getMoney <= 0) break;

		if (getMoney <= levelMoney1) {
			fee += getMoney * 0.06;
			getMoney = 0;
		}
		else if (getMoney <= levelMoney2) {
			fee += (getMoney - levelMoney1) * 0.15;
			getMoney -= (getMoney - levelMoney1);
		}
		else if (getMoney <= levelMoney3) {
			fee += (getMoney - levelMoney2) * 0.24;
			getMoney -= (getMoney - levelMoney2);
		}
		else if (getMoney <= levelMoney4) {
			fee += (getMoney - levelMoney3) * 0.35;
			getMoney -= (getMoney - levelMoney3);
		}
		else if(getMoney <= levelMoney5){
			fee += (getMoney - levelMoney4) * 0.38;
			getMoney -= (getMoney - levelMoney4);
		}
		else {
			fee += (getMoney - levelMoney5) * 0.4;
			getMoney -= (getMoney - levelMoney5);
		}
	}

	printf("%d\n", fee);

	return 0;
}