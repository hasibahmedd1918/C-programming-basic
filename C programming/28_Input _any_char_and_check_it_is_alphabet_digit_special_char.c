// input any character and check whether
// it is alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any character number: \n");
        scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A'&&ch<='Z')
    {
        printf("This is alphabet %c \n",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("This is digit %c \n",ch);
    }
    else
    {
        printf("This is special character %c\n",ch);
    }
    return 0;
}