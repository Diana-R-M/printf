#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * char_printf - prints characters
 * @args: list of arguments
 * Return: 1
 */

int char_printf(va_list args, int *count)
{
	char a =(char)va_arg(args, int);
	_putchar(a);
	(*count)++;
	return(0);
}
