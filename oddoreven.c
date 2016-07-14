#include <stdio.h>
int main(void){
    int x;
    printf("Enter in a value for x: ");
    scanf("%d", &x);
    if (x % 2 == 0){
        printf("x is even\n");
    }
    else{
        printf("x is odd\n");
    }
    
}