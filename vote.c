#include<stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("u can vote\n");//we can print multiple lines 
        printf("they become adult\n");//write a program if a person can vote or not
        printf("the can drive\n");
    }
    else{
        printf("u cant vote");
    }
    
    return 0;

}