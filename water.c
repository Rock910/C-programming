//author: Joshua Steier
//purpose: to convert the length of the shower to number of water bottles consumed
//num->num
#include<cs50.h>
#include<stdio.h>
int main(void)
{
     printf("Enter in the length of your shower in minutes");
    int showerlen = GetInt();
    
    
    
        int bottles = ( 128 * (1.5 * showerlen) ) / 16;
        printf("bottles: %d\n", bottles);
    

    
        
    

    
}
