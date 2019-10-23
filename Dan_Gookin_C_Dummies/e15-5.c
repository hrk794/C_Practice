// This one is about using the exit() function from the stdlib to bail out.
// return() or exit() can be used anywhere in the program.

#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main()
{
	puts("This program quits before it's done.");
	sub();
	puts("Or was that on purpose?");

	return 0;
}


void sub(void)
{
	puts("Which is the plan.");
	exit(0);
}
