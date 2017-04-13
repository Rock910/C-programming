//Program that computes the hypotenuse for a right traingle, function
//Input: two floats, a and b
//Output: a float, hypotenuse
#include <stdio.h>
#include <math.h>
double hypotenuse(double a, double b);
int main(void){
    //declare variables
    float a;
    float b;
    
    //prompt the user for input
    printf("Enter in a value for a: ");
    scanf("%f", &a);
    printf("Enter in a value for b: ");
    scanf("%f", &b);
   printf("The hypotenuse squared is %f\n", hypotenuse(a,b));
    
    
    
}
double hypotenuse(double a, double b){
    return pow(a, 2) + pow(b,2);
}