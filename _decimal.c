#include "main.h"

/**
 * _print_decimal - Prints a signed decimal integer argument
 * @args: The va_list containing the decimal integer argument
 *
 * Return: Number of characters printed
 */
int _print_decimal(va_list args)
{
int num = va_arg(args, int);
int count = 0;

if (num < 0)
{
count += _putchar('-');
num = -num;
}

if (num == 0)
{
count += _putchar('0');
return (count);
}

if (num / 10)
{
count += _print_decimal(args);
}

count += _putchar(num % 10 + '0');

return (count);
}
