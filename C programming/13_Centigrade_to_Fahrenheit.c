//Centigrade_to_Fahrenheit13
#include<stdio.h>
int main()
{
    float centigrade,fahrenheit;
    printf("Enter the centigrade: \n");
    scanf("%f",&centigrade);
    fahrenheit=(centigrade*1.8)+32;
    printf("Faherenheit is: %.2f",fahrenheit);
    return 0;
}