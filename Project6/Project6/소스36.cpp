#include <stdio.h>

int main() {

	int S, I;
	
	for (S = 0; S <= 100; S++) {
		for (I = 0; I <= S; I++) {
			printf("*");
		}
		printf("\n");
	}
}