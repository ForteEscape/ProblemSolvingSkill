#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int triangle1, triangle2, triangle3;
	int MAX = 0;

	scanf("%d %d %d", &triangle1, &triangle2, &triangle3);

	if (triangle1 > MAX) {
		MAX = triangle1;
	}

	if (triangle2 > MAX) {
		MAX = triangle2;
	}

	if (triangle3 > MAX) {
		MAX = triangle3;
	}

	if (triangle1 == MAX && triangle2 + triangle3 > MAX) {
		printf("Yes");
	}
	else if (triangle2 == MAX && triangle1 + triangle3 > MAX) {
		printf("Yes");
	}
	else if (triangle3 == MAX && triangle1 + triangle2 > MAX) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}