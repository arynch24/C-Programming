#include <stdio.h>
int main()
{int a;
printf("Enter a variable:");
scanf("%d",&a);
if ((a%5==0)&&(a%10==0))
{
printf("%d is div by both 5 & 10",a);}
else
{
printf("%d is not div by both 5 & 10",a);}
}