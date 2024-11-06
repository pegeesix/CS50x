#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramid(int height);

int main(void)
{
    int height = get_height();
    print_pyramid(height);
}

// Função para obter a altura da pirâmide do usuário
int get_height(void)
{
    int n;
    do
    {
        n = get_int("Digite a altura: ");
    }
    while(n < 1 || n > 8);
    return n;
}

// Função para imprimir a pirâmide
void print_pyramid(int height)
{
    for(int i = 0; i < height; i++)
    {
        // Imprimir os espaços
        for(int space = 0; space < height - i - 1; space++)
        {
            printf(" ");
        }
        // Imprimir os hashtag
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
