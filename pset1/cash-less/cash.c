#include <cs50.h>
#include <stdio.h>

// Funções para contar o número de moedas de cada valor
int get_change(void);
int count_quarters(int cents);
int count_dimes(int cents);
int count_nickels(int cents);
int count_pennies(int cents);

int main(void)
{
    // Obter o valor do troco do usuário
    int change = get_change();

    // Contar o número de moedas de cada valor
    int quarters = count_quarters(change);
    change -= quarters * 25;
    int dimes = count_dimes(change);
    change -= dimes * 10;
    int nickels = count_nickels(change);
    change -= nickels * 5;
    int pennies = count_pennies(change);
    change -= pennies * 1;

    // Calcular o total de moedas
    int total_coins = quarters + dimes + nickels + pennies;

    // Imprimir o resultado
    printf("%d Moedas\n", total_coins);
}

// Função para obter o valor do troco do usuário
int get_change(void)
{
    int change;

    do
    {
        change = get_int("Change: ");
    }
    while (change < 0);

    return change;
}

// Função para contar o número de moedas de 25 centavos
int count_quarters(int cents)
{
    int count = 0;
    while (cents >= 25)
    {
        cents -= 25;
        count++;
    }
    return count;
}

// Função para contar o número de moedas de 10 centavos
int count_dimes(int cents)
{
    int count = 0;
    while (cents >= 10)
    {
        cents -= 10;
        count++;
    }
    return count;
}

// Função para contar o número de moedas de 5 centavos
int count_nickels(int cents)
{
    int count = 0;
    while (cents >= 5)
    {
        cents -= 5;
        count++;
    }
    return count;
}

// Função para contar o número de moedas de 1 centavo
int count_pennies(int cents)
{
    int count = 0;
    while (cents >= 1)
    {
        cents -= 1;
        count++;
    }
    return count;
}
