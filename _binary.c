#include "main.h"

/**
 * _print_binary - Prints an unsigned integer argument in binary form
 * @args: The va_list containing the unsigned int argument
 *
 * Return: Number of characters printed
 */
int _print_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
int count = 0;
int leading_zeros = 1;

while (mask > 0)
{
if (num & mask)
{
leading_zeros = 0;
count += _putchar('1');
}
else if (!leading_zeros || mask == 1)
{
count += _putchar('0');
}
mask >>= 1;
}

return (count);
}
