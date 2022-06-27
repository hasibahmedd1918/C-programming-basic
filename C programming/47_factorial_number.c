// Problem 4:
/*Write a C program to calculate the factorial of a given number*/
#include<stdio.h>
int main()
{
 int i,num,fact=1;
 printf("Enter the number: \n");
 scanf("%d",&num);
 for ( i = 1; i <= num; i++)
 {
  fact=fact*i;
 }
 printf("The factorial number is : %d",fact);
 return  0;
 
}