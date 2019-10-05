/*
Modify the source code from Exercise 13-18 so that the
getch() function illustrated in Listing 13-10 is used to gather input. Build
and run to ensure that the output is what the user would anticipate.
*/

#include <stdio.h>

char getch(void);
int main()
{
	char first, second;
	
	printf("Type your first initial");
	first = getch();
	printf("Type your second initial");
	second = getch();
	printf("Your initials are '%c' and '%c'\n", first, second);


	return 0;
}

char getch(void)
{
	char ch;
	ch = getchar();

	while(getchar()!='\n')
		;
	return ch;
}
