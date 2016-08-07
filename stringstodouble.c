//Program: The program will take in four strings and convert them to doubles, then sum the values
//Input: four strings-> double
//Author: Joshua Steier, 8/7/2016, 11:43 am
//1). Take in four strings
//2). Convert to doubles
//3). sum the values
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main (void){
    //declare the strings as arrays
    char a[10];
    char b[10];
    char c[10];
    char d[10];
    //declare doubles needed
    double i;
    double j;
    double k;
    double l;
    double sum;
    //prompt user for input
    printf("Please enter in the first string: \n");
    scanf("%s", a);
    printf("Please enter in the second string: \n");
    scanf("%s", b);
    printf("Please enter in the third string: \n");
    scanf("%s", c);
    printf("Please enter in a fourth string: \n");
    scanf("%s", d);
    //convert to doubles
    i= atof(a);
    j= atof(b);
    k= atof(c);
    l= atof(d);
    sum = i + j + k + l;
    printf("The sum is : %.2f\n", sum);
    
    
    
    
}