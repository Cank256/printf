#include "main.h"

/**
 * _print_unsigned - Prints an unsigned decimal integer argument
 * @args: The va_list containing the unsigned int argument
 *
 * Return: Number of characters printed
 */
int _print_unsigned(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;

if (num == 0)
{
count += _putchar('0');
return (count);
}

if (num / 10)
{
count += _print_unsigned(args);
}

count += _putchar(num % 10 + '0');

return (count);
}
