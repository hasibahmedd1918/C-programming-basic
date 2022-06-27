//Fahrenheit_to_Centigrade14
#include<stdio.h>
int main()
{
    float fahrenheit,centigrade;
    printf("Enter the fahrenheit: \n");
    scanf("%f",&fahrenheit);
    centigrade=(fahrenheit-32)/1.8;
    printf("centigrade is: %.2f\n",centigrade);
    return 0;
}