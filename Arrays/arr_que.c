//odd indexed value--> 2x and even index value--> x+10
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of array_elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array_elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        printf("%d ",arr[i]+10);
        else
        printf("%d ",2*arr[i]);
    }

    return 0;
}