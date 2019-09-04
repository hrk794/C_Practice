#include <stdio.h>
#include <math.h>


int main()
{

	int num[] = {10, 12, 14, 15, 16, 18, 20};
	float roots[7];
	int i;
	
	for(i=0;i<7;i++)
	{
		roots[i] = sqrt(num[i]);
	}


	for(i=0;i<7;i++)
	{
		printf("The square root of %d is %f\n", num[i], roots[i]);
	}




	return 0;
}
