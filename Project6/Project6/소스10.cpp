#include <stdio.h>

int main() {

	int choice;
	
	printf("New world : 1\n");
	printf("Load : 2\n");
	printf("Settings : 3\n");
	printf("Credit : 4\n");
	
	scanf_s("%d", &choice);

	switch (choice) {
	case 1 :
		printf("New world : 1\n");
		break;

	case 2 :
		printf("Load : 2\n");
		break;

	case 3 :
		printf("Settings : 3\n");
		break;

	case 4 :
		printf("Credit : 4\n");
		break;

	default : 
		printf("No Results.\n");
	}
}