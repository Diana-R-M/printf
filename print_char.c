#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * char_printf - prints characters
 * @args: arguments
 * @buffer_array: array that handles print
 * @s: Size specifier
 * @p: Precision specifier
 * @f: flag calculator
 * @w: Width
 * Return: Characters printed
 */

int char_printf(va_list args, char buffer_array[], int s,  int p, int f, int w)
{
	char a = va_arg(args, int);

	return (write_char(a, buffer_array, f, w, p, s));
}
