#include <stdio.h>
#include <limits.h>
void main()
{
    int arr[3][3] = {1, 3, 10, 75, 6, 7, 60, 4, 3};
    int mx = arr[0][0];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (mx < arr[i][j])
                mx = arr[i][j];
        }
    }
    printf("%d \n", mx);

    // for min
    
    int mn = arr[0][0];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (mn > arr[i][j])
                mn = arr[i][j];
        }
    }
    printf("%d", mn);
}


