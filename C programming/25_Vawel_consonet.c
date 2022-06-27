//vawel,consonent
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character; \n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("This is vawel \n");
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
         printf("This is vawel \n");
    }
    else
    {
        printf("The number is consonent \n");
    }
    return 0;
}