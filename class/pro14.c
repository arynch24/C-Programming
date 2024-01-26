#include <stdio.h>
void main()
{
    int a[5]={6,1,9,2,3};
    for(int i=0,j=4;i<=4;i++,j--)
    {
        if (i>=j)
        {
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       
    }
    
}