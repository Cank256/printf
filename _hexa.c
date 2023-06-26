#include "main.h"

/**
 * _print_hexadecimal - Prints an unsigned integer argument in hexadecimal form
 * @args: The va_list containing the unsigned int argument
 * @uppercase: Flag to indicate if the hexadecimal letters should be uppercase
 *
 * Return: Number of characters printed
 */
int _print_hexadecimal(va_list args, int uppercase)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
char hexLetters[] = "0123456789abcdef";
char hexLettersUpper[] = "0123456789ABCDEF";
char *hexDigits = uppercase ? hexLettersUpper : hexLetters;
char hex[32];
int i = 0;

if (num == 0)
{
count += _putchar('0');
return (count);
}

while (num > 0)
{
hex[i++] = hexDigits[num % 16];
num /= 16;
}

while (i > 0)
{
count += _putchar(hex[--i]);
}

return (count);
}
