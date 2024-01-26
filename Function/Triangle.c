#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,area, s, peri;
    printf("Enter the sides of a triangle:");
    scanf("%f %f %f",&a,&b,&c);
    peri=a+b+c;
    s=0.5*(a+b+c);
    area=s*(s-a)*(s-b)*(s-c);
    float z=sqrt(area);
    printf("The area of the triangle is %.2f units.\n",z);
    printf("The perimeter of the triangle is %.2f units.",peri);
    return 0;
}