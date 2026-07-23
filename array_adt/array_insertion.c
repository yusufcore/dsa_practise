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
int main(){ 
   
    struct Array arr = {{2,3,4,5,6}, 10, 5};   // 10 is size of array, and 5 are the total elements contained in array(length).
    insert(&arr, 0, 10);
    display(arr);

    return 0;

}