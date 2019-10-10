/*
Exercise 14-7: Add code to Listing 14-3 so that the display of structures is
sorted with the highest score listed first. Yes, you can do this. Sorting an
array of structures works just like sorting any other array. Review Chapter 12
if you suddenly lose your nerve.
*/


#include <stdio.h>

int main()
{
	struct scores
	{
		char name[32];
		int score;
	};

	struct scores player[4];
	int outer, inner, x;
	struct scores temp;

	// Get the data in to the structures
	for(x=0;x<4;x++)
	{
		printf("Enter player %d: ", x+1);
		scanf("%s", player[x].name);
		printf("Enter their score: ");
		scanf("%d", &player[x].score);
	}

	// Sort the structures according to the scores

	for (outer=0; outer<3; outer++)
	{

		for(inner=outer+1;inner<4;inner++)
		{
			if (player[outer].score > player[inner].score)
			{
				temp = player[outer];
				player[outer] = player[inner];
				player[inner] = temp; 
			}
		}
	
	}
	// Print the sorted data
	puts("Player Info");
	printf("#\tName\tScore\n");
	for(x=0;x<4;x++)
	{
		printf("%d\t%s\t%5d\n", x+1, player[x].name, player[x].score);
	}

	return 0;
}
