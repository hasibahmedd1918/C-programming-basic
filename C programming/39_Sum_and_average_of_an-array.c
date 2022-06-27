//Sum and Average of an Array
#include<stdio.h>
int main()
{
    int i,sum=0,num[5];
    float average;
     printf("Enter the vaule: \n");
    for(i=0;i<5;i++)
    {
       
        scanf("%d",&num[i]);
    }

   for ( i = 0; i < 5; i++)
   {
    sum=sum + num[i];
   }
   printf("The result of sum: %d \n",sum);
   printf("The average result is %.2f \n",(float)sum/5);
   
   return 0;
}