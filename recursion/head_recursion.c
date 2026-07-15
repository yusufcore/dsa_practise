#include <stdio.h>

void fun(int n){
    if(n>0){
        fun(n-1); // This is a head recursive call because it is the first operation in the function.
        printf("%d ", n);  
    }
}
int main(){
    fun(3);
    return 0;
}
/*Notes--> 
Head recursion is a recursion type where the first statement is a recursive call.
*/