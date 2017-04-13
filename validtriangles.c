//program that takes in three numbers and determines if it's a valid triangle
//Author: Joshua Steier
//Date: 4/13/2017
#include <stdio.h>
//need to make a type called bool
typedef int bool;
#define true 1
//so if true, it will print 1
#define false 0
//if false prints 0
//declare my function
bool is_valid(int a, int b, int c);
int main(void){
    

    //let's declare variables and prompt input
    int a;
    int b;
    int c;
    printf("Please enter in a value for a: ");
    scanf("%d", &a);
    printf("Please enter in a value for b: ");
    scanf("%d", &b);
    printf("Please enter in a value for c: ");
    scanf("%d", &c);
   printf("%d\n", is_valid(a, b, c));
    
    
    
    
    
    
}
//let's make the function
bool is_valid(int a, int b, int c){
    if (a + b > c){
       return true;
    }
    if(c + a > b){
        return true;
    }
    if(b + c > a){
        return true;}
    else{
        return false;
    }
    
    
    
    
}