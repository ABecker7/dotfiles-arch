#include <stdio.h>

int main() {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("temperatures\n");
	while (celsius <= upper) {
		fahr = (celsius) * (5.0/9.0) + 32;
		printf("%3.1f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
