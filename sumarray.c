#include <stdio.h>
//purpose: to sum elements of the array
//declare an arry of size 12
int main (void){
    int a[12]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    size_t i;
    int total = 0;
    for (i = 0; i < 12; i ++){
        total += a[i];
    }
    printf("Total array element value is %d\n",total);
    
    
}