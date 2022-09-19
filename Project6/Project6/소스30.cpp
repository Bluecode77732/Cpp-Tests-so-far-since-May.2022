#include <stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		int k = i % 10;
		if (k == 3 || k == 6 || k == 9) {
		printf("*, ");
		}
		else {
			printf("%d, ", i);
		}
	}
}