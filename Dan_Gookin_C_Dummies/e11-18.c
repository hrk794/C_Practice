#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r,a,b;
	for (a=0;a<20;a++)
	{
		for (b=0;b<5;b++)
		{
			r=rand();
			r= (r % (101 - 1)) + 1;
			printf("%d\t", r);
		}
		putchar('\n');
	}



	return 0;
}
