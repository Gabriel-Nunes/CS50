// this program uses the Vigenere Cypher to encipher
// a text taken from user

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])                    
{
    string k = argv[1];    
    
    // assign argv[1] elements to string "k";
    for (int a = 0, n = strlen(argv[1]); a < n; a++){
        k[a] = argv[1][a];   
    }
    
    int j = strlen(k);
    
// I'll insert the argv[1] validation
// here later.
    
    // the problem specification asks for only two comand line arguments;
    if (argc == 2){
        
        printf("plaintext: ");
        // get the plaintext from user to be enciphered
        // and store it in string "p";
        string p = get_string();                     
        printf("ciphertext: ");
        
        // iterate between string "p" elements,
        // and print the ciphered text stored in "c" variable;
        for (int i = 0, n = strlen(p); i < n; i++){
            int c = 0;
            if (isalpha(p[i])) {
                if (isupper(p[i]))
                    {
                        c = (((p[i] - 65) + (k[i % j] -  65)) % 26) + 65;
                        printf("%c", c);
                    }
                    else if (islower(p[i]))
                    {
                        c = (((p[i] - 97) + (k[i % j] -  97)) % 26) + 97;
                        printf("%c", c);
                    }
            }
            // if the p[i] element is not alpha, 
            // just print it as it comes;
            else
            {
                printf("%c", p[i]);
            }
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
