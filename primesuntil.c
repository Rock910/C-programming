#include <stdio.h>
//This program will print primes until the number "n" is printed out, to which it will stop. 
//Author: Joshua Steier, 7/16/2016 7:20 pm
int main(void){
    //initialize variables used
    int n;
    int i;
    int count;
    int c;
    //let's let i=3
    i=3;
    // ask for the number of primes you want
    printf("Please enter in the number of primes you want: ");
    //this will be n
    scanf("%d", &n);
    //begin with an if
    if(n >= 1){
        printf("The first %d prime numbers are: \n", n);
        printf("2\n");
        
        
    }
    //now we begin a for loop, much like one in checking primes
    //note that we start at 2, because 1 cannot be prime
    
    for(count = 2; count <= n;){
        //another for loop
        for(c=2; c<= i - 1; c++){
            if( i % c == 0)
                break;
                
            
            
            
        }
        if(c == i){
            printf("%d\n", i);
            count++;
            
        }
        i++;
    }
    
    //as an example if we put our n as 3 it should print out the first 3 primes i.e. 2,3,5
}