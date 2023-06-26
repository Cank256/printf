#include "main.h"

/**
 * _print_octal - Prints an unsigned integer argument in octal form
 * @args: The va_list containing the unsigned int argument
 *
 * Return: Number of characters printed
 */
int _print_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
unsigned int octalNum = 0, place = 1;
int count = 0;

while (num > 0)
{
octalNum += (num % 8) * place;
num /= 8;
place *= 10;
}

if (octalNum == 0)
{
count += _putchar('0');
return (count);
}

if (octalNum / 10)
{
count += _print_unsigned(args);
}

count += _putchar(octalNum % 10 + '0');

return (count);
}
