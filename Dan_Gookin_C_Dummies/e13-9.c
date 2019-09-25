/*
Exercise 13-9: Ratchet down security a notch by replacing the strcmp()
function with strcasecmp(). Run the program to confirm that both taco
and TACO are accepted as the password.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char password[] = "taco";
	char input[15];

	printf("Password: ");
	scanf("%s", input);

	if (strcasecmp(input, password) == 0)
		puts("Password accepted");
	else
		puts("Invalid password. Alert the authorities.");



	return 0;
}
