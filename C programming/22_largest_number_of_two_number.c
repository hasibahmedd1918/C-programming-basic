//The largest number of two numbers
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter two number: \n");
    scanf("%d%d",&number1,&number2);
    if(number1>number2)
    printf("The number is large. %d",number1);
    else if(number1==number2)
    {
        printf("The number is equal.");
    }
    else 
    {
        printf("The number is small.%d",number1,number2);
    }

    return 0;
    
}