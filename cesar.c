//Begin with declarations
// Purpose: to use as a cesar cipher; string-> string
//int main(int ..., string argv) for design purposes is the template I created
//Important functions: GetString, atoi, strlen
//GetString gets a string, str len deals with the string length
//author: steierjo(Joshua Steier)
//5/13/2016

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
                 // declare the main with argv, array for strings  
                 //need to read in string from the command line, so use int argc, string argv[]
int main(int argc, string argv[])
{
   
    bool KeySuccessful = false;
    //key is 26 as per the number of letters in the alphabet
    int key = 26;
    int length = 0;
    string text = "";
    
   
    do
    {
       // Must pass two commands in argc, so if not two, problem
        if(argc != 2)
        {
            
           
            printf("We require an int as encryption key.\n");
            return 1;
        }
        else
        {
           //use atoi 
            key = atoi(argv[1]);
            KeySuccessful = true;
        }
    } while(!KeySuccessful);
    
    // We can get the string this way 
    text = GetString();
    //Use strlen
    length = strlen(text);
    for(int i = 0; i < length; i++)
    {
        
        if(isalpha(text[i]))
        {
            // account for lowercase text
            if(islower(text[i]))
            {
                printf("%c", ((((text[i] - 97)+key)%26)+97));
            }
            
            else
            {
                printf("%c", ((((text[i] - 65)+key)%26)+65));
            }
        }
        
        else
        {
            printf("%c", text[i]);
        }
    }
    
    printf("\n");
    return 0;  
}
