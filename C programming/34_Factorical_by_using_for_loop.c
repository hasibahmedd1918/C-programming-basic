//factorial by using for loop
#include<stdio.h>
int main()
{
    int x,num,fact=1;
    printf("Enter the number: \n");
    scanf("%d",&num);
    for(x=1;x<=num;x++)
    {
     fact=fact*x;
    }
     printf("The result is %d \n",fact);
    
    return 0;

}