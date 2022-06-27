//minimum number from an array
#include<stdio.h>
int main()
{
    int a[5]={-5,-1.5,100,2};
    int minimum=a[0],i;
    for(i=1;i<5;i++)
    {
        if(a[i]<minimum)
        minimum=a[i];
    }
  printf("Minimum vaule is: %d\n",minimum);
  return 0;
}