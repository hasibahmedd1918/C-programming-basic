//x_raised_to_the_power_y_(x^y)
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,result;
    printf("Enter two number for x raised to the power y (x^y): \n");
    scanf("%lf%lf",&x,&y);
    result=pow(x,y);
    printf("The result is %.2lf\n",result);
    return 0;
}