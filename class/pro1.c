#include <stdio.h>
int main()
{
char g;
printf("Enter your Gender:");
scanf("%c",&g);

int a;
printf("Enter your age:");
scanf("%d",&a);
if (a>=18)
{
printf("You are eligible for voting");
}
if (g!='M' || g!='F' || g!='T')
{
printf("You have invalid gender");
}
}