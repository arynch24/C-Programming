#include <stdio.h>
void main()
{
    int  arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int sum=0;
    int l1=0,r1=1,l2=3,r2=3;

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i=l1;i<l2;i++)
    {
        for (int j=r1;j<r2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i=l1;i<l2;i++)
    {
        for (int j=r1;j<r2;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
}