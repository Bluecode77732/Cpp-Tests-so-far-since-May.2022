// 1, 2, 4, 6, 12
#include <stdio.h>

int main() {

	printf("�ڿ��� �Է�\n");
	int i;
	scanf_s("%d", &i);
	
	for (int n = 1; n <= i; n++) {
		if (i % n == 0) {
			printf("%d, ", n);
		}
	}
}