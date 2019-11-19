/*
Modify the binbin() function from Listing 17-1 so that it dis-
plays 16 bits of the int value.
*/

#include <stdio.h>

char *binbin(int n);

int main()
{
	int input;
	
	printf("Type a value 0 to 65535: ");
	scanf("%d", &input);
	printf("%d is binary %s\n", input, binbin(input));

	return 0;
}

char *binbin(int n)
{
	static char bin[17];
	int x ;
	
	for(x=0;x<16;x++)
	{
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<= 1;
	}
	bin[x] = '\0';
	return(bin);
}
