/*
Exercise 12-20: Modify your source code from Exercise 12-19 so that three
more presidents are added to the array: Washington, Adams, and Jefferson.
*/


#include <stdio.h>
#define SIZE 7

int main()
{
		char president[SIZE][11] = {
			"Washington",
			"Adams",
			"Jefferson",
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
