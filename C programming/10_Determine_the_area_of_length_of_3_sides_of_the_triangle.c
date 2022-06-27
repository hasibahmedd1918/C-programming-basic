//determine_the_area_of_length_of_3_sides_of_the_triangle
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter three number of triagle: \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle: %.2lf",area);
    return 0;
}