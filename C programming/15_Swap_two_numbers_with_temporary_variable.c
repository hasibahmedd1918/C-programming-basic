//swap two numbers with temporary variable
#include<stdio.h>
int main()
{
    int number_1=10,number_2=20;
    int temporary;
    temporary=number_1;
    number_1=number_2;
    number_2=temporary;
    printf("The number 1: %d\n",number_1);
     printf("The number 2: %d\n",number_2);
    return 0;
}