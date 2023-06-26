#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);

int _putchar(char c);

int _print_char(va_list args);

int _print_string(va_list args);

int _print_binary(va_list args);

int _print_decimal(va_list args);

int _print_percent(va_list args);

int _print_unsigned(va_list args);

int _print_octal(va_list args);

int _print_hexadecimal(va_list args, int uppercase);

int _print_pointer(va_list args);

#endif
