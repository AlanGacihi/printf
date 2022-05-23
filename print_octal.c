#include "_printf.h"
#include <stdarg.h>

/**
 * print_octal - prints a number in base 8
 * @list: address to a list of arguments
 *
 * Return: Number of characters printed
 */
int print_octal(va_list *list)
{
	unsigned int n;

	n = va_arg(*list, int);

	return (print_base(n, 8, 0));
}
