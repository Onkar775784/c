#include<stdio.h>
int main()
{
    int mark;
    printf("enter your marks:");
    scanf("%d",&mark);
    if (mark>=90)
    {
        printf("Excelent you have secured A+ grade");
    }
    else if(mark<90 && mark>=85)
    {
        printf("Very Good you have secured A grade");

    }
    else if(mark<85 && mark>=70)
    {
        printf("Good you have secured B+ grade");
    }
     else if(mark<70 && mark>=60)
    {
        printf("you have secured B grade");
    }
     else if(mark<60 && mark>=50)
    {
        printf("you have secured C+ grade");
    }
    else if(mark<50 && mark>=40)
    {
        printf("you have secured C grade");
    }
    else if(mark<40 && mark>=35)
    {
        printf("you have secured D grade");
    }
    else if(mark<35)
    {
        printf("Sorry you have fail");
    }
    return 0;
    
    
    
    
}