#include "main.h"

/**
 * _print_pointer - Prints a pointer argument in hexadecimal form
 * @args: The va_list containing the pointer argument
 *
 * Return: Number of characters printed
 */
int _print_pointer(va_list args)
{
unsigned long int ptr = (unsigned long int)va_arg(args, void *);
char buffer[1024];
int count = 0;
int i = 0;

if (ptr == 0)
{
count += _putchar('(');
count += _putchar('n');
count += _putchar('i');
count += _putchar('l');
count += _putchar(')');
return (count);
}

count += _putchar('0');
count += _putchar('x');

while (ptr > 0)
{
buffer[i++] = "0123456789abcdef"[ptr % 16];
ptr /= 16;
}

while (i > 0)
{
count += _putchar(buffer[--i]);
}

return (count);
}
