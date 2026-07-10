#include <iostream>
using namespace std;

int main(){
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    cout<<sizeof(A[0])<<endl;
    cout<<A[1]<<endl;

    return 0;
}
// size of int ---> 4 bytes.
// 5 * 4 = 20 bytes(size of array A).