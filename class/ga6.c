#include <stdio.h>
void main()
{
    int a;
    char b;
    printf("Enter the Booking Price:");
    scanf("%d",&a);

    printf("Enter the Card:");
    scanf(" %c",&b);
    
    if(a==20000 && b =='A')
    printf("You got VVIP seat");

    else if(a==10000 && b=='B')
    printf("You got VIP seat");

    else if(a==5000 && b=='C')
    printf("You got Special Country seat");

    else if(a==2000 && b=='D')
    printf("You got General Country seat");

    else 
    printf("You are not allowed for entering the event");
}