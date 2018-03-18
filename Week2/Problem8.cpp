#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int cAreaNum1, cAreaNum2;
	int cAreaNum3, cAreaNum4;

	int flag = 0;

	scanf("%d %d", &cAreaNum1, &cAreaNum2);
	scanf("%d %d", &cAreaNum3, &cAreaNum4);

	if (cAreaNum2 < cAreaNum1 || cAreaNum4 < cAreaNum3) {
		printf("Input Error!");
	}
	else {
		for (int i = cAreaNum1; i <= cAreaNum2; i++) {
			for (int j = cAreaNum3; j <= cAreaNum4; j++) {
				if (j == i) {
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1) {
			printf("Yes\n");
		}
		else printf("No\n");
	}
}