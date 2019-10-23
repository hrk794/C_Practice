/*
Exercise 15-4: Modify the code again, this time adding a for loop to work
through all the arguments and displaying each one. For example, the output
may look like this:

begc4d$ ./ex1504 Shadrach Meshach Abednego
Arg#1 = ./ex1504
Arg#2 = Shadrach
Arg#3 = Meshach
Arg#4 = Abednego
*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	for(int i=0; i<argc; i++)
	{
		printf("Arg#%d = %s\n", i+1, argv[i]);
	}

	return 0;
}
