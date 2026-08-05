//reverse a string.
#include <stdio.h>
// Method 1 --> Using the same array.
int main(){
    char arr[] = {"python"};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = len -1;
    int temp;
    while(i < j){    // use swapping method. 
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(i = 0; i < len; i++){
        printf("%c\t", arr[i]);
    }
    printf("\n");

    return 0;
}