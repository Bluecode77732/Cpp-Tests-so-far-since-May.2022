#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);

	if (n % 0) {
		printf("Even number\n");
	}
	else {
		printf("odd number\n");
	}
}