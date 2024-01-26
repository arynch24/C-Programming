#include<stdio.h>
#include <math.h>
int fact(int a)
{
    int f=1;
    for (int i=1;i<=a;i++)
    {f*=i;}
    return f;
}
int ncr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
void main()
{
    int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);
    int ans=ncr(n,r);
    printf("Answer:%d",ans);
    
}