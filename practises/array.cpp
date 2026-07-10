#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int A[10] = {2, 4, 6, 8, 10};
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;
    
    for(int i=0; i<10; i++){   // displays the elements of the array
        cout<<A[i]<<endl;
    }
    // cout<<sizeof(A)<<endl;
    // cout<<A[8]<<endl;
    // printf("%d\n", A[8]);

    return 0;
}
