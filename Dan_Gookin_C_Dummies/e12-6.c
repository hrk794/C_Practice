#include<stdio.h>


int main()
{
	float market_close[] = {16.32, 15.55, 14.81, 15.28, 16.08};
	int x;


	printf("Stock Market Close\n");
	for (x = 0; x < 5; x++)
	{
		printf("Day %d: %f\n", x+1, market_close[x]);
	}


	return 0;
}
