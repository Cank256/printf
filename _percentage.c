#include "main.h"

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
