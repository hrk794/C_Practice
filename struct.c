#include <stdio.h>


int main()

{
    // Declaration of the structure 
    struct student {
        char name[20];
        int roll;
        int age;  
    };

    // Creating a struct variable
    struct student s1 = {"Bob", 3, 20};
    
    // Method of accessing the variable         
    printf("Name: %s \n", s1.name);
    printf("Roll number: %d \n", s1.roll);
    printf("Age: %d \n", s1.age);

}
