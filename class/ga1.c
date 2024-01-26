#include <stdio.h>

void main()
{
	int a;
	printf("Enter your birth year:");
	scanf("%d",& a);
	if ((a%4==0)||((a%4==0)&&(a%400==0)))
	{
		printf("your birth year is leap year");
	}
	else
	{
	printf("your birth year is not a leap year");
	}
}