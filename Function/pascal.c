#include<stdio.h>
#include <math.h>

//below line as a whole is called function prototype.
int fact(int a)// here int is return type , fact is function name and int a is parameter.
{
    int f=1;
    for (int i=1;i<=a;i++)
    {f*=i;}
    return f;
}
int ncr(int n,int r)//here n and r are parameter /formal argument,,
// chnage in parameter will not affect argument.
{
    return fact(n)/(fact(r)*fact(n-r));
}
void main()
{
    int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int x=ncr(i,j);//i and j are arguments   / or actual argument
            printf("%d ",x);
        }
        printf("\n");
    }
}