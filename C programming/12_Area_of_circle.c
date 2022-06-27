//area_of_circle12
#include<stdio.h>
int main()
{
    double redious,area;
    printf("Enter the redious of circle: \n");
    scanf("%lf",&redious);
    area=(3.1416*redious*redious);
    printf("The area of circle is: %.2lf\n",area);
    return 0;
}