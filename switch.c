#include <stdio.h>

int main (void){
    printf("Give me an int between 1 and 10: \n");
    int n= GetInt();
    switch(n){
        case 1:
        case 2:
        case 3:
        printf("Your number is small \n");
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        printf("Your number is medium\n");
        break;
        case 8:
        case 9:
        case 10:
        printf("Your number is large\n");
        
        default:
        printf("You picked an invalid int\n");
        break;
    
    }
    
    
}