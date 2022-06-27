//Grade
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: \n");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("Your grade is A+ ");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("Your grade is A ");
    }
    else if (marks>=60&&marks<=69)
    {
        printf("Your grade is A-");
    }
    else if(marks>=50&&marks<=59)
    {
        printf("Your grade is B ");
    }
    else if(marks>=40&&marks<=49)
    {
        printf("Your grade is B-");
    }
    else if (marks>30&&marks<=39)
    {
        printf("Your grade is c ");
    }
    else 
    {
        printf(" Your grade is F ");
    }
    return 0;
}