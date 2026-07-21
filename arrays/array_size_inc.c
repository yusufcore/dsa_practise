// increasing size of the array
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;  // pointer for old array.
    int *q;  // pointer for new larger array.
    p = (int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;
    q = (int *)malloc(10*sizeof(int));  // array of larger size.

    for(int i=0;i<5;i++){
        q[i] = p[i];    // copying the elements of p in q;
    }
    free(p);  
    p = q;  // pointer p now points to the new array.
    q = NULL;  
    
    for(int i=0; i<5; i++){
        printf("%d \n", p[i]);  // displaying all the elements of the new array.;
    }
    free(p);
    p = NULL;
}