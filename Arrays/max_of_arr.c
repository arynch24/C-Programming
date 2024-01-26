// #include<stdio.h>
// void main()
// {
//     int arr[] ={1,3,10,5,6,7,8,4,3};
//     int mx =arr[0];
//     for (int i=0;i<=7;i++)
//     {
//         if (mx<arr[i])
//         mx=arr[i];
//     }

//     printf("%d",mx);
// }

//-------------------------

#include<stdio.h>
#include<limits.h>
void main()
{
    int arr[] ={1,3,10,5,6,7,8,4,3};
    int mx =INT_MIN;
    for (int i=0;i<=7;i++)
    {
        if (mx<arr[i])
        mx=arr[i];
    }

    printf("%d",mx);
}



