/*
Add a second function, arrayinc(), to your source code
from Exercise 12-23. Make it a void function. The function takes an array
as its argument. The function adds 1 to each value in the array. Have the
main() function call arrayinc() with array n as its argument. Then call the
showarray() function a second time to display the modified values in the
array.
*/

#include <stdio.h>

#define SIZE 6

void showarray(int array[]);
void arrayinc(int array[]);

int main()
{
	int n[] = { 1, 2, 3, 4, 5, 7 };

	puts("Here's your array: ");
	showarray(n);
	arrayinc(n);
	showarray(n);

	return 0;

}


void showarray(int array[])
{
	int x;

	for(x=0;x<SIZE;x++)
		printf("%d\t", array[x]);
	putchar('\n');
}

void arrayinc(int array[])
{
	int x;

	for(x=0;x<SIZE;x++)
		array[x]++;
}
