#include "main.h"

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
