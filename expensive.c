#include <stdio.h>
//this program will take in an array and print out monethly expensies
float expenses[13];
int count;
int main (void){
    for (count = 1; count <13; count++){
        printf("Please enter in a value for monthly payment: \n");
        scanf("%f", &expenses[count]);
        
    }
    // print array contents
    for (count = 1; count < 13; count++){
        printf("Month %d = $%.2f\n", count, expenses[count]);
        
    }
    return 0;
    
}