//wap to scan 5 var and as a result only print the odd numbers

#include<stdio.h>
void main()
{
    int i,a[5];
    printf("Enter any element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
       
    }
 
    for(int i=0;i<=4;i++)
    {
        if(a[i]%2!=0)
        printf("\n %d",a[i]);
    }
}

