//Program: will take in four strings and convert them to integers and sum the values
//Author: Joshua Steier, 8/7/2016, 10:55 am
//input: four strings-> int
//1). input four strings as ints
//2). convert the strings to ints
//3). sum the values
//4). print out total
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    //let's do number one
    char a[10];
    char b[10];
    char c[10];
    char d[10];
    //declare variables
    int i;
    int j;
    int k;
    int l;
    int sum;
    //prompt for input and read
    printf("Please enter in the first string as an integer: \n");
    scanf("%s", a);
    printf("Please enter in the second string as an integer: \n");
    scanf("%s", b);
    printf("Please enter in the third string as an integer: \n");
    scanf("%s", c);
    printf("Please enter in the fourth string as an integer: \n");
    scanf("%s", d);
    //Now we need to convert the strings to ints: function atoi does this
    i= atoi(a);
    j= atoi(b);
    k= atoi(c);
    l = atoi(d);
    //now we need to sum these
    sum= i + j + k + l;
    //print out the sum
    printf("The sum is %d\n", sum);
    
}