#include <stdio.h>
#include <cs50.h>
//program: this program will function as a sum, so if one enters an integer, 3, it will compute 1 + 2 + 3= 6
//program needs to make sure number is positive
//Program will take in an int as input and produce an int as output.
//Author: Joshua Steier, 7/27/2016, 7:50 pm, although some of the code comes from CS50, it is improved by my adjustments.
//prototype so the compiler knows a function will be declared later.
int summation(int n);
int main(void){
    int m;
    //prompt user for int as input
    printf("Please enter in an integer: ");
    m= GetInt(); //use scanf if not using the cs50 library
    int answer= summation(m);
    //print out the answer
    printf("The sum is %i\n", answer);
    
    
}
int summation(int n){
    //declare variables needed
    int sum;
    int i;
    sum= 0;
    
    //account for the case where user gives a negative or zero as a number.
    if(n <= 0){
        //return 0 if 0 or negative.
        return 0;
    }
    else{
        
        for(i= 1; i<= n; i++){
            sum = i + sum;
            
        }
        //return the sum
        return sum;
    }
    
}