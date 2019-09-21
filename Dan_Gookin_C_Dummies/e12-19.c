#include <stdio.h>
#define SIZE 4

int main()
{
		char president[SIZE][8] = {
			"Clinton",
			"Bush",
			"Obama",
			"Trump"
		};
		int index,x;

		for (x = 0; x < SIZE; x++)
		{
			puts(president[x]);
			//index = 0;
			//while (president[x][index]  != '\0')
			//{
			//	putchar(president[x][index]);
			//	index++;
			//}
			//putchar('\n');
		}
		

	return 0;
}
