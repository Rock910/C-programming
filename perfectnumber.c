//Function that finds if the number given is a perfect number, need to find factors of numbers
//Author: Joshua Steier
//Date: 4/13/2017
#include <stdio.h>

int main(void){

int num;
int b;
printf("Give an integer number: ");
scanf("%d",&num);
          b = perfect(num);
          if(b == num)
          printf("\nThe given number %d is a perfect number",num);
          else
          printf("\nThe given number %d is not a perfect number",num);
        
         
          }
    
    
    

int perfect(int num){
    int a= 1;
    int sum= 0;
    while(a< num){
        if(num % a == 0)
        sum= sum + a;
        a++;
    }
    return(sum);
}
    

    
    

