#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * char_printf - prints characters
 * @args: list of arguments
 * Return: 1
 */

int char_printf(va_list args)
{
	char a = va_arg(args, char);

	_putchar(a);
	return (1);
}
