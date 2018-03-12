
/*  13번 과제 소스코드 */

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	double ratio = 0;
	double money_input = 0;
	double money_remain = 0;

	scanf("%lf", &ratio);

	for (int i = 0; i < 12; i++) {
		scanf("%lf", &money_input);

		money_remain = (money_remain + money_input)*(1 + ratio);

		printf("%f\n", money_remain);
	}
	
	return 0;
}