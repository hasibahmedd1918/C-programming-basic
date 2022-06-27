//determine whether the leap year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year: \n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("This year is leap year%d\n",year);
    }
    else
    {
        printf("This year is not a leap year %d",year);
    }
    return 0;
}