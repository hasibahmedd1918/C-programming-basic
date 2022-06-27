//Multiplication Table
#include<stdio.h>
int main()
{
    int x,num;
    printf("Enter any number: \n");
    scanf("%d",&num);
    for(x=1;x<=10;x++)
    {
        printf("%d x %d = %d \n",x,num,num*x);
    }
    return 0;
}