#include <stdio.h>

int main()
{
	char tictactoe[3][3] = {'.', '.', '.', '.', 'X', '.', '.', '.', '.'}; // modified from 12-17
	int x, y;
	
	/* Commenting out this part from 12-17
	 Initialize matrix 
	for (x=0;x<3;x++)
	{
		for (y=0;y<3;y++)
		{
			tictactoe[x][y] = '.';
		}
	}
	tictactoe[1][1] = 'X';
	*/


	/* display game board */

	puts("Ready to play Tic-Tac-Toe?");
	for (x=0;x<3;x++)
	{
		for (y=0;y<3;y++)
		{
			printf("%c\t", tictactoe[x][y]);	
		}
		putchar('\n');
	}
	

	return 0;
}
