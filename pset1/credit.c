#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Receber o número de cartão de crédito
    long long card_number = get_long_long("Number: ");

    // Inicializar variáveis
    int length = 0;
    long long original_number = card_number;
    int sum = 0;

    // Determinar o comprimento do número de cartão de crédito
    while (original_number > 0)
    {
        original_number /= 10;
        length++;
    }

    // Reiniciar o número original
    original_number = card_number;

    for (int i = 1; i <= length; i++)
    {
        int digit = original_number % 10;

        // Se for um dígito impar, multiplicá-lo por 2 e somar as unidades ao resultado
        if (i % 2 == 0)
        {
            digit *= 2;
            sum += digit % 10 + digit / 10;
        }
        else
        {
            sum += digit;
        }

        original_number /= 10;
    }

    // Verificar se o número de cartão de crédito é válido
    if (sum % 10 == 0)
    {
        // Verificar o prefixo do número de cartão de crédito
        if (length == 15 && (card_number / 10000000000000 == 34 || card_number / 10000000000000 == 37))
        {
            printf("AMEX\n");
        }
        else if (length == 16 && (card_number / 100000000000000 >= 51 && card_number / 100000000000000 <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((length == 13 || length == 16) && (card_number / 1000000000000 == 4 || card_number / 1000000000000000 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
