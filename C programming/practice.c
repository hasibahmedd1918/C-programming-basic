#include<stdio.h>
int main()
{
    int i,n,a[100],sum=0;
    printf("Enter the size of array; \n");
    scanf("%d",&n);
    printf("Enter array emplemnt; \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    printf("The sum of array: %d\n",sum);
    return 0;
    
    
}