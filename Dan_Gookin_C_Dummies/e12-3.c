#include <stdio.h>

int main ()
{
	
	int highscore[4];
	
	for (int i=0;i<4;i++)
	{
		printf("Your #%d score: ", i+1);
		scanf("%d", &highscore[i]);
	} 
	
	
	printf("Here are your scores:\n");
	printf("#1 %d\n", highscore[0]);
	printf("#2 %d\n", highscore[1]);
	printf("#3 %d\n", highscore[2]);
	printf("#4 %d\n", highscore[3]);
	
	return 0;
}
