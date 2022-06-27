
//switch case basic
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: \n ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    {
        printf("hi");
    }
        break;
    case 2 :
    {
        printf("Hello");
    }
break;
    
    default:
    {
        printf("Error");
    }
        break;
    }
}