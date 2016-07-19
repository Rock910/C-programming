//Create a program that computes the factorial of a given number
//Problem: Want to create a function that will give the factorial of a number
//Analysis: The factorial of 2! is 2 * 1, and the factorial of n is n * (n-1) * (n-2) and so forth
//Design: So this one requires recursion because the n calls itself

#include <stdio.h>
//begin with writing the function
unsigned long long int factorial(unsigned int number);
int main(void){
    //declare vars
    unsigned int i;
    for(i = 0; i<=21; i++){
        printf("%u! = %11llu\n", i, factorial(i));
        
        
    }
    
    
    
}
//create the function
unsigned long long int factorial(unsigned int number){
// do the base case: when given 0
if (number <= 1){
    return 1;
    
}
    else {
        return (number * factorial(number -1 ));
        
    }
}
