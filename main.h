#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int write_char(char a, char buffer_array[], int s,  int p, int f, int w);
int print_percent(va_list args);
int char_printf(va_list args, char buffer_array[], int s,  int p, int f, int w);
int print_int(va_list args);
int string_printf(va_list args);

#endif
