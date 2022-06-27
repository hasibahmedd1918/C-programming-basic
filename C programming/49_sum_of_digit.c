//Problem 6:
/*Write a C program to calculate sum of digits of a number*/
#include<stdio.h>
int main()
{
    int num,sum=0,r,temp;
    printf("Enter positive number: \n");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("The sum of digit %d",sum);
    return 0;
    
}