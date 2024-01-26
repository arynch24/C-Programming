#include<stdio.h>
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(int k=0;k<n;k++)
    {
        printf("%d \n",arr[k]*arr[k]);
    }

}