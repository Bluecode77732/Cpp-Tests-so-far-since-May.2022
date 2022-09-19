#include <stdio.h>

int main() {

	int i;

	while (i != 0) {
		scanf_s("%d", &i);
	}
	do {
		printf("Type 0\n");
		scanf_s("%d", &i);
	} while (true);
	printf("%d", &i);
}