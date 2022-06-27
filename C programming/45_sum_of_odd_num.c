// Problem 2:
/*Write a program in C to display the n terms of odd natural number and their sum*/
#include<stdio.h>
int main()
{
  int i,n,odd_number,sum=0;
  printf("Input n term of number: \n");
  scanf("%d",&n);
  printf("The odd number are: \n");
  for ( i = 1; i <=n; i++)
  {
    odd_number=2*i-1;
    sum=sum+odd_number;
    printf("%d ",odd_number);
  }
  printf("\nThe sum of  odd number: %d \n",sum);
  return 0;
  
}