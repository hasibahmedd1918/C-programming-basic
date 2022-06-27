//problem 8:
/*Write a C program to find all factors of a number*/
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("\nThe factor number is %d\n",num);
    for ( i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}