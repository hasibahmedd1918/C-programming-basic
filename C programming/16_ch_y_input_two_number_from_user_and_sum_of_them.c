//If ch==y input two number from user and sum of them
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: \n");
    scanf("%c",&ch);
    if(ch=='y')
    {
        int a,b,sum;
        printf("Enter Two intiger number: \n");
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("Sum is %d\n",sum);
          }
          else
          {
              printf("Please try agian \n");
          }
    return 0;
}