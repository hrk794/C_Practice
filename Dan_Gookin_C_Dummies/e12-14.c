/*  Using the source code from Listing 12-5 as a starting point,
create a program that generates 40 random numbers in the range from 1
through 100 and stores those values in an array. Display that array. Sort that
array. Display the results.

*/



#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>



int main()
{
	int size = 40;
	int highscore[size];
	srand((unsigned)time(NULL));
	int x, a, b, temp, inner, outer;

	for (x = 0; x < size; x++)
	{
		highscore[x] = (rand() % 100) + 1;
	}

	// Display the array
	x = 0;
	printf("Here are your scores:\n");
	for (a = 0; a < 4; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%d\t", highscore[x]);
			x++;
		}
		printf("\n");
	}
	


	// Sort the array
	for (outer = 0; outer < (size-1); outer++)
	{
		for (inner=outer+1; inner < size; inner++)
		{
			if (highscore[outer] > highscore[inner])
				{
					temp = highscore[outer];
					highscore[outer] = highscore[inner];
					highscore[inner] = temp;
				}
		}
	}
	


	// Display the sorted array
	x = 0;
	printf("Here are your scores:\n");
	for (a = 0; a < 4; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%d\t", highscore[x]);
			x++;
		}
		printf("\n");
	}


	return 0;
}
