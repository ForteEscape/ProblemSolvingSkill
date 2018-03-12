/*  5锅 苞力 家胶内靛
	201712011 辫技绕  */

#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int padovan_number;
	int padovan_preview = 1, padovan_preview2 = 1, padovan_current = 1;
	int padovan_next = 1;

	scanf("%d", &padovan_number);

	for (int i = 3; i <= padovan_number; i++) {
		padovan_next = padovan_preview2 + padovan_preview;
		padovan_preview2 = padovan_preview;
		padovan_preview = padovan_current;
		padovan_current = padovan_next;
	}

	printf("%d", padovan_next);

	return 0;
}
