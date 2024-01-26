#include <stdio.h>
void main()
{
    int a,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(a=2;a<=n;a+=2)
    {
        printf("%d+",a);
    sum+=a;
    }
    printf("\n%d",sum);
    
}