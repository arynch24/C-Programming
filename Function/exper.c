
#include<stdio.h>

int change(int x)//change in parameter won't affect actual arguments i.e. x;
{
   x=x+10;
   printf("%d",x);
   return x;
   
}
void main()
{
    int x=10;
    printf("%d",x);
    change(x);
    printf("%d",x);

    // int z =change(x);
    // printf("%d",z);


}