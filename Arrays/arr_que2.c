//diff b/w sum of odd indices and even indices
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
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {even+=arr[i];}
        else
        {odd+=arr[i];}
    }
    int k=even -odd;
    printf("%d",k);

    return 0;
}


//-------------------------------------------------------------------

