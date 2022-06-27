//prime number for loop use
#include<stdio.h>
int main()
{
    int x,num,count=0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    for ( x = 2 ; x  < num; x++)
    {
        if (num%x==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("This is not prime number");
    }
    else
    {
        printf("This is  prime number");
    }
    return 0;
}
    
