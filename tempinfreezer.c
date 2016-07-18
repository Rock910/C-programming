//This program will estimate the temperature in a freezer, given the number of hours elapsed since a power failure
//need to have the hours as decimal,  2 hours and 30 minutes is 2.5 hours
//purpose: to estimate the temp in a freezer(in Celsius)
//arithmetic expression: T= ((4 * t * t)/(t + 2)) - 20, where T is the temp, t is the number of hours
//author: Joshua Steier, 7/18/2016, 6:53 pm
#include <stdio.h>
int main (void){
    //let's declare the variables as doubles , we need a T and a t
    double T;
    double t;
    //write in the number of hours as decimal: for example 2 hrs and 30 min--> 2.5
    //prompt user for input
    printf("Please enter in a value of hours as decimal: ");
    scanf("%lf", &t);
    //arithemtic expression
    T= ((4 * t * t )/(t + 2)) - 20;
    printf("The temp in the freezer is %f\n", T);
    
    
    
}