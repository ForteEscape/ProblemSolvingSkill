/*#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int square1Posx1, square1Posy1, square1Posx2, square1Posy2;
	int square2Posx1, square2Posy1, square2Posx2, square2Posy2;

	int overlapLengthPosx = -1;
	int overlapLengthPosy = -1;

	scanf("%d %d %d %d", &square1Posx1, &square1Posy1, &square1Posx2, &square1Posy2);
	scanf("%d %d %d %d", &square2Posx1, &square2Posy1, &square2Posx2, &square2Posy2);

	// check overlap posx
	if (square2Posx1 <= square2Posx2) {
		for (int i = square2Posx1; i <= square2Posx2; i++) {
			if (square1Posx1 <= square1Posx2) {
				for (int j = square1Posx1; j <= square1Posx2; j++) {
					if (i == j) {
						overlapLengthPosx++;
					}
				}
			}
			else {
				for (int j = square1Posx2; j <= square1Posx1; j++) {
					if (i == j) {
						overlapLengthPosx++;
					}
				}
			}
		}
	}
	else {
		for (int i = square2Posx2; i <= square2Posx1; i++) {
			if (square1Posx1 <= square1Posx2) {
				for (int j = square1Posx1; j <= square1Posx2; j++) {
					if (i == j) {
						overlapLengthPosx++;
					}
				}
			}
			else {
				for (int j = square1Posx2; j <= square1Posx1; j++) {
					if (i == j) {
						overlapLengthPosx++;
					}
				}
			}
		}
	}

	// check overlap posy
	if (square2Posy1 <= square2Posy2) {
		for (int i = square2Posy1; i <= square2Posy2; i++) {
			if (square1Posy1 <= square1Posy2) {
				for (int j = square1Posy1; j <= square1Posy2; j++) {
					if (i == j) {
						overlapLengthPosy;
					}
				}
			}
			else {
				for (int j = square1Posy2; j <= square1Posy1; j++) {
					if (i == j) {
						overlapLengthPosy;
					}
				}
			}
		}
	}
	else {
		for (int i = square2Posy2; i <= square2Posy1; i++) {
			if (square1Posy1 <= square1Posy2) {
				for (int j = square1Posy1; j <= square1Posy2; j++) {
					if (i == j) {
						overlapLengthPosy;
					}
				}
			}
			else {
				for (int j = square1Posy2; j <= square1Posy1; j++) {
					if (i == j) {
						overlapLengthPosy;
					}
				}
			}
		}
	}

	printf("%d\n", overlapLengthPosx*overlapLengthPosy);
}*/