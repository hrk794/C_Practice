/*
Exercise 14-9: Replace the name member in the human structure with a
nested structure. Name that structure id and have it contain two members,
char arrays, first and last, for storing an individual’s first and last names.
If you do everything correctly, the reference to the president’s name will be
the variables president.name.first and president.name.last. Be
sure to assign values to these variables in your code and display the results.
*/


/*
Exercise 16-4: Modify the source code from the project you create in Exercise
14-9 (in Chapter 14) to use typedef, as shown in Listing 16-4. Build and run.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct date
	{
		int month;
		int day;
		int year;
	} calendar;

	typedef struct id
	{
		char first[20];
		char last[20];
	} personal;

	struct human
	{
		personal name;
		calendar birthday;
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
