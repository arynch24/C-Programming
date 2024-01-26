#include <stdio.h>
void main()
{
    int len,count;
    char a[1000];
    printf("Enter a string:");
    gets(a);
    len=strlen(a);
    for (int i=0;i<len;i++)
    {
        if (a[i]==32)
        count++;
    }
    printf("No of spaces %d",count);
}