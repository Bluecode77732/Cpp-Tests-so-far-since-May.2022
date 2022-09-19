#include <stdio.h>

int main() {

	int i = 1;

	repeat:
	printf("%d\n", i);
	if (i < 50000) {
		i++;
		goto repeat;
	}
}