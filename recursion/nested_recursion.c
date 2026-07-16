#include <stdio.h>

int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));  // nested recursion occurs here because fun() is called within itself, and the result of that call is used as an argument for another call to fun().
}
int main()
{
    int r;
    r = fun(95);
    printf("Result is: %d\n", r);
    return 0;
}
/*Notes --> 
/*
========================
NESTED RECURSION
========================

Definition:
A recursive function where the recursive call is passed as an
argument to another recursive call.

Syntax:
fun(fun(n))

Properties:
- A recursive call occurs inside another recursive call.
- More difficult to trace than direct recursion.
- Requires a proper base case to terminate.
- Uses the call stack for every recursive call.

Time Complexity:
Depends on the recursive relation.

Space Complexity:
Depends on the maximum recursion depth.

Example:
McCarthy 91 Function
*/