#include<stdio.h>
void main()
{
   int  arr[4][2]={11,24,12,20,13,27,14,29};
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d "  ,arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Transpose

    int  arr_t[2][4]={11,24,12,20,13,27,14,29};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%d "  ,arr_t[i][j]);
        }
        printf("\n");
    }
}


