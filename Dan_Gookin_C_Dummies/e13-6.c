#include <stdio.h>
#include <ctype.h>

int main()
{
	char phrase[] = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of the earth, the separate and equal station to which the Laws of Nature and of Nature’s God entitle them, a decent respect to the opinions of mankind requires that they should declare the causes which impel them to the separation.";

	int index;

	/* Print the original text */
	puts("The original is as follows:");
	printf("\"%s\"\n", phrase);

	/* modify the text */
	index = 0;
	while (phrase[index])
	{
		if (islower(phrase[index]))
			phrase[index] = toupper(phrase[index]);
		else
			phrase[index] = tolower(phrase[index]);
		index++;
	}

	/* Print Results */
	puts("The modified text is:");
	printf("\"%s\"\n", phrase);

	return 0;
}
