#include <stdio.h>
void main()
{
    int a,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(a=11;a<=n;a+=10)
    {
        printf("%d+",a);
    sum+=a;
    }
    printf("\n%d",sum);
    
}