#include <stdio.h>

void fun(int n){
    if(n>0)
    {
        printf("%d\n", n);
        fun(n-1);  // This is a tail recursive call because it is the last operation in the function.
    }
}
int main(){
    fun(3);
    return 0;
}
// time complexity --> O(n).
// space complexity --> O(n) because it uses the call stack for each function call.


/*Notes-->
Tail recursion is a recursion type where the last statement is a recursive call.
A more efficient way to write tail recursion is to use a while loop.*/

// while loop version of the above tail recursion function.
void fun(int n){
    while(n>0)
    {
        printf("%d\n", n);
        n--;
    }
} // its more efficient because it doesn't use the call stack and avoids the overhead of function calls.
// time complexity --> O(n).
// space complexity --> O(1) because it uses constant space.