#include <stdio.h>

unsigned long long int factorial(unsigned int number);
int main(void){
    unsigned int i;
    for(i = 0; i<=21; i++){
        printf("%u! = %11llu\n", i, factorial(i));
        
        
    }
    
    
    
}
unsigned long long int factorial(unsigned int number){
// do the base case: when given 0
if (number <= 1){
    return 1;
    
}
    else {
        return (number * factorial(number -1 ));
        
    }
}