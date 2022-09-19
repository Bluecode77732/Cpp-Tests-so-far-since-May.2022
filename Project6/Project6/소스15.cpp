#include <stdio.h>

int main() {
	int a{};

	while (a != 0) {
		scanf_s("%d", &a);
	}

	do {
		printf("Input 0\n");
		scanf_s("%d", &a);
	} while (a != 0);
	printf(" '0 has finally written'. ");
}