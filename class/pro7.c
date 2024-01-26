//WAP which provide max and min value amoung 4 integer type variable scan using function
#include <stdio.h>
void main()

{
	int a,b,c,d;
	printf("Enter the no. 1:");
	scanf("%d",&a);
	printf("Enter the no. 2:");
	scanf("%d",&b);
	printf("Enter the no. 3:");
	scanf("%d",&c);
	printf("Enter the no. 4:");
	scanf("%d",&d);
	if (a>b||a>c||a>d)
	{
		printf("Max no is:%d",a);
	}
	else if (b>a||b>c||b>d)
	{
		printf("Max no is:%d",b);
	}	
	else if (c>b||c>a||c>d)
	{
		printf("Max no is:%d",c);
	}	
	else if (d>a||d>b||d>c)
	{
		printf("Max no is:%d",d);
	}	
}