// to find the second largest element in the array.

#include <stdio.h>
#include <limits.h>

int main(){
   int arr[] = {5,7,6,2,8,9,3,4};
   int len = sizeof(arr) / sizeof(arr[0]);
   int i, j;
   int max = INT_MIN;
   int smax = INT_MIN;

   for(i=0; i<len; i++){
      if(arr[i] > max){
        smax = max;
        max = arr[i];
      }else if(arr[i] > smax){ 
           smax = arr[i];
      }
    }
      printf("Second Largest element in the array = %d\n", smax);
}
