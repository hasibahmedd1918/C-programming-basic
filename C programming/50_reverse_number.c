//Problem 7:
/*Write a C program to enter a number and print its reverse.*/
#include<stdio.h>
int main()
{
    int num,reverse=0,r;
    printf("Enter number: \n");
    scanf("%d",&num);
    while (num!=0)
    {
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;
    }
    printf("Reversed number is %d",reverse);
    return 0;
    
}