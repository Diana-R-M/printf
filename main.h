#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_percent(va_list args);
int char_printf(va_list args);
int print_int(va_list args);
int string_printf(va_list args);

#endif
