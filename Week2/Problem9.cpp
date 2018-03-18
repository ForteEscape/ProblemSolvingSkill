#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int rectPosX1, rectPosY1;
	int rectPosX2, rectPosY2;
	int rectPosX3, rectPosY3;
	int rectPosX4, rectPosY4;

	scanf("%d %d", &rectPosX1, &rectPosY1);
	scanf("%d %d", &rectPosX2, &rectPosY2);
	scanf("%d %d", &rectPosX3, &rectPosY3);
	scanf("%d %d", &rectPosX4, &rectPosY4);

	if (rectPosX1 != rectPosX2 && rectPosY1 != rectPosY2) {
		printf("No\n");
	}
}