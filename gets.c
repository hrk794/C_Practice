#include<stdio.h>

void main()
{

    char line[21];
    char str[30];
    printf("Input five lines\n");
    
// for loop iterates 5 times. fgets() stores a line from stdin to char array "line:. Cant use gets() as it causes segmentation fault because of overstepping in memory.
/*

fgets() provides a way to limit the number of characters from stdin stored in the array, and hence ensures the prog does not access 
memory location it is not supposed to. 

puts() can't handle the formatted string with %, and is thus considered safer than printf(). It appends a newline char to the string by default. 

*/ 
    for (int i=1;i <= 5; ++i)
        {

            fgets(line, 21, stdin);
            sprintf(str,"%d: %s", i, line);
            puts(str);
            

        }

}
