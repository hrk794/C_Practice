/*
Intro to static variables
The variavble a used in the following function is local to the function,
and is washed off when the function ends.
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
	int a;
	
	printf("The value of variable a is %d\n", a);
	printf("Enter a new value ");
	scanf("%d", &a);
}
