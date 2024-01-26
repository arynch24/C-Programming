#include <stdio.h>
#include <stdbool.h>
void main()

{
    int arr[] = {1, 3, 32, 33, 42, 2, 23, 54, 64, 28};
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        printf("Exists !");
    else
        printf("Dosen't Exists !");
}