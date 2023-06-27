#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - produce output as per the format
 * @format: character string
 * description - produce output by format
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'd' || *format == 'i')
			{
				count += print_int(args);
			}
			else  if (*format == '%')
			{
				count += print_percent(args);
			}
			else if (*format == 'c')
			{
				count += char_printf(args);
			}
			else if (*format == 's')
			{
				count += string_printf(args);
			}
			else
			{
				_putchar('%');
				_putchar (*format);
				count += 2;
			}
		}
		else
		{
			putchar(*format);
			format++;
		}

		format++;
	}

	va_end(args);
	return (count);
}
