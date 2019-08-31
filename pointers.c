// Playing a bit with pointers here


#include <stdio.h>

int main()

{
    // Declaring a variable and two pointers 
    int z = 20;
    
    int **x;
    int *y;
    
    // x now points to y ie x contains the address of y
    x = &y;
    
    // y now points to z ie y contains the address of z
    y = &z;

    // As y points to z, accessing value of z using y
    printf("Value of z is : %d\n", *y);
    
    // x points to y, so accessing value in y using x
    printf("Value of y is : %p\n", *x);
    
    // accessing value of z by using x to access y to access z
    printf("Value of z as pointed by y pointed by x is %d\n", **x);
    
    
    return 0;
}
