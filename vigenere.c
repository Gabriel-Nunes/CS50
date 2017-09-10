

/* ************************************************* */
/*                  CS50x - pset2                    */
/*                                                   */
/*                 V I G E N E R E                   */
/*                                                   */
/*              author - Gabriel Nunes               */
/* ************************************************* */

// this program uses the Vigenere Cypher to encipher
// a text taken from user

// OBS: this version is WITHOUT LOOPS

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])                    
{
    string k = argv[1];    
    int i = 0;
    int j = 0;
    
    while (islower (k[j]))
    {
        k[j] = (toupper (k[j]));
    }
    
    if (argc == 2 && (isalpha(k[j])))
    {
        printf("plaintext: ");
        string p = get_string();                     
        printf("ciphertext: ");
        
        if (isalpha(p[i]))
        {
            if (isupper(p[i]))
            {
                int c = ((p[i] + (k[j] -  65) - 65) % 26) + 65;
                printf("%c", c);
            }
            else if (islower(p[i]))
            {
                int c = ((p[i] + (k[j] - 97) - 65) % 26) + 97;
                printf("%c", c);
            }
        }
        else
        {
            printf("%s", p);
        }
    
    printf("\n");
    return 0;
    }
    else                                 
    {
        printf("Usage: ./vigenere 'k' (aphabetical characters only)\n");
        return 1;
    }
}
