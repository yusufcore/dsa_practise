#include <stdio.h>
// Declarations of arrays.
int main(){
    int A[5];
    // int B[5]= {1, 2, 4, 5, 6};
    // int C[10]= {2, 4, 6};
    // int D[5]= {0};
    // int E[]= {1, 2, 3, 4, 5, 6};

    for(int i=0; i<5; i++){
        printf("%p\n",(void *)&A[i]);  // standard way to print memory addresses.
    }

    return 0;
}