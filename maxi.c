#include <stdio.h>
// purpose: given three ints, print the max defining our own function
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
    
    
    
}
int maxiumum(int x, int y, int z){
  int  max= x;
    if (y<max){
        y=max;
        
    }
    if (z<max){
        z = max;
        
    }
    return max;
}