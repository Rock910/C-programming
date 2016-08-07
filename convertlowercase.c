//Program: Demonstrate the use of tolower from the ctype library
//input: string->string
//Author: Joshua Steier, 8/7/2016, 11:07am
#include <stdio.h>
#include <ctype.h>
int main(void){
    //declare variables
    char s[100];
    int i;
    printf("Please enter in a string: \n");
    scanf("%s", s);
    printf("Your string is: %s\n", s);
    for(i= 0; s[i] != '\0'; i++){
        if(isupper(s[i])){
            s[i]= tolower(s[i]);
        }
        else{
            s[i]= s[i];
        }
        
        
        
    }
    printf("String is now: %s\n", s);
    
    
}