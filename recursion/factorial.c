#include <stdio.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return factorial(n-1) * n;
}
int iterative_factorial(int n)   // iterative version to calculate factorial of a number.
{
    int f = 1;
    int i;
    for(i=1; i<=n; i++){
        f = f * i;
    }
    return f;
}
int main()
{
    int r;
    r = iterative_factorial(5);
    printf("Result is: %d\n", r);
    return 0;
}