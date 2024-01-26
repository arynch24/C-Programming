#include<stdio.h>
int a=7;
int change()
{
    int a=5;
    return a;// return for taking value a.
}
void main()
{
    int a =70;
    printf("%d ",a);

    int c=  change();//just like this. line (15)
    printf("%d ",c);

    change(); //in this line value of a=5 but it is not stored in variable so
    printf("%d \n",a);//here it will take the value of main function.
    
}