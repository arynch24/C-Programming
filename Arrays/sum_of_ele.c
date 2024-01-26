//sum of elements in an array.
#include<stdio.h>
int main()
{
    int sum=0;
    int arr[]={3,4,5,6,3,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);

}