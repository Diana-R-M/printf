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

int string_printf(va_list args)
{
	char *str;
	int a, l;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
		l = strlen(str);
		a = 0;
		while (a < l)
		{
			_putchar(str[a]);
			a++;
		}
		return (l);
	}
	else
	{
		l = strlen(str);
		a = 0;
		while (a < l)
		{
			_putchar(str[a]);
			a++;
		}
		return (l);
	}
}

