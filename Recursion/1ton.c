#include<stdio.h>
int f(int n)
{
    if (n<=9)
    return n;
    
    return (n%10)+f(n/10);
}
int main()
{
    int n;
    printf("Enter a number n:");
    scanf("%d",&n);
    int z=f(n);
    printf("%d",z);
}