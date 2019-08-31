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
    
    
    
    // Dynamically doing the same thing
    
    struct student s2;
    
    printf("Please enter your name: ");
    scanf("%s", s2.name);
    printf("Please enter your Roll number: ");
    scanf("%d", &s2.roll);
    printf("Please enter your age: ");
    scanf("%d", &s2.age);
    
    // Method of accessing the variable     
    printf("Name: %s \n", s1.name);
    printf("Roll number: %d \n", s1.roll);
    printf("Age: %d \n", s1.age);
    
    printf("\n");
    
    printf("Name: %s \n", s2.name);
    printf("Roll number: %d \n", s2.roll);
    printf("Age: %d \n", s2.age);

}
