#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_percent - handle % conversion specifiers
 * @args: arguments
 * description - handle %
 * Return: 1
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
