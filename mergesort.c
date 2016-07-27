//Merge Sort: runs faster than most other sorting algorithms including bubble sort and selection sort. O(n log n)
//purpose: to create and design an implementation of mergesort 
//merge sort works the following way: 1). split the array of numbers into two lists, and 2). sort each individual list, and 3). merge them together
#include <stdio.h>
#define max 10
//we could also just use 10 in the place of max but this is for readability
//declare the array of numbers we want any will do, this has size 10
int a[10] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44 };
int b[10];
//we would expect the list to be sorted as: 10, 14, 19, 26, 27, 31, 33, 35, 42, 44
//call the function merging, takes in three ints, low, mid, high

void merge(int low, int mid, int high) {
   int l1, l2, i;
//for loop to iterate over all elements in the array
   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}
//call a function called sort
void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merge(low, mid, high);
   }else { 
      return;
   }   
}

int main() { 
   int i;

  
   

   printf("\nArray of numbers after sorting process\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}// analysis: so essentially I created two functions, a merge and a sort to implement mergesort, merging the two split lists of numbers together and thens orting them
//credit for this program goes to tutorialpoint, I have just adjusted some of the program.