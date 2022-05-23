#include "main.h"
#include <stdarg.h>

/**
 * print_signed_int - prints a signed integer
 * @list: address to a list of arguments
 *
 * Return: 1 - Always
 */
int print_signed_int(va_list *list)
{
	int n;

	n = va_arg(*list, int);

	return (print_int(n, 1));
}
