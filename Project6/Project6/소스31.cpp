/*
n = 4 
1
1 3
1 3 5 -> 2*3-1
1 3 5 7

2k - 1
*/
#include <stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
			for (int k = 1; k <= i; k++/* 2 * i - 1; k += 2 */) {
				printf("%d ", 2 * k - 1 /* j */);
				//if (i % 2 == 0)
			}
		printf("\n");
	}
}