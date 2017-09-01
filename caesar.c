#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])

string k = argv[1];       /////////////////////////////// create the k string and store argv[1] on it.
int k = atoi(argv[1]);      ///////////////////////////// convert the string k value to an integer.
string PlainText;       ///////////////////////////////// create the string that will store the plaintext 
                        ///////////////////////////////// taken from the user input.

string CipherText(string PlainText);    ///////////////// CipherText function declaration.

if (argc == 2 && PlainText != NULL)           ////////////////////////////////    accept only two arguments including the name of the program.
{
    printf("plaintext: %s", PlainText);  //////////////// take the plaintext from the user.
    string PlainText = get_string();     //////////////// store plaintext on the string PlainText.
    string CipherText = CipherText(PlainText);  ///////// CipherText Function Call.
    printf("ciphertext: %s", CipherText);   ///////////// print the CipherText function output.
    return 0;
}

else
{
    printf("please enter a positive\n");
    printf("integer after the program name.");
    return 1;
}
    
string CipherText(string PlainText)  /////////////////////////////////////// CipherText function definition.
{
    for (int i = 0, length = strlen(PlainText); i < length; i++) /// Iterate between PlainText letters.
    {
        int x = 0; ///////////// Initialize "x" int to compose CipherText
        
        if (isalpha(PlainText[i]))
        {
            if (isupper(PlainText[i]))
                {
                    x = (((int) PlainText[i] - 65 + k) % 26) + 65;
                    printf("%c", (char) x);
                }
            else if (islower(PlainText[i]))
                {
                    x = (((int) PlainText[i] - 97 + k) % 26) + 97;
                    printf("%c", (char) x);
                }
            else
                {
                    printf("%c", PlainText[i]);
                }
        }
    }
    
}
