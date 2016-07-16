//average velocity implementation
//Author: Joshua Steier, created: 7/15/2016 at 8:45pm
//num:-> num
//purpose: average velocity implementaiton
//so the formula for average velocity is: (p2-p1)/(t2-t1) I'll declare these as doubles
#include <stdio.h>
int main(void){
//declare variables
double p2;
double p1;
double t2;
double t1;
double velocity;
//now get and read in the doubles
printf("Please enter in a value for p2: ");
scanf("%lf", &p2);
printf("Please enter in a value for p1: ");
scanf("%lf", &p1);
printf("Please enter in a value for t2: ");
scanf("%lf", &t2);
printf("Please enter in a value for t1: ");
scanf("%lf", &t1);
//now to create the arithmetic expression
velocity= (p2-p1)/(t2-t1);
printf("The velocity is %f\n", velocity);
//as an example: we would expect p2: 5, p1: 2 t2: 5 t1: 3 to result in 3/2 or 1.50
}
