#include <stdio.h>

// Declare the prototype: Purpose; compute the cube of a given x
// num-> num
int cube( int x);
int input, answer;
int main (void){
    printf("Please enter in a value for the integer: \n");
    scanf("%d", &input);
    answer= cube(input);
    printf("The cube of %d is %d\n", input, answer);
    return 0;
    
    
}

// Function declaration: make the function !
int cube(int x){
    int x_cubed;
    x_cubed = x * x * x;
    return x_cubed;
    
    
}