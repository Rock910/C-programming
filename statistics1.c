//Program: This program will compute standard deviation of an array  and display a table of the difference between
//each value and the mean
//input: array of doubles-> table of doubles
//Author: Joshua Steier, 8/1/2026, 9:42pm
//Need arithmetic expression for mean, that's just sum(x)/ number of x's.
#include <stdio.h>
#include <math.h>
//make a max value for the array, 8 will mean the array goes from x[0] to x[7]
#define MAX 8
int main(void){
    //declare variables and the array
    double x[MAX];
    double mean;
    double st_dev;
    double sum;
    double sum_sqr;
    int i;
    //prompt user for input
    printf("Enter %d numbers separated by blanks\n", MAX);
    //read the numbers into the array
    for (i = 0; i < MAX; i++)
        scanf("%lf", &x[i]);
        
        
        
    
    //computes the sum and sum of squares
    sum = 0;
    sum_sqr=0;
    //in order to sum numbers in the array, we use a for loop to iterate over the array
    for(i = 0; i< MAX; i++){
        sum += x[i];
        sum_sqr += x[i] * x[i];
        
    }
    //Now we just need to compute the mean and standard deviation
    //mean comes from the arithmetic expression above
    mean = sum / MAX;
    //The standard deviation comes from formula for std deviation
    st_dev= sqrt(sum_sqr / MAX - mean * mean);
    //print out each
    printf("The mean is %.3f.\n", mean);
    printf("The standard deviation is %.3f.\n", st_dev);
    //Now we have to create the table of differences
    printf("\nTable of differences between the values and mean\n");
    printf("Index            Item        Difference\n");
    for(i = 0; i<MAX; i++)
    printf("%3d%4s%9.2f%5s%9.2f\n", i, " ", x[i], " ", x[i] - mean);
}