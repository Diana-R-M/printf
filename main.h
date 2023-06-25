#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _printf(const char *format, ...);
int (*find_format(const char *format))(va_list);
int _putchar(char c);

#endif
