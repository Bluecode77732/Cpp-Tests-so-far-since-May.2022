#include <stdio.h>

int main() {

	int i = 1;
	int k;
	//for (int i = 1; ; i++); 
	while (true) { 
		scanf_s("%d", &k);
		i++;

	if (k == 0)
		break;

	printf("%d¹øÂ°: %d\n", i, k);
	}
}