#include <stdio.h>
#include <stdarg.h>

/**
 * print_hex - print unsigned hexadecimal
 * @args: arguments
 * Return: printed characters
 */

int print_hex(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	char buffer_array[32];
	int value = 0;
	int a = 0;
	int b;
	const char *hexadecimal = "0123456789abcdef";

	number = 0;
	while (number > 0)
	{
		buffer_array[i++] = hexadecimal[number % 16];
		number /= 16;
	}
	for (b = a - 1; b >= 0; b--)
	{
		putchar(buffer_array[b]);
		value++;
	}
	return (value);
}

