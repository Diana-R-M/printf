#include <stdio.h>
#include <stdarg.h>
/**
 * print_decimal - print decimal
 * @args: variable arguments
 * @count: pointer to count
 */
void print_decimal(va_list args, int *count);

/**
 * print_int - print int
 * @args: arguments
 * description - handle %d and %i
 * Return: 0
 */
void print_int(va_list args, int *count)
{
	print_decimal(args, count);
	return;
}
