#include <stdio.h>
void main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    for (int i=2;i<=x;i++)
    {
        if ((i%2==0) && (x%i==0))
        printf("%d is a composite number.",x);
        else
        printf("%d is a prime number.",x);
    }

}