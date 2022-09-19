/*	
1. Create 'A Pigeon'.
2. Create 'The Feeds'.
3. Is 'The Pigeon' Famished?
4. Which Feeds Should The Pigeon Take?
5. Will The 'The Pigeon' Choose To 'Feeds' Or Not.
6. Is 'The Feed' Rotten?
8. Is The Pigeon Finished Feeding Itself?
9. Is The Pigeon Full?
10. Has The Pigeon Flew Away Or Not?

(Uneseccery). Create A Generator Looping Numbers.
*/

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
	int pigeon = 0;
	//char fresh_feed = 0; 
	float wheat = 1.0, cracked_corn = 1.5, safflower = 2;
	float rotten_wheat = -0.9, rotten_cracked_corn = -1.7, rotten_safflower = 2.5;
	//string feed[3] = { 'wheat', "cracked corn", "safflower"};
	int rotten_feed;
	rotten_feed = -10;

	printf("Is The Pigeon Hungry?\n\n" "If 'Yes' Press '1'. ");
	scanf_s("%d", &pigeon);
	
	if (pigeon < 0)
		printf("The Pigeon Has Flew Away\n");

	if (pigeon >= 0) 
		printf("\nThe Pigeon Is Famished. Get Feed The Pigeon!\n");

	//char fresh_feed[3]{ 'a', 'b', 'c' };

	printf("\nWhich Feed Would The Pigeon Want To Take?\n1.Wheat 2.Cracked Corn 3.Safflower\n");
	scanf_s("%d", &pigeon);

	int choose = 0;
	switch (choose) {
		case 1: 
			cout << "wheat";
			break;
		case 2: 
			cout << "cracked corn";
			break;
		case 3: 
			cout << "safflower";
			break;
	}
	//char a = (pigeon + case);
	//printf(a);

	/*
		for (fresh_feed > rotten_feed; pigeon + 1;)
			printf("The Pigeon chose to feed itself.");
	*/
}