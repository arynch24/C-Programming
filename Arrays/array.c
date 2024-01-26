#include<stdio.h>
int main()
{
    printf("Enter 5 numbers:");
    int n[5];
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&n[i]); //input;
    }
    for(int i=0;i<=4;i++)
    {
        printf("%d \n",n[i]); // output;
    }
    printf("%d",sizeof(n));
}