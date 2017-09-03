/* ************************************************* */
/*                  CS50x - pset2                    */
/*                                                   */
/*                   C A E S A R                     */
/*                                                   */
/*              author - Gabriel Nunes               */
/* ************************************************* */

// this program uses the Caesar Cypher to encrypt
// a text taken from user

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])                       /////// include argument lines to get the key from the command line
{
    if (argc != 2)                                      /////// only two arguments allowed at the command line
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    else
    {
        int c = 0;                                      /////// "c" variable will store the cyphered letters
        int k = atoi(argv[1]);                          /////// "key" variable stores argv[] as an int
        printf("plaintext: ");
        string p = get_string();                        /////// get the plain text from the user
        printf("ciphertext: ");
        
        for (int i = 0, n = strlen(p); i < n; i++)      /////// iterate between each letter of the plain text
        {                                               
            if (isupper(p[i]))                          /////// if the plain text letter is upper case           
            {                                       
                c = ((p[i] - 65 + k) % 26) + 65;        /////// c will store the "kth" letter
                printf("%c", c);
            }
            else if (islower(p[i]))
            {
                c = ((p[i] - 97 + k) % 26) + 97;
                printf("%c", c);
            }
            else
            {
                printf("%c", p[i]);
            }
        }
    printf("\n");
    return 0;
    }
}




