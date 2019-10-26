/*
Intro to static variables
The variavble a used in the following function is local to the function,
and is washed off when the function ends.
*/

/*
Exercise 16-6: Modify the source code from Listing 16-4, editing Line 16 to
read:
static int a;
*/

#include <stdio.h>

void proc(void);

int main()
{
	puts("First call");
	proc();
	puts("Second call");
	proc();

	return 0;
}


void proc(void)
{
	static int a;
	
	printf("The value of variable a is %d\n", a);
	printf("Enter a new value ");
	scanf("%d", &a);
}
