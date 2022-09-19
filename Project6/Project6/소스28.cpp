  #include <stdio.h>

int main() {

	int n = 0;
	printf("What's your score for the examination? \n");
	scanf_s("%d", &n);

	if (n >= 101) {
		printf("Wrong numbers");
	}
	else if (n <= 100 && n > 89) {
		printf("A");
	}
	else if (n <= 89 && n > 79) {
		printf("B");
	}
	else if (n <= 79 && n > 69) {
		printf("C");
	}
	else if (n <= 69 && n > 59) {
		printf("D");
	}
	else if (n <= 59 && n > 49) {
		printf("E");
	}
	else if (n <= 49 && n > -1) {
		printf("F");
	}
}