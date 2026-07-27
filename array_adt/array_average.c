#include <stdio.h>
#include <stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){   // displaying the array
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d ", arr.A[i]);
    }
}

void append(struct Array *arr, int x){    // inserts the element to the last of the array.
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}
void insert(struct Array *arr, int index, int x){   // shifting and inserting
    if(index>=0 && index <=arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i]= arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
int delete(struct Array *arr, int index){         // deleting an element on a given index.
    int x = 0;

    if(index>=0 && index<arr->length){
        x = arr->A[index];
        for(int i = index; i < arr->length - 1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length -- ;
        return x;
    }
    return 0;
}
void swap(int *x, int *y){    // used for improving linear search.
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linearsearch(struct Array *arr, int key){    // linear searching.
    int i;
    for(i = 0; i < arr->length; i++){
        if(key == arr->A[i]){
            swap(&arr->A[i], &arr->A[i-1]);    // transposition.
            return i;
        }
    } return -1;
}
int binarysearch(struct Array *arr, int low, int high, int key){      // Binary Search
    while(low <= high){
        int mid = (low+high)/2 ;
        if(key == arr->A[mid]){
           return mid;
        }else if(key < arr->A[mid]){
           high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}
int get(struct Array *arr, int index){     
    if(index>=0 && index < arr->length){
        return arr->A[index];
    }
}
int set(struct Array *arr, int index, int x){   // to change the element at the given index with x;
    if(index>=0 && index < arr->length){
        arr->A[index] = x;
    }
}
int max(struct Array *arr){
    int max = arr->A[0];
    for(int i=1; i<arr->length; i++){
        if(arr->A[i] > max){
            max = arr->A[i];
        }
    }
    return max;
}
int min(struct Array *arr){     // to find the smallest elemnt inside the current array.
    int min = arr->A[0];
    for(int i=1; i<arr->length; i++){
        if(arr->A[i] < min){
            min = arr->A[i];
        }
    }
    return min;
}
int sum(struct Array *arr){    // to find the sum of all the elemnts inside th array.
    int total = 0;
    for(int i = 0; i < arr->length; i++){
        total = total + arr->A[i];
    }
    return total;
}
double average(struct Array *arr){   // to find the average of all the elemnts inside the array.
    int total = 0;
    for(int i = 0; i < arr->length; i++){
        total = total + arr->A[i];
    }
    return (double)total / arr->length;
}

int main(){ 
    
    struct Array arr = {{2,3,9,1,6}, 10, 5};   // 10 is size of array, and 5 are the total elements contained in array(length).
    double m = average(&arr);
    printf("Average of all element inside the array is = %lf\n", m);
    return 0;
}