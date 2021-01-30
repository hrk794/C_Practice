#include <stdio.h>
 
int main()
{
    float this_is_a_number;
 
    printf( "Please enter a number: " );
    scanf( "%f", &this_is_a_number );
    printf( "You entered %d\n", this_is_a_number ); // Notice that the placeholder is %d and not %f as expected normally.
    getchar();
    return 0;
}

// Try entering different inputs and observe the output.
