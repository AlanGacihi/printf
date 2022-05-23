#include "_printf.h"
#include <stdarg.h>

/**
 * print_binary - prints a number in base 2
 * @list: address to a list of arguments
 *
 * Return: Number of characters printed
 */
int print_binary(va_list *list)
{
	unsigned int n;

	n = va_arg(*list, int);

	return (print_base(n, 2, 0));
}
