//Write a C program to check whether
// 
#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number: \n");
    scanf("%d",&number);
    if(number%5==0 && number%11==0)
    {
        printf("The number is divisible by 5 and 11");
    }
    else
    {
        printf("The number is not divisible by 5 and 11");
    }
    return 0;
}