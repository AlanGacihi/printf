#include "_printf.h"
#include <stdarg.h>

/**
 * print_integer2 - prints a interger
 * @list: address to a list of arguments
 *
 * Return: 1 - Always
 */
int print_integer2(va_list *list)
{
	int n;

	n = va_arg(*list, int);

	return (print_number2(n));
}
