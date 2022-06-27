//C program to determine the area of the rectangle
#include<stdio.h>
int main()
{
    int length,width,rectangle_area;
    printf("Enter length & Width of rectangle: \n");
    scanf("%d%d",&length,&width);
rectangle_area=length*width;
printf("The area of rectangle is: %d",rectangle_area);
return 0;
}