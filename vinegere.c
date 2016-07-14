//Design: tltle is vignere.c, the purpose is to implement vignere cipher. 
// string->string
//inventory: can use argc, argv, etc, use the same as we did in ceasar cipher
//author: josh steier, date is may 19th 2016


//First do the includes
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
//declare the prototype
char caesar(char value, int key);
//this int main was given in the problem set
int main(int argc, string argv[]) {

    //third step: lets delcare some variables
    bool keysuccess = false;
    string keyword = "";
    int ourlength = 0;
    string ourtext = "";
    int user_text_length;
    int key_count = 0;

    do
    {
        // The number of command line args submitted was incorrect. 
        if(argc != 2)
        {
            printf("You didn't enter the correct number of keywords.\n");
            return 1;
        }
        else if(argv[1])
        {
            int length = strlen(argv[1]);
            for(int i = 0; i < length; i++)
            {
                if(!isalpha(argv[1][i]))
                {
                    // We accept only letters as input. 
                    printf("Your input contains illegal characters.\n");
                    return 1;
                }
                else
                {
                    // All good, input can be accepted as key.
                    keysuccess = true;
                    keyword = argv[1];
                }
            }
        }
    } while(!keysuccess);
    
    // We check for the length of the keyword and define an array with that length.
    ourlength = strlen(keyword);
    int keycodes[ourlength];

    // The letters in the keyword array should be converted to numbers
    // starting from A = 0 to Z = 25 ignoring case.
    for(int i = 0; i < ourlength;i++)
    {
        keycodes[i] = toupper(keyword[i]) - 65;
    }

    // Read in user text and calculate its length.
    user_text = GetString();
    user_text_length = strlen(user_text);

    for (int i = 0; i < user_text_length; i++)
    {
        // If input at given position is not letter, just mirror it.
        if(!isalpha(user_text[i]))
        {
            printf("%c", user_text[i]);
        }
        // Process input.
        else
        {
            printf("%c", caesar(user_text[i], keycodes[key_count]));

            // Increase the position counter for the keycode array.  
            if(key_count < ourlength - 1)
            {
                key_count++;
            }
            else
            {
                key_count = 0;
            }
        }
    }

    
    printf("\n");
    return 0;
}


char caesar(char token, int key)
{
    if(islower(token))
    {
        return ((((token - 97)+key)%26)+97);
    }
    else
    {
        return ((((token - 65)  +key)%26)+65);
    }
}