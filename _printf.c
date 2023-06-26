#include "main.h"

/**
 * _putchar - Prints a single character to stdout
 * @c: The character to be printed
 *
 * Return: Number of characters printed (always 1)
 */
int _putchar(char c)
{
putchar(c);
return (1);
}

/**
 * _print_char - Prints a character from variadic arguments
 * @args: The va_list containing the character argument
 *
 * Return: Number of characters printed
 */
int _print_char(va_list args)
{
char c = (char)va_arg(args, int);
return (_putchar(c));
}

/**
 * _print_string - Prints a string from variadic arguments
 * @args: The va_list containing the string argument
 *
 * Return: Number of characters printed
 */
int _print_string(va_list args)
{
char *s = va_arg(args, char *);
int count = 0;

while (*s != '\0')
{
count += _putchar(*s);
s++;
}

return (count);
}

/**
 * _print_percent - Prints a percent symbol
 * @args: The va_list (unused)
 *
 * Return: Number of characters printed (always 1)
 */
int _print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}

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

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += _print_char(args);
break;
case 's':
count += _print_string(args);
break;
case '%':
count += _print_percent(args);
break;
default:
count += _putchar('%');
count += _putchar(*format);
break;
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
