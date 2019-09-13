#include <stdio.h>

#define SIZE 21

int main()
{
	char str[] = "C Programming is fun!";
	int inner,outer,x;
	char temp;

	/* Display original String*/
	for(x=0;x<SIZE;x++)
		printf("%c",str[x]);
	putchar('\n');

	/* Bubble sort */

	for (outer = 0; outer < SIZE-1; outer++)
	{
		for (inner = outer + 1; inner < SIZE; inner++)
		{
			if (str[outer] > str[inner])
			{
				temp = str[outer];
				str[outer] = str[inner];
				str[inner] = temp;


			}
			
		}
	}

	/* Display sorted String*/
	puts("Sorted Array: ");
	for (x=0; x<SIZE; x++)
	{
		printf("%c", str[x]);
	}
	putchar('\n');

	return 0;
}
