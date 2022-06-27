//1 to 100 even & odd number by using for loop.
#include<stdio.h>
int main()
{
    int x;
    for(x=1;x<=100;x++)
    if(x%2==0)
    {
        printf("The number is even %d \n",x);
    }
    else if( x%2!=0)
    {
        printf("The number is odd %d \n",x);
    }
    return 0;
}