// 1, 2, 4, 6, 12
#include <stdio.h>

int main() {

	printf("자연수 입력\n");
	int i;
	scanf_s("%d", &i);
	
	for (int n = 1; n <= i; n++) {
		if (i % n == 0) {
			printf("%d, ", n);
		}
	}
}