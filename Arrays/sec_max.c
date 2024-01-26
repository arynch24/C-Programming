#include <stdio.h>
#include <limits.h>
void main()
{
    int arr[] = {1, 2, 3, 5, 4, 9, 6, 7, 10};
    int mx = INT_MIN;
    for (int i = 0; i < 9; i++)
    {
        if (mx < arr[i])
            mx = arr[i];
    }
    printf("%d \n", mx);
    int smx= INT_MIN;
    for (int j = 0; j < 9; j++)
    {
        if (smx < arr[j] && arr[j]!=mx)
        {
            smx = arr[j];
        }
    }
    printf("%d", smx);
}