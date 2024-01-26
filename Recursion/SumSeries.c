#include <stdio.h>
#include <math.h>
int SumSeries(int a,int n)
{
    if (n==0)
    return 1;
    else 
    return pow(a,n)+SumSeries(a,n-1);
}
int main()
{
    int a, n;
    printf("Enter the values of a and n:");
    scanf("%d %d",&a,&n);
    printf("The sum of the series is %d.",SumSeries(a,n));

    
}