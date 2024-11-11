#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string texto = get_string("Texto: ");

    int letras = 0;
    int palavras = 1;
    int frases = 0;

    for (int i = 0, len = strlen(texto); i < len; i++)
    {
        if ((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122))
        {
            letras++;
        }
        else if (texto[i] == 32)
        {
            palavras++;
        }
        else if (texto[i] == 46 || texto[i] == 63 || texto[i] == 33)
        {
            frases++;
        }
    }

    float L = letras / (float) palavras * 100;
    float S = frases / (float) palavras * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
