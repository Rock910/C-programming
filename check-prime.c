// A program that will check if a given number is prime
// a number is prime if: greater than 1 and no divisiors expect for self
//so we have to start at 2 and go from there
//author: Joshua Steier, 7/16/2016, 9:12 am
//purpose: to check if a given number is prime
//one way of finding primes has been the Sieve of Erathosenes
//let's start the header
#include <stdio.h>
int main(void){
    //intitialize the variables we need, a and n, where n is the number inputted
    int n;
    int a;
    a=2;
    //I set a to two for the for loop construct- but for now I'm going to ask for a number
    printf("Please enter a number: ");
    scanf("%d", &n);
    //now I should begin the for loop
    // we need where a=2;, a<=n-1; a++, in the for loop and then use an if to check prime
    for(a=2; a<=n-1; a++){
        if( n % a == 0){
            printf("%d is not prime\n", n);
            break;
            //we expect 3 to be prime so let's use that
        }
        
    }
    if (a == n)
    printf("%d is prime\n", n);
    
    // I could use return 0; here but this IDE and most modern compilers don't need it anymore(as it generally is understood to be there)
}