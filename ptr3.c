#include <stdio.h>
#include <string.h>

// Using the strchr and strstr functions

int main()

{
    
    // Declaring a string and its substring, and a char included in the first string 
    char s1[] = "I am the fastest man alive";
    
    char s2[] = "man";
    
    char c = 'f';
    
    
    printf("The whole string is:\n%s\n", s1);
    char * ptr = strchr(s1, c);
    printf("%s\n", ptr);
    
    char * p = strstr(s1, s2);
    printf("%s\n", p);

    return 0;

    // These functions return the pointer to the first occurence of the match.
    // Since they return just the pointer ie the address of the first element of the first match,
    // when we print the using the pointer, the entire string from the match till the null char is 
    // printed.

}
