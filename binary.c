#include "main.h"

/**
 * printf_binary - prints a binary number
 * @num: number arguments
 * @buffer: buffer to store the binary representation
 * @printed: the printed characters
 * Return: printed characters
 */

int printf_binary(unsigned int num, char *buffer, int printed)
{
    int binary[32] = {0};
    int i = 0;

    if (num == 0)
    {
        buffer[0] = '0';
        buffer[1] = '\0';
        printed++;
        return (printed);
    }

    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    while (i > 0)
    {
        i--;
        buffer[printed] = '0' + binary[i];
        printed++;
    }

    buffer[printed] = '\0';
    return (printed);
}

