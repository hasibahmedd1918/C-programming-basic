//largest_number_of_Three_numbers
#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("Enter Three number; \n");
    scanf("%d%d%d",&number1,&number2,&number3);
    if(number1>number2&&number1>number3)
    {
        printf("Number1 is large %d",number1);
    }
    else if(number2>number1&&number2>number3)
    {
        printf("Number2 is large %d",number2);
    }
    else if(number3>number1&&number3>number2)
    {
        printf("Number3 is large %d",number3);
    }
    else
    {
        printf("The number is equal");
    }
   
    return 0;
}