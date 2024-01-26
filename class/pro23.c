#include <stdio.h>
#define cir(r) 3.14*r*r
#define sq(a) a*a
#define rec(l,b) l*b
void main()
{
    int radius, side, length , bredth;
    printf("Enter the radius of circle:");
    scanf("%d",&radius);
    printf("Area of circle:%f",cir(radius));

     printf("\nEnter the side of a square:");
    scanf("%d",&side);
    printf("Area of square:%d",sq(side));

    printf("\nEnter the length and breadth of rect:");
    scanf("%d %d",&length,&bredth);
    printf("Area of rectangle:%d",rec(length,bredth));

}