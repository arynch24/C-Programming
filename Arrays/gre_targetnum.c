// odd indexed value--> 2x and even index value--> x+10
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of array_elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array_elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int t;
    printf("Enter the target number:");
    scanf("%d", &t);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > t)
            printf("%d ", arr[i]);
    }

    return 0;
}