#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int posx1, posy1;
	int posx2, posy2;
	int posx3, posy3;

	int rightTrunFlag = 0;
	int leftTurnFlag = 0;
	int straightFlag = 0;
	int uTurnFlag = 0;

	scanf("%d %d", &posx1, &posy1);
	scanf("%d %d", &posx2, &posy2);
	scanf("%d %d", &posx3, &posy3);

	if (posx1 != posx2 && posy1 != posy2 || posx2 != posx3 && posy2 != posy3) {
		printf("Input Error\n");
	}
	else {
		// straight u-turn flag
		if (posx1 == posx2 && posx2 == posx3) {
			if (posy2 >= 0 && posy3 >= 0) {
				if (posy2 < posy3) {
					straightFlag = 1;
				}
				else if (posy2 > posy3) {
					uTurnFlag = 1;
				}
			}
			else if (posy2 < 0 && posy3 < 0) {
				if (posy2 > posy3) {
					straightFlag = 1;
				}
				else if (posy2 < posy3) {
					uTurnFlag = 1;
				}
			}
			else {
				if (posy2 > 0 && posy3 < 0 && posy2 > posy3) {
					uTurnFlag = 1;
				}
				else if (posy2 < 0 && posy3 > 0 && posy2 < posy3) {
					uTurnFlag = 1;
				}

			}
		}
		// right left flag
		else if (posx1 == posx2 && posy2 == posy3) {
			if (posx2 < posx3) {
				rightTrunFlag = 1;
			}
			else if (posx2 > posx3) {
				leftTurnFlag = 1;
			}
		}
		// straight u-turn flag
		else if (posy1 == posy2 && posy2 == posy3) {
			if (posx2 >= 0 && posx3 >= 0) {
				if (posx2 < posx3) {
					straightFlag = 1;
				}
				else if (posx2 > posx3) {
					uTurnFlag = 1;
				}
			}
			else if (posx2 < 0 && posx3 < 0) {
				if (posx2 > posx3) {
					straightFlag = 1;
				}
				else if (posx2 < posx3) {
					uTurnFlag = 1;
				}
			}
			else {
				if (posx2 < posx3) {
					straightFlag = 1;
				}
				else if (posx2 > posx3) {
					uTurnFlag = 1;
				}
			}
		}
		// right left flag
		else if (posy1 == posy2 && posx2 == posx3) {
			if (posy2 < posy3) {
				leftTurnFlag = 1;
			}
			else if (posy2 > posy3) {
				rightTrunFlag = 1;
			}
		}
	}

	if (straightFlag == 1) {
		printf("Straight\n");
	}
	else if (uTurnFlag == 1) {
		printf("U-turn\n");
	}
	else if (rightTrunFlag == 1) {
		printf("Right\n");
	}
	else if (leftTurnFlag == 1) {
		printf("Left\n");
	}

	return 0;
}