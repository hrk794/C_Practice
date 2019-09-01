#include <stdio.h>

/* Accessing the multi-dimensional array elements using pointers*/

int main()

{
    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    
    int i, j;
    
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d\t", *(*(arr + i) + j));
        }
        printf("\n");
    }
    
    return 0;
}


// Note that the jump made by the increment in the pointer variable is the size of its (pointer's) type
