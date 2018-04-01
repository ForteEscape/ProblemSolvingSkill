/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main() {
	
	//direction [0 is right, 1 is left, 2 is up, 3 is down]
	srand((unsigned int)time(NULL));

	int number, posx = 0, posy = 0;
	double step = 0;
	double sum = 0;
	
	scanf("%d", &number);

	for (int i = 0; i < 1000; i++) {
		while (true) {
			int move = rand() % 4;

			if (move == 0) {
				posx++;
			}
			else if (move == 1) {
				posx--;
			}
			else if (move == 2) {
				posy++;
			}
			else if (move == 3) {
				posy--;
			}

			step++;

			if (posx == number || posy == number || posx == -number || posy == -number) {
				break;
			}
		}
		sum += step;
		step = 0;
	}
	printf("%lf", sum / 1000.0);
	return 0;
}*/