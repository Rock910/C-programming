//Program: This program will tell if a given year, Y, is a leap year or not
//Purpose: To tell if a given year is a leap year
//Author: Joshua Steier, 7/28/2016, 5:51 pm
//Takes an int y as input and prints out a string
#include <stdio.h>
#include "cs50.h"
int main(void)
{
    //declare variables
  int Y;
  //prompt user for input
  printf("");
  Y= GetInt();
  //account for all cases: see definition of leap year.
  if ( Y % 400 == 0)
    printf("Leap Year");
  else if ( Y % 100 == 0)
    printf("Not Leap Year");
  else if ( Y % 4 == 0 )
    printf("Leap Year");
  else
    printf("Not Leap Year");
 
  return 0;
}