#include<stdio.h>
int main()
{

    int arr[4];
    printf("Enter the elements of the 2 x 2 matrix");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Input matrix \n");
    for (int i=0;i<2;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=2;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Odd elements \n");
    for (int i=0;i<4;i++)
    {
        if(arr[i]%2!=0)
        {printf("%d \n",arr[i]);}
    }
}