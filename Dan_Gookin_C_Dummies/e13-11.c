/* 
Exercise 13-11: Modify your source code so that a single space is concat-
enated to the first string before the last string is concatenated.
*/


#include <stdio.h>
#include <string.h>

int main()
{
	char first [40];
	char last[20];
	
	printf("What is your first name? ");
	scanf("%s", first);
	printf("What is your last name? ");
	scanf("%s", last);
	strcat(first, " ");
	strcat(first, last);
	printf("Pleased to meet you, %s!\n", first);


	return 0;
}
