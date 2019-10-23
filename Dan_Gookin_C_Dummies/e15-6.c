// This one demonstrates the use of the system() function from the
// stdlib library.



#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Press Enter to clear the screen:");
	getchar();
	system("clear");
	puts("That's better");

	return 0;
}
