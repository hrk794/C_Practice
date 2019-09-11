#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int seed;
	int r,a,b;
	
	printf("Input a random seed number: ");
	scanf("%u", &seed);
	srand(seed);
	for (a=0;a<20;a++)
	{
		for ( b=0;b<5;b++)
		{
			r = rand();
			printf("%d\t", r);
		}
		printf("\n");
	}


	return 0;
}
