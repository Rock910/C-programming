//This program is an implementation of a heat transfer equation
//purpose: to compute the heat transfer in a metal rod
//Author: Joshua Steier, 7/18/2016, 6:18 pm
//the heat equation is: q= ((ka(T1-T2)))/(L)
#include <stdio.h>
int main (void){
    // begin declaring the variables we need
    double k;
    double a;
    double q;
    double t1;
    double t2;
    double l;
    //now let's ask for these inputs
    printf("Please enter in a value for k:  ");
    scanf("%lf", &k);
    printf("Please enter in a value for a: ");
    scanf("%lf", &a);
    
    printf("Please enter in a value for t1: ");
    scanf("%lf", &t1);
    printf("Please enter in a value for t2:  ");
    scanf("%lf", &t2);
    printf("Please enter in a value for l: ");
    scanf("%lf", &l);
    //now we'll implement the arithmetic expression
    q= ((k * a) * (t1-t2))/(l);
    printf("Q is %f\n", q);
    
    
    
}