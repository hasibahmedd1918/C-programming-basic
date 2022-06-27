//Problem 5:
/*Write a C program to check whether a given number is an armstrong number or not*/
#include<stdio.h>
int main()
{
    int x,y,num,sum=0;
    printf("Enter positive number: ");
    scanf("%d",&num);
    x=num;
    while (x>0)
    {
        y=x%10;
        sum=sum+y*y*y;
        x=x/10;
    }
    if (sum==num)
    {
        printf("It is an armstrong number %d",num);
    }
    else{
    printf("It is not an armstrong number %d",num);
    }
    return 0;
}