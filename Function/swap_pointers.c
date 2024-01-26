//pass by reference.

#include<stdio.h>
void swap(int* x, int* y)
{
    int temp= *x;
    *x= *y;
    *y= temp;

}
void main()
{
    int x,y;
    printf("Enter x:");
    scanf("%d",&x); 
    printf("Enter y:");
    scanf("%d",&y);
    printf("%d %d \n",x,y);

    swap(&x,&y);
    printf("%d %d \n",x,y);
}