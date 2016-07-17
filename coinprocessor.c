//This program takes as input coins like at a supermarket and drafts it into a bill
//purpose: turn coins into a bill
#include <stdio.h>
int main(void){
    //declare variables
    // we need char so we know the name of the person, pennies, nickles, dimes, quarters because those are change
    char first, middle, last;
    int pennies, nickles;
    int dimes, quarters;
    int dollars;
    int change;
    int total_dollars;
    int total_cents;
    //get and display the name of the person
    printf("Give your first name, middle, and last: ");
    scanf("%c%c%c", &first, &middle, &last);
    printf("\n%c%c%c, please enter your coin information: ", first, middle, last);
    //get the count
    printf("Number of coins: ");
    scanf("%d", &dollars);
    printf("Number of quarters: ");
    scanf("%d", &quarters);
    printf("The number of dimes: ");
    scanf("%d", &dimes);
    printf("Number of nickles: ");
    scanf("%d", &nickles);
    printf("The number of pennies: ");
    scanf("%d", &pennies);
    //compute the total values 
    total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickles + pennies;
    //find the total dollars
    total_dollars= total_cents/100;
    //change
    change= total_cents % 100;
    //display the credit slip
    printf("\n\n%c%c%c Coin Credit \nDollars: %d\nChange: %d cents\n", first, middle, last, total_dollars, change);
    
}