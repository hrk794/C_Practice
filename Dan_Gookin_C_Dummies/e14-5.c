/*
Exercise 14-5: Add another president structure variable, second, to your
code, initializing that structure with information about the second president,
John Adams, who was inaugurated in 1797. Display the contents of both
structures.
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


	struct president second =
	{
		"John Adams",
		1797
	};


	printf("The first president was %s\n", first.name);
	printf("He was inaugurated in %d\n", first.year);

	printf("The second president was %s\n", second.name);
	printf("He was inaugurated in %d\n", second.year);


	return 0;
}
