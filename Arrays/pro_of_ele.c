#include<stdio.h>
void main()
{
    int arr[5]={3,4,5,6,2};
    int pro =1;
    for(int i=0;i<=4;i++)
    {
        pro*=arr[i];
    }
    printf("%d",pro);
}