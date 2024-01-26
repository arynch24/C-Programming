#include <stdio.h>
void main()
{
    int a[10],i,ctr;
    printf("Enter the 10 numbers:\n");
    for (i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=10;i++)
    {
        ctr=1;
        for (int j=0;j<=10+1;j++)
        {
            if (i!=j)
            {
                if(a[i]==a[j])
                ctr++;
            }
        }

    }
    if(ctr==1)
    {
        printf ("%d",a[i]);
    }
}

