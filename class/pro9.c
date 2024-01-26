#include <stdio.h>
void main()


{
    int n ,sum=0;

    printf("Enter a number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        sum=(sum*=10)+(n%10);
        n=n/10;
 
    }

    if (temp==sum)
    {
        printf("%d is palindrome", temp);
    }
    else
    printf("%d is not palindrome", temp);
}