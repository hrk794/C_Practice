#include <stdio.h>

int main()
{
	struct player
	{
		char name[32];
		int highscore;
	};
	struct player xbox;

	printf("Enter the player's name: ");
	scanf("%s", xbox.name);
	
	printf("Enter thier highscore: ");
	scanf("%d", &xbox.highscore);


	printf("Player %s has a highscore of %d\n", xbox.name, xbox.highscore);

	return 0;
}
