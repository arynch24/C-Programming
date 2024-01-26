#include<stdio.h>
num(int n)
{
    if (n==0)
    return 1;
    else
    printf("%d \n",n);
    return num(n-1);

}
void main()
{
    int n;
    printf("Enter a number n:");
    scanf("%d",&n);
    num(n);
}