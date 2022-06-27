//maximum number from an array
#include<stdio.h>
int main()
{
    int a[5]={-5,-1.5,100,2};
    int max=a[0],i;
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
  printf("Max vaule is: %d\n",max);
  return 0;
}