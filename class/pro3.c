//WAP which scan int var if the value is div by 2 increment by else decrement by 1
#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
if (a%2==0)
{a=a+1;
printf("%d value",a);
}
else 
{a=a-1;
printf("%d value",a);
}
}