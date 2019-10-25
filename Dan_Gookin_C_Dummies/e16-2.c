/*
Exercise 16-2: Modify your source code, changing Line 12 to read
c = (float)a/(float)b;
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

	c = (float)a/(float)b;
	printf("%d/%d = %.2f\n", a, b, c);

	return 0;
}
