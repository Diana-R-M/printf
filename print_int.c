#include <stdio.h>
#include <stdarg.h>
/**
 * print_int - print int
 * @args: arguments
 * description - handle %d and %i
 * Return: 0
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	char buffer[32];
	int i = 0;
	int j;

	if (num < 0)
	{
		putchar('_');
		num = -num;
		count++;
	}

	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);

	for (j = i - 1; j >= 0; j--)
	{
		putchar(buffer[i]);
		count++;
	}

	return (count);
}
