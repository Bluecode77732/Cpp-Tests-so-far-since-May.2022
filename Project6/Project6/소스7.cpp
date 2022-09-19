#include <stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);

	if (n > 0) {
		printf("%d is the 'positive real number'.\n", n);
	}
	else if (n == 0) {
		printf("%d is '0'(Zero)\n", n);
	}
	else if (n == -7) {
		printf("%d is -7\n", n);
	}
	else {
		printf("%d is the 'negative real number'.\n", n);
	}

}