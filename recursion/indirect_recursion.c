#include <stdio.h>

void funB(int n);
void funA(int n){
    if(n>0)
    {
        printf("%d ", n);
        funB(n - 1);
    }
}
void funB(int n){
    if(n>1)
    {
        printf("%d ", n);
        funA(n / 2);
    }
}
int main(){
    funA(20);
    return 0;
}
/*Notes ---> 
/*
========================
INDIRECT RECURSION
========================

Definition:
Indirect recursion (or mutual recursion) occurs when two or more
functions call each other recursively instead of calling themselves.

Example:
funA() → funB() → funA() → funB() ...

Properties:
- Involves two or more recursive functions.
- Each function has its own stack frame.
- Requires a proper base case to avoid infinite recursion.
- The call stack alternates between the functions.

Time Complexity:
Depends on how the recursive calls reduce the problem.
(Not always O(n); it depends on the recursion pattern.)

Space Complexity:
O(depth of recursion)

*/