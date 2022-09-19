#include <stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
	//for (int i = 1; i <= 2 * n - 1 ; i += 2) {
		for (int j = 1; j <= i; j++) 
		//for (int j = 1; j <= 2 * i - 1; j++) 
			printf("%d ", j);
			printf("\n");
	}
}