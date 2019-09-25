/*
Exercise 13-8: Eliminate the match variable from your code in Exercise 13-7
and use the strcmp() function directly in the if comparison. That’s the way
most programmers do it.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char password[] = "taco";
	char input[15];

	printf("Password: ");
	scanf("%s", input);

	if (strcmp(input, password) == 0)
		puts("Password accepted");
	else
		puts("Invalid password. Alert the authorities.");



	return 0;
}
