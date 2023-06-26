#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
int plus_flag = 0;
int space_flag = 0;
int hash_flag = 0;

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;

while (*format == '+' || *format == ' ' || *format == '#')
{
if (*format == '+')
plus_flag = 1;
else if (*format == ' ')
space_flag = 1;
else if (*format == '#')
hash_flag = 1;

format++;
}

switch (*format)
{
case 'c':
count += _print_char(args);
break;
case 's':
count += _print_string(args);
break;
case 'b':
count += _print_binary(args);
break;
case 'd':
case 'i':
count += _print_decimal(args);
break;
case 'u':
count += _print_unsigned(args);
break;
case 'o':
count += _print_octal(args);
break;
case 'x':
count += _print_hexadecimal(args, 0);
break;
case 'X':
count += _print_hexadecimal(args, 1);
break;
case 'p':
count += _print_pointer(args);
break;
case '%':
count += _print_percent(args);
break;
default:
count += _putchar('%');
count += _putchar(*format);
break;
}

if (plus_flag && (*format == 'd' || *format == 'i'))
count += _putchar('+');
else if (space_flag && (*format == 'd' || *format == 'i'))
count += _putchar(' ');

if (hash_flag && (*format == 'x' || *format == 'X' || *format == 'o'))
{
if (*format == 'x' || *format == 'X')
count += _putchar('0') + _putchar(*format);
else if (*format == 'o')
count += _putchar('0');
}
}
else
{
count += _putchar(*format);
}
format++;
}

va_end(args);
return (count);
}
