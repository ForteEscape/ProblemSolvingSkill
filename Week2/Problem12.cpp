#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int posx, posy;
	int chk_posx = 0, chk_posy = 0;
	int chk_posx2 = 0, chk_posy2 = 0;
	int inputErrorFlag = 0;

	int straightCount = 0, uTurnCount = 0, rightCount = 0, leftCount = 0;

	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		scanf("%d %d", &posx, &posy);

		if (i > 1) {
			if (chk_posx2 == chk_posx && chk_posx == posx) {
				if (chk_posy >= 0 && posy >= 0) {
					if (chk_posy < posy) {
						straightCount++;
					}
					else if (chk_posy > posy) {
						uTurnCount++;
					}
				}
				else if (chk_posy < 0 && posy < 0) {
					if (chk_posy < posy) {
						uTurnCount++;
					}
					else if (chk_posy > posy) {
						straightCount++;
					}
				}
				else {
					uTurnCount++;
				}
			}
			else if (chk_posx2 == chk_posx && chk_posy == posy) {
				if (chk_posx < posx) {
					rightCount++;
				}
				else if (chk_posx > posx) {
					leftCount++;
				}
			}
			else if (chk_posy2 == chk_posy && chk_posy == posy) {
				if (chk_posx >= 0 && posx >= 0) {
					if (chk_posx < posx) {
						straightCount++;
					}
					else if (chk_posx > posx) {
						uTurnCount++;
					}
				}
				else if (chk_posy < 0 && posy < 0) {
					if (chk_posx < posx) {
						uTurnCount++;
					}
					else if (chk_posx > posx) {
						straightCount++;
					}
				}
				else {
					if (chk_posx < 0 && posx >= 0) {
						uTurnCount++;
					}
					else if (chk_posx >= 0 && posx < 0) {
						uTurnCount++;
					}
				}
			}
			else if (chk_posy2 == chk_posy && chk_posx == posx) {
				if (chk_posy < posy) {
					if (chk_posx2 > chk_posx) {
						rightCount++;
					}
					else leftCount++;
				}
				else if (chk_posy > posy) {
					if (chk_posx2 > chk_posx) {
						leftCount++;
					}
					else rightCount++;
				}
			}
		}

		if (i == 0) {
			chk_posx = posx;
			chk_posy = posy;
		}
		else {
			if (posx != chk_posx && posy != chk_posy) {
				inputErrorFlag = 1;
			}
			else {
				chk_posx2 = chk_posx;
				chk_posy2 = chk_posy;
				chk_posx = posx;
				chk_posy = posy;
			}
		}
	}

	if (inputErrorFlag == 1) {
		printf("Input Error\n");
	}
	else printf("%d %d %d %d\n", leftCount, straightCount, rightCount, uTurnCount);
}