//three students have taken a quiz find the avg score of the marks scored also justify who is greater with the result among these three stu
#include <stdio.h>
int main()
{int a,b,c;
printf("Enter marks of stu1:");
scanf("%d",&a);
printf("Enter marks of stu2:");
scanf("%d",&b);
printf("Enter marks of stu3:");
scanf("%d",&c);
int avg=(a+b+c)/3;
if ((a<=20)&&(b<=20)&&(c<=20))
{printf("Avg Marks:%d",avg);	}
else
{printf("invalid input");}
if((a==b)&&(b==c)&&(a==c))
{printf("\nall scores are equal");}
if(a>b && a>c)
{printf("\nStu1 marks is highest");}
if(b>a && b>c)
{printf("\nStu2 marks is highest");}
if(c>b && c>a)
{printf("\nStu3 marks is highest");}
if(a==b && a!=c)
{printf("\nStu1 and Stu2 have scored equal marks");}
if(a==c && a!=b)
{printf("\nStu1 and Stu3 have scored equal marks");}
if(b==c && b!=a)
{printf("\nStu2 and Stu3 have scored equal0 marks");}}