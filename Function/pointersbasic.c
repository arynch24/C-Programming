#include <stdio.h>
void main()
{
    printf("\n");
    int x = 10;
    int* z = &x; //&x stores address of x
    //int* --> int ka address store karta hai.

    printf("%p\n", x);//x ka address.
    printf("%p\n", &z);// z ka address.
    printf("%d\n", *z); // *z me jo address hai uski  value.
    printf("%p\n", *z);// %p return address.
    
    //* is an dereference operator/ star operator
    printf("\n \n");
    *z  = 20;
    printf("%d",x);

 

    printf("\n \n");
}