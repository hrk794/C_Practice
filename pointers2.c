#include <stdio.h>

// Usually when a function is passed a variable, it creates a copy of the variable for itself
// But when we pass a pointer to the variable, the function has access to the original variable
// itself. Thus it can change the variable's value

void change_value(int *);
int main()
{

	int x = 20;
	
	int *p; 

	printf("The value of x is %d\n", x);
	change_value(&x); // passing the address of the variable to the function
	printf("The value of x is %d\n", x);
	
	return 0;

}

void change_value(int *p)
{

	*p = 25;

}


