#include <stdio.h>

int main() {

	float height;
	float weight;

	printf("Please enter your weight : ");
	scanf_s("%f", &weight);
	printf("Please enter your height : ");
	scanf_s("%f", &height);

	float BMI = weight / (height * height);

	printf("Your recoreded BMI is : %f", BMI);
}