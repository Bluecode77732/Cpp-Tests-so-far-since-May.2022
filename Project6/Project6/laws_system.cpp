#include <stdio.h>

int main() {

	int law = 1;
	int theft = 2;
	int harm = 3;
	int murder = 4;
	int rape = 4;
	
	printf("What is your guilty?\n");

	scanf_s("%d", &law, &theft,  &harm, &rape, &murder);
	/*
	if (0 < law) {
		printf("\nNo Guilt.");
	}
		if (theft >= 0) 
			printf("\nSentence to minimum fine of $1,000 or maximum fine of $10,000."); 

	else if (0 < law) {
		printf("\nNo Guilt.");
	}
		if (law <= harm) 
			printf("\nSentence to jail for 3 months to 20 years.");

	else if (0 < law) {
		printf("\nNo Guilt.");
	}
		if (law <= murder)
			printf("\nSentence to jail for 10 years to 40 years in prison or Maximum of life in prison.");

	else if (0 < law) {
		printf("\nNo Guilt.");
	}
		if (law <= rape) 
			printf("\nSentence to jail for 10 years to 40 years in prison or Maximum of life in prison.");
			*/
	
	switch (law) {
	case 1:
		printf("guilty for harm");
		break;

	case 2:
		printf("guilty for murder");
		break;

	case 3:
		printf("guilty for rape");
		break;

	case 4:
		printf("guilty for theft");
		break;
	}
}	