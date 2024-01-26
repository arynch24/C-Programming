#include <stdio.h>
int main()
{

    int arr[7];
    printf("Enter 7 integeres in the range 1 to 5");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[j] == i)
                count++;
            continue;
        }
        printf("Frequency of %d is %d \n", i, count);
        count = 0;
    }
}