/*

*/
#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


// bool alpha = isalpha("T");
// bool upper = isupper("u");
// bool lower = islower("r");

// int main(int argc, string argv[]);
bool valid_key = false;

int main(int argc, string argv[])
{


    ///check if key is provided
    if (argc == 2 && isdigit(*argv[1]) != 0)
    {
        //convert key to int
        int encipher;
        int key = atoi(argv[1]);
        string s = get_string("String: ");
        string plaintext = s;
        char ciphertext[100];
        for (int i = 0, n = strlen(s); i <  n; i++)
        {
            if (isalpha(s[i]) == 0)
            {
                encipher = s[i];
                // printf("ASCII %i, %c,Cipher %i, \n", s[i], s[i], encipher);
                ciphertext[i] = (char) encipher;


            }
            else if (s[i] > 'A' &&  s[i] > 'Z')
            {

                encipher = ((int) s[i] -  97 + key) % 26 ;
                ciphertext[i] = (char) (encipher + 'a');


            }
            else
            {
                encipher = ((int) s[i] -  65 + key) % 26;
                // int encipher = ((int) s[i] + key);

                // printf(" ASCII is %i to CAESAR CIPHER %i, %c Key is %i  \n", s[i], encipher, encipher, key);
                ciphertext[i] = (char) encipher + 'A';

            }




            // int plain = encipher + 65;
            // printf("plain %c", plain);

        }
        printf("ciphertext: %s\nplaintext: %s\n", ciphertext, s);
        return 0;



    }
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    // check for upper and lowercase letters and use formula
    // if (valid_key == true)
    // {
    //     int key = atoi(argv[1]);
    //     string s = get_string("String: ");
    //     for (int i = 0; i < strlen(s); i++)
    //     {
    //         s[i] = toupper(s[i]);
    //         s[i] = ((int) s[i] + key);
    //         //for uppercaser, use 97 for lowercase
    //         int encipher = (((int) s[i] -  65 + key) % 26) + 65;
    //         // int encipher = ((int) s[i] + key);
    //         printf("( ASCII to CAESAR %i, Key is %i ) \n", encipher, key);

    //     }
    // }


}