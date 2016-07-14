#include<cs50.h>
#include<stdio.h>
int main(void)
{
     printf("Enter in the legnth of your shower in minutes");
    int showerlen = GetInt();
    
    
    
        int bottles = ( 128 * (1.5 * showerlen) ) / 16;
        printf("bottles: %d\n", bottles);
    

    
        
    

    
}