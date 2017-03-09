//bubble sort algorithm using pointers
//author: Joshua Steier
//3/9/2017
#include <stdio.h>
#define SIZE 10
//define the function
void bubbleSort(int * const array, size_t size);
int main (void){
    int a[SIZE]= {10, 2, 6, 8, 10, 12, 14, 16, 18, 20};
    size_t i;
    puts("Data items are in original order: ");
    //loop through the array
    for(i = 0; i < SIZE; ++i){
        printf("%4d", a[i]);
        
    }
    bubbleSort(a, SIZE);
    puts("\nData items in ascending order");
    //loop through the array a
    for (i= 0; i< SIZE; ++i)
    {
        printf("%4d", a[i]);
        
    }
    puts("");
    
}
//now to write the function bubble sort
void bubbleSort(int * const array, size_t size){
    void swap(int *element1Ptr, int *element2Ptr);
    unsigned int pass;
    size_t j;
    for(pass = 0; pass<size-1; ++pass){
        for(j= 0; j<size - 1; ++j){
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
            }
        }
        
    }
}
    void swap(int *element1Ptr, int *element2Ptr){
        int hold = *element1Ptr;
        *element1Ptr = *element2Ptr;
        *element2Ptr = hold;
        
    }
