/*
printf(“That argument is %s.\n”,argv[0]);
Exercise 15-3: Modify your source code by adding the preceding line, insert-
ing it after the first printf() statement. Build and run.
*/


#include <stdio.h>

int main(int argc, char *argv[])
{

	printf("You typed %d arguments.\n", argc);
	printf("That argument is %s.\n", argv[0]);

	return 0;
}
