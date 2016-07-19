//Implementation of distance formula for three variables, I'll follow a step by step process
//purpose: to compute distance formula for three variables
//1). Problem: Want to compute distance for three variables
//2). Analysis: The distance formula requires 6 variables in total: because the formula is:
// sqrt((x2-x1)^2 + (y2-y1)^2 + (z2-z1)^2)
// design: create the variables then utlizie the arithmetic expression
//author: Joshua Steier, 7/19/2016, 11:12 AM
#include <stdio.h>
#include <math.h>
int main(void){
    //declare variables
    double x2;
    double x1;
    double y2;
    double y1;
    double z2;
    double z1;
    double distance;
    //ask for input for each
    printf("Please enter in a value for x2: ");
    scanf("%lf", &x2);
    printf("Please enter in a value for x1: ");
    scanf("%lf", &x1);
    printf("Please enter in a value for y2: ");
    scanf("%lf", &y2);
    printf("Please enter in a value for y1: ");
    scanf("%lf", &y1);
    printf("Please enter in a value for z2: ");
    scanf("%lf", &z2);
    printf("Please enter in a  value for z1: ");
    scanf("%lf", &z1);
    //arithmetic expression
    distance= sqrt(pow((x2-x1), 2) + pow((y2-y1), 2) + pow((z2-z1), 2));
    
//print out the distance
     printf("The distance is %f\n", distance);
    //if x2 = 3, x1= 1, y2= 3, y1= 1, z2= 3, z1= 1, the answer is sqrt(12) or 3.464102
    
}