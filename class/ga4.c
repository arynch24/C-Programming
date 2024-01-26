/*age - 21-27
height 157-195cm
weight 57-86 */

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter your age:");
    scanf("%d",&a);
    printf("Enter your height(in cm):");
    scanf("%d",&b);
    printf("Enter your weight(in kg):");
    scanf("%d",&c);

    if (((a>21)&&(a<27))&&((b>157)&&(b<195))&&((c>57)&&(c<86)))
    {printf("Congratulations Soldier! You are selected.\nWelcome to the Team");}
    else
    printf("Sorry , But you are no more alive");
    
}
