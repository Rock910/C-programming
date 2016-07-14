#include <stdio.h>
//num-> num
// purpose: given three ints, print the max defining our own function
// first step: delcare prototype
//prototype
int maxiumum(int x, int y, int z);
int main (void){
    int a;
    int b;
    int c;
    printf("Enter in value for a: ");
    scanf("%d", &a);
    printf("Enter in a value for b: ");
    scanf("%d", &b);
    printf("Enter in value for c: ");
    scanf("%d", &c);
    printf("The maxiumum is %d", maxiumum(a,b,c));
    //second step: actually make the function
    
    
}
int maxiumum(int x, int y, int z){
  int  max= x;
    if (y<max){
        y=max;
        
    }
    if (z<max){
        z = max;
        //be sure to use return, otherwise there will be no output
    }
    return max;
}
