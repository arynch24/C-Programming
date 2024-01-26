#include<stdio.h>
#include<string.h>
void main()
{
    typedef struct book
    {
        char name[100];
        float price;
        int page;
    } book;

    book novel;
    strcpy(novel.name,"harry potter");
    novel.price=530.3;
    novel.page=400;
    

    printf("%s \n",novel.name);
    printf("%f \n",novel.price);
    printf("%d \n",novel.page);
    
}