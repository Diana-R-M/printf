#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * string_printf - prints a string.
 * @args: arguments
 * Return: Strings printed
 */

int string_printf(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	fputs(str, stdout);
	(*count) += strlen(str);
	return(0);
}
