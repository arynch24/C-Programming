#include<stdio.h>
void main()
{
    printf("Enter text:");
    char str[10];
    // scanf("%s",str);//here we dont add & before str
    // printf("%s",str);//here scanf consider the space as a break so whole statement doesn't print
    //to avoid this we use gets
    
    gets(str);
    puts(str);
}