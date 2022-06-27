#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age: \n");
    scanf("%d",&age);
    if(age<=2)
    {
        printf("This person is infant");
    }
    else if(age<=10)
    {
        printf("This person is child");
    }
    else if(age<=20)
    {
        printf("This person is teenage");
    }
    else if(age<=30)
    {
        printf("This person is adult");
    }
    else if(age>=30)
    {
        printf("This person is old");
    }
    return 0;
}