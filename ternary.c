#include<stdio.h>
int main()
{
    int age;
    printf("enter your age ");
    scanf("%d",&age);
    age>18 ? printf("adult"): printf("not adult"); //syntax for ternary operator
    return 0;
}