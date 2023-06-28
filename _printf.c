#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - print output
 * @format: character string
 * description - print output
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				break;
			}
			else if (format[i] == 'c')
			{
				char_printf(args, &count);
			}
			else if (format[i] == 's')
			{
				string_printf(args, &count);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				print_decimal(args, &count);
			}
			else if (format[i] == 'x')
			{
				print_hex(args, &count);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}

		i++;
	}
	va_end(args);
	return (count);
}
