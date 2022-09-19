#include <stdio.h>

int main() {
	/*printing '1' to 'n' adding up.*/

	int n;
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}