#include <stdio.h>

int main() {

	int n;
	int j;
	scanf_s("%d%d", &n, &j);

	for (int n = 1; n <= j; n += 1) {
		printf("%d\n", n);
	}
}