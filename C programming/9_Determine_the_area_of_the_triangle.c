//determine_the_area_of_the_triangle
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter The base & height: \n");
    scanf("%f%f",&base,&height);
    area=0.5*(base*height);
    printf("The area of this triagle is: %.2f",area);
    return 0;
}