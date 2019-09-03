#include<stdio.h>


int main()
{
	int number_of_scores = 10;
	int highscore[number_of_scores];
	int x;

	for (x = 0; x < number_of_scores; x++)
	{
		printf("Your #%d score: ", x+1);
		scanf("%d", &highscore[x]);
	}

	printf("Here are your scores:\n");
	for (x = 0; x < number_of_scores; x++)
	{
		printf("#%d %d\n", x+1, highscore[x]);
	}


	return 0;
}
