/*
Write a program that displays the first and last names of the
first four presidents of the United States. Store the names in a multidimen-
sional char array. The names need to line up so that the output looks like
this:
George  Washington
John    Adams
Thomas  Jefferson
James   Monroe
*/

#include <stdio.h>

int main()
{
	char names[][11] = {"George", "Washington", "John", "Adams", "Thomas", "Jefferson", "James", "Monroe"};
	int i;

	for(i=0;i<8;i++)
	{
		printf("%-6s ", names[i]);
		i++;
		printf("%s\n", names[i]);
	}

	return 0;
}
