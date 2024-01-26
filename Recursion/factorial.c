#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number n:");
    scanf("%d", &n);

    if (n < 0)
        printf("The number is not a non-negative number.");
    else
    {
        int fact(int);
        int ans = fact(n);
        printf("Factorial of %d is %d.", n, ans);
    }
}
int fact(int f)
{
    if (f == 1 || f == 0)
        return 1;
    else
        return f * fact(f - 1);
}
// The main difference between Recursion and Iteration is that recursion involves a function calling itself
//  while iteration involves a loop repeating instructions until a certain condition is met