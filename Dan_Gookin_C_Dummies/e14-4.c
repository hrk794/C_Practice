/*
Exercise 14-4: Modify your source code from Exercise 14-3 so that the struc-
ture and variable are declared and initialized as one statement.
*/


#include <stdio.h>

int main()
{
	struct president
	{
		char name[40];
		int year;
	} first = {
			"George Washington",
			1789
		};

	printf("The first president was %s\n", first.name);
	printf("He was inaugurated in %d\n", first.year);


	return 0;
}
