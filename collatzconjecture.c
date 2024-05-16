#include <stdio.h>

int main() {
	long answer;
	long long number;
	int terms;
	int dterm=0;
	for (long start = 500000; start < 1000000; start++) {
		terms = 1;
		number = start;
		while (number > 1) {
			while (number % 2 == 0) {
				number /= 2;
				terms++;
			}
			if (number > 1) {
				number = (3 * number) + 1;
				terms++;
			}
		}
		if (terms > dterm) {
			dterm = terms;
			answer = start;
		}
	}
	printf("\nLongest chain is: %d\nAnswer: %ld", dterm, answer);
	return 0;
}
