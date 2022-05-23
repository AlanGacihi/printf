#include "_printf.h"
#include <stdarg.h>

/**
 * print_unsigned_int - prints an unsigned integer
 * @list: address to a list of arguments
 *
 * Return: 1 - Always
 */
int print_unsigned_int(va_list *list)
{
	int n;

	n = va_arg(*list, int);

	return (print_int(n, 0));
}
