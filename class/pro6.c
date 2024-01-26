//WAP 211+311+......n n<1000
#include <stdio.h>
void main()
{
int n,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);

if (n<100)
{
	for(int i=11; i<=n; i+=11)
	{
		sum+=i;
	}
}
}
	
