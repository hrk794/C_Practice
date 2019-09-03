#include <stdio.h>


int main()
{
	int highscore1, highscore2, highscore3;

	printf("\nYour highest score: ");
	scanf("%d", &highscore1);
	printf("\nYour second highest score: ");
	scanf("%d", &highscore2);
	printf("\nYour third highest score: ");
	scanf("%d", &highscore3);

	printf("Here are your scores:\n");
	printf("#1 %d\n", highscore1);
	printf("#2 %d\n", highscore2);
	printf("#3 %d\n", highscore3);


	return 0;

}
