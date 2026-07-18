#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[5]={2,4,6,8,10};  // static(fixed size) array

    int *p;  // a pointer pointing to the dynamic array in heap memory.
    int i;
    p = (int *)malloc(5 * sizeof(int));  // dynamic array created in heap memory.
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    for(i=0; i<5;i++){
        printf("%d ", A[i]);   // displays the static array.
    }
    printf("\n");

    for(i=0; i<5; i++){  
        printf("%d ", p[i]);   // displays the dynamic array.
    }
    free(p);
    return 0;
}