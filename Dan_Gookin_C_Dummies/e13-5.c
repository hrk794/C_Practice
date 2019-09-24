#include <stdio.h>
#include <ctype.h>

int main()
{
	char answer;
	
	printf("Would you like to blow up the moon? ");
	scanf("%c", &answer);
	answer = toupper(answer);
	if (answer == 'Y')
		puts("BOOM!");
	if (answer == 'N')
		puts("The moon is safe");
	if (answer != 'Y' && answer != 'N')
		puts("Kindly enter a valid answer.");

	return 0;
}
