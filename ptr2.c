#include <stdio.h>

int main()

{   
    // declaring array
    int arr[5] = {5,8,7,9,4,};
    
    // decaring a pointer to the array
    int * ptr = arr;    // arr is name of array, so it returns the starting address of the first element
    
    for (int i=0;i<5;i++)
    {
        printf("%d th element is %d at location %u\n", i, *ptr, ptr);
        ptr++;
    }
    
    // Notice that in the output, the memory locations are 4 bytes part
    // whihc is the size of the type of the pointer, and we increment the pointer
    // by only one. So, a "+ 1" to a pointer corresponds to "+ sizeof pointer type" 
    
    return 0;
}
