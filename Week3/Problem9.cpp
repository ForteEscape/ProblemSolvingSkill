#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int prevNumber;

	bool increase = false;
	bool decrease = false;

	int sequenceLength = 1;
	int spike_count = 0;
	int graphDirection = 0;

	while (true) {

		if (sequenceLength > 1) {
			prevNumber = number;
		}

		scanf("%d", &number);

		if (number == -1) break;

		if (sequenceLength > 1) {
			if (prevNumber < number) {
				increase = true;
				if (decrease == true) {
					graphDirection = -1; // increase to decrease, direction = -1 
				}
			}
			else if (prevNumber > number) {
				decrease = true;
				if (increase == true) {
					graphDirection = 1; // decrease to increase, direction = 1
				}
			}

			if (increase == true && decrease == true) {
				if (graphDirection == -1) {
					decrease = false;
				}
				else if (graphDirection == 1) {
					increase = false;
				}

				spike_count++;
			}
		}

		sequenceLength++;
	}

	if (graphDirection == -1 && spike_count == 1) { // Concave spike count is 1
		printf("Concave\n");
	}
	else if (graphDirection == 1 && spike_count == 1) { // Convex spike count is 1
		printf("Convex\n");
	}
	else if (spike_count > 1) {
		printf("None\n");
	}
	else if (spike_count == 0) {
		printf("Both\n");
	}

	return 0;
}