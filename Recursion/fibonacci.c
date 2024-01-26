#include <stdio.h>
long fibonacci(long);
void main()

{
int n;
printf("Enter a number:");
scanf("%d",&n);
printf("Fibonacci series:%d",fibonacci(n));
}
long fibonacci(long n)
{
    if(n==0 ||n==1)
    return n;
    else
    return fibonacci(n-1)+fibonacci(n-2);

}