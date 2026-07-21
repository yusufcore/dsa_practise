#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int A[3][4] = {{1,2,3,4}, {2,4,5,6}, {1,3,5,7}};  // 2d array created in stack.

    int *B[3];  // arrays of three poiners.
    int **C;   // double pointer in stack;
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    B[0] = (int *)malloc(4 * sizeof(int));   
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    C = (int **)malloc(3 * sizeof(int *));  // array of three pointers.
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*Notes --> 
B pointer is in stack and the arrays are in heap;
C pointer and the arrays both are in heap except the double pointer which is in stack.*/