//Write a program that inputs a line of text
//into char array s[100]. Output the line in uppercase letters and in lowercase letters.
//Program: This program will convert a string to all uppercase(1) and all lowercase(2)
//input: string-> string
//Author: Joshua Steier, 8/6/2016, 9:54 pm
//Need the following: toupper, tolower ctype.h include string.h
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char s[100];
    int i;
    printf("Please enter in a string: ");
    scanf("%s", s);
    printf("The string originally is: %s\n", s);
    for(i = 0; s[i] != '\0'; i++){
        if(islower(s[i])){
            s[i]= toupper(s[i]);
        }
        else{
            s[i]= s[i];
        }
        
    }
    
    
    printf("All caps is: %s\n", s);
}