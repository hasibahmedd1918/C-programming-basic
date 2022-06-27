//Problem 1:
/*Write a program in C to read 10 numbers from keyboard and find their sum and average.*/
#include<stdio.h>
int main()
{
  int i,num,sum=0;
  float average;
  printf("Enter 10 number: \n");
  for ( i = 1; i <= 10; i++)
  {
    scanf("%d",&num);
    sum=sum+num;
  }
  average=sum/10;
  printf("The result of sum is= %d\n",sum);
  printf("The average of sum is %.2f\n",average);
  return 0;
}