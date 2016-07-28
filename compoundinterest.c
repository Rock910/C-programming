//Program: compute the annual compound interest, given B as initial sum, R as the interest rate, and N as the number of years
//The program will take two floating point values, B, and R, and one int, N
//Contraints: all must be greater than or equal to zero, let's try to do a function for this one
//need arithmetic expression: A= B(1+ R)^N
//need to use math library pow function.
//Author: Joshua Steier, 7/28/2016 2:30 pm, part of hackathon
#include <stdio.h>
#include <cs50.h>
#include <math.h>
float compoundinterest(float B, float R, int N);
int main(void){
    //declare variables
    float b;
    float r;
    int n;
    float answer;
    //prompt user for input 
    printf("Please enter in a value for B: ");
    b= GetFloat();
    printf("Please enter in a value for R: ");
    r= GetFloat();
    printf("Please enter in a value for N: ");
    n= GetInt();
    answer= compoundinterest(b, r, n);
    printf("The answer is %.2f\n", answer);
    
    
    
    
}
float compoundinterest(float B, float R, int N){
    float interest;
    //account for the cases, each must be greater than zero
    if(B <= 0 || N <= 0 || R <= 0){
        return 0;
    }
    else{
        interest= B * pow((1 + R), N);
        return interest;
    
        
    }
    
}
