#include<stdio.h>
void change(int x[]) //pass by reference
{
    x[2]=4;
}
int main()
{
    int arr[5]={1,2,3,5,6};
    printf("%d\n",arr[2]);
    change(arr);
    printf("%d",arr[2]);
    return 0;
}