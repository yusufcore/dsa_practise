#include <stdio.h>

void fun(int n){
    if(n>0)
    {
    printf("%d\n", n);
    fun(n-1);
    }
}
int main(){
    fun(3);
    return 0;
}
/*Notes
Recursion is technique where a function calls itself 
It has 2 parts: base case and recursive case ---> 

1) base case:  is the condition under which the function stops calling itself 
2) recursive case:  is the condition under which the function calls itself 

Recursion is traced using a tree structure

Recursion uses a call stack to manage the function calls 

Recursion can lead to stack overflow if the base case is never reached 

Recursion is a memory consuming technique */