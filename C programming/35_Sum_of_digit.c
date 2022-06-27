//The sum of digit
 #include<stdio.h>
 int main()
 {
    int r,num,sum=0,temp;
    printf("Enter the number: \n");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("The sum of digit %d \n",sum,r,temp);
    return 0;
 }