#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int c1Pos_x, c1Pos_y, c1Radius;
	int c2Pos_x, c2Pos_y, c2Radius;
	int distance = 0;

	scanf("%d %d %d", &c1Pos_x, &c1Pos_y, &c1Radius);
	scanf("%d %d %d", &c2Pos_x, &c2Pos_y, &c2Radius);

	distance = (c1Pos_x - c2Pos_x)*(c1Pos_x - c2Pos_x) + (c1Pos_y - c2Pos_y)*(c1Pos_y - c2Pos_y);

	if ((c1Radius + c2Radius)*(c1Radius + c2Radius) > distance) {
		if (c1Radius > c2Radius) {
			if ((c1Radius - c2Radius)*(c1Radius - c2Radius) < distance) {
				printf("Yes\n");
			}
			else printf("No\n");
		}
		else if (c1Radius < c2Radius) {
			if ((c2Radius - c1Radius)*(c2Radius - c1Radius) < distance) {
				printf("Yes\n");
			}
			else printf("No\n");
		}
	}
	else if ((c1Radius + c2Radius)*(c1Radius + c2Radius) == distance) {
		printf("Yes\n");
	}
}