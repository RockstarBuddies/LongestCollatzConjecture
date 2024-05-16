#include <stdio.h>

int main() {
	long inp;
	long answer;
	long long number;
	int terms;
	int dterm=0;
	printf("Enter number ");
	scanf_s("%ld", &inp);
	for (long start = inp/2; start < inp; start++) {
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
	printf("\nLongest Collatz Conjecture Sequence under %ld is %d\nAnswer: %ld",inp, dterm, answer);
	return 0;
}
