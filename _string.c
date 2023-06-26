#include "main.h"

/**
 * _print_string - Prints a string from variadic arguments
 * @args: The va_list containing the string argument
 *
 * Return: Number of characters printed
 */
int _print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

if (str == NULL)
{
str = "(null)";
}

while (*str != '\0')
{
if (*str >= 32 && *str < 127)
{
count += _putchar(*str);
}
else
{
count += _putchar('\\');
count += _putchar('x');
count += _putchar(*str / 16 + (*str / 16 > 9 ? 'A' - 10 : '0'));
count += _putchar(*str % 16 + (*str % 16 > 9 ? 'A' - 10 : '0'));
}
str++;
}

return (count);
}
