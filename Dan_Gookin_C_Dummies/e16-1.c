/*
This is about typecasting.
Run the program to find that the output is not correct 
without typecasting.
*/

#include <stdio.h>

int main()
{
	int a, b;
	float c;

	printf("Input the first value: ");
	scanf("%d", &a);
	printf("Input the second value: ");
	scanf("%d", &b);

	c = a/b;
	printf("%d/%d = %.2f\n", a, b, c);

	return 0;
}
