/*
Exercise 14-9: Replace the name member in the human structure with a
nested structure. Name that structure id and have it contain two members,
char arrays, first and last, for storing an individual’s first and last names.
If you do everything correctly, the reference to the president’s name will be
the variables president.name.first and president.name.last. Be
sure to assign values to these variables in your code and display the results.
*/



#include <stdio.h>
#include <string.h>

int main()
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct id
	{
		char first[20];
		char last[20];
	};
	struct human
	{
		struct id name;
		struct date birthday;
	};

	struct human president;

	strcpy(president.name.first, "George");
	strcpy(president.name.last, "Washington");
	president.birthday.month = 2;
	president.birthday.day = 22;
	president.birthday.year = 1732;

	printf("%s %s was born on %d/%d/%d\n",
		president.name.first,
		president.name.last,
		president.birthday.month,
		president.birthday.day,
		president.birthday.year);

	return 0;
}
