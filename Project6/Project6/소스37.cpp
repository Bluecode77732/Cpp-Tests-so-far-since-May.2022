//https://youtube.com/shorts/3xsaCXzmVqw?feature=share

#include <stdio.h>

int main() {

	int n;
	printf("Enter a Number\n");
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++) 
	{
		for (int j = i - 1; j >= i; j--)
		{
			printf(" ");
		}
		for (int k = i - 1; k >= -(i - 1); k--)
		{
			printf("%d", i - k);
		}
		printf("\n");
	}
}