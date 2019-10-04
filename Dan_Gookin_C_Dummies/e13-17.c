/*

standard input in C isn’t character based, it’s stream
based.

*/

/*
Consider the code illustrated in Listing 13-8. It appears from the listing that
the code reads input until the period is encountered. At that point, you would
assume that input would stop, but that’s not anticipating stream input.

*/
#include <stdio.h>

int main()
{
	char i;
	
	do
	{
		i = getchar();
		putchar(i);
	} while(i != '.');
	
	putchar('\n');

	return 0;
}
