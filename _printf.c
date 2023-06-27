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
				char c = (char)va_arg(args, int);

				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char*);

				fputs(str, stdout);
				count += strlen(str);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}

		i++;
	}

	va_end(args);
	return (count);
}
