#include<stdio.h>

void main()
{
    
    char i;
    for(;;){
        printf("Enter character.");
     i=getchar();
    if (i>=65&&i<=90)
    {
        i+=32;
        break;
    }
    else{
    i=i-32;
    break;
    }
    }
    
    putchar(i);

}