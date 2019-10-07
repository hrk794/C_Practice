/*
Modify the source code from Listing 14-1 so that another
member is added to the player structure, a float value indicating hours
played. Fix up the rest of the code so that the new value is input and displayed.
*/


#include <stdio.h>

int main()
{
	struct player
	{
		char name[32];
		int highscore;
		float time;
	};

	struct player xbox;

	printf("Enter the player's name: ");
	scanf("%s", xbox.name);
	
	printf("Enter their highscore: ");
	scanf("%d", &xbox.highscore);

	printf("Enter the number of hours played: ");
	scanf("%f", &xbox.time);

	printf("Player %s has a highscore of %d, and has played for %f hours.\n", xbox.name, xbox.highscore, xbox.time);

	return 0;
}
