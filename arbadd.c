#include <stdio.h>
// arbirtrary number of grades average calculator using sentinel 
int main (void){
    unsigned int counter;
    int num;
    int total;
    
    // initialization phase
    total = 0;
    counter = 0;
    //processing phase
    printf("%s", "Enter num, -1 to end: ");
    scanf("%d", &num);
    //loop with sentinel
    while (num != -1){
        total = total + num;
        counter = counter + 1;
        //get next grade
        printf("%s", "Enter num, -1 to end: ");
        scanf("%d", &num);
        
        
    }
    //termination phase
    if (counter != 0){
        
        printf("the total is %d\n", total);
        
    }
    else{
        puts("no grades entered");
    }
}