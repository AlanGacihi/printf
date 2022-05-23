#include "main.h"
#include <stdarg.h>

/**
 * print_hex - prints a number in base 16(lowercase)
 * @list: address to a list of arguments
 *
 * Return: Number of characters printed
 */
int print_hex(va_list *list)
{
	unsigned int n;

	n = va_arg(*list, int);

	return (print_base(n, 16, 0));
}
