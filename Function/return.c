#include <stdio.h>
int min(int x, int y) // formal parameters
{
    // a function may contains two return but if one return is executed than other
    // return will not execute
    if (x > y)
    return x;
    else
    return y;

    // return means finish and give the value (if any) back to calling function here that is m.
}
void main()
{
    int a = 1, b = 2;
    int m = min(a, b); // acual parameters
    printf("Greater number is: %d", m);
}