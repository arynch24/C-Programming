#include <stdio.h>
void main()
{
    int a[5]={0,1,9,2,3},max=a[0];
    printf("Max no. in array is:");
    for(int i=0;i<=4;i++)
    {
        if (max<a[i])
       max=a[i];
    }
    printf("%d",max);
}