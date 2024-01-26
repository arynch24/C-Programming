//pass by values
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x:");
    scanf("%d",&x); 
    printf("Enter y:");
    scanf("%d",&y);
    printf("%d %d \n",x,y);
    //swap using extraa variable i.e. temp.
    int temp=x;
    x=y;
    y=temp;
    printf("%d %d",x,y);

    // //swap without using third variable
    // x=x+y;
    // y=x-y;
    // x=x-y;
    // printf("%d %d",x,y);
}