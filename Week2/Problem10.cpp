#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int posx, posy;
	int chk_posx = -9999, chk_posy = -9999;
	int number_point;
	int inputErrorFlag = 0;
	int distance = 0;

	scanf("%d", &number_point);

	for (int i = 0; i < number_point; i++) {
		scanf("%d %d", &posx, &posy);

		if (i > 0) {
			if (posx != chk_posx && posy != chk_posy) {
				inputErrorFlag = 1;
			}
			else {
				if (posx == chk_posx && posy > chk_posy) {
					distance += posy - chk_posy;
				}
				else if (posx == chk_posx && posy < chk_posy) {
					distance += chk_posy - posy;
				}
				else if (posy == chk_posy && posx > chk_posx) {
					distance += posx - chk_posx;
				}
				else if (posy == chk_posy && posx < chk_posx) {
					distance += chk_posx - posx;
				}
				chk_posx = posx;
				chk_posy = posy;
			}
		}
		else {
			chk_posx = posx;
			chk_posy = posy;
		}
	}
	
	if (inputErrorFlag == 1) {
		printf("Input Error\n");
	}
	else printf("%d\n", distance);
}