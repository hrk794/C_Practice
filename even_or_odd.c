#include<stdio.h>

void main()

{
    int n;
    
    printf("Enter a number\n");
    scanf("%d", &n);

    /*if n is completely divisible by two, then prints even, otherwise n is odd*/

    if (n%2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

}
