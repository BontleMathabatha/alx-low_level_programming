#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
    int i;
    int leading_zeros = 1;

    for (i = 63; i >= 0; i--)
    {
        unsigned long int mask = 1UL << i;
        int bit = (n & mask) >> i;

        if (bit)
        {
            _putchar('1');
            leading_zeros = 0;
        }
        else if (!leading_zeros)
        {
            _putchar('0');
        }
    }

    if (leading_zeros)
        _putchar('0');
}
