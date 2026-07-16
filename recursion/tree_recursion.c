#include <stdio.h>

void fun(int n){
    if(n>0)
    {
        printf("%d ", n);
        fun(n-1);   // first recursive call.
        fun(n-1);   // second recursive call.
    }
}
int main(){
    fun(3);
    return 0;
}

/*Notes--> 
Tree recursion is a type of recursion where the function is called more than once in its body.

Properties:
- Each call creates its own stack frame.
- Forms a binary recursion tree.
- Total function calls = 2^(n+1) - 1.
- Time complexity = O(2^n).
- Space complexity = O(n) (max recursive depth thats 4 in this one.).*/