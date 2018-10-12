#include<stdio.h>

void main()

{
    int height, base;
    float ans;
    //ans may come in fractions

    printf("Enter the height and base\n");
    scanf("%d %d", &height, &base);
    ans = (float)height * base/2;
    //mathematical formula
    //printf(ans);
    printf("Area of the triangle is %d %d %d %f\n", height, base, (1/2), ans);

    /*Note: The '/' operator, when operating on two integers, returns an integer after performimg a floor division, even when the destination variable is a float or double. If trying to achieve actual float value as output of '/' opearator, convert/cast one/both operands to float/double */

}
