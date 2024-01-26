#include <stdio.h>
void main()
{
    int  a[4][2]={11,24,12,20,13,27,14,29};
    int  b[4][2]={19,6,18,10,17,3,16,1};
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}