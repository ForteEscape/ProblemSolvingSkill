/*  14번 과제 소스코드 */

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	double x;
	double result_Sin = 0;
	double result_Cos = 0;

	double taylor_Sin;
	double taylor_Cos = 1;

	int first = 1;

	scanf("%lf", &x);

	taylor_Sin = x;

	for (int i = 1; i <= 100; i++) {
		result_Sin += first * taylor_Sin;
		result_Cos += first * taylor_Cos;

		taylor_Sin *= x * x / (2 * i) / (2 * i + 1);
		taylor_Cos *= x * x / (2 * i - 1) / (2 * i);

		first = -first;
	}
	printf("%lf, %lf\n", result_Sin, result_Cos);

	return 0;
}