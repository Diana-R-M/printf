#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_decimal - print decimal number
 * @args: variable argument
 * @count: pointer to count
 * description - print decimal
 * Return: void
 */
void print_decimal(va_list args, int *count)
{
	int num = va_arg(args, int);
	int sum = 0;

	if (num == 0)
	{
		putchar('0');
		(*count)++;
		return;
	}

	if (num < 0)
	{
		putchar('_');
		(*count)++;
		num = -num;
	}

	while (num != 0)
	{
		sum = num % 10;
		_putchar('0' + sum);
		(*count)++;
		num /= 10;
	}

	if (num < 0)
	{
		_putchar('_');
		(*count)++;
	}
}
