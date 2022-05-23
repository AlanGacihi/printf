#include "main.h"
#include <stdarg.h>

/**
 * print_HEX - prints a number in base 16(uppercase)
 * @list: address to a list of arguments
 *
 * Return: Number of characters printed
 */
int print_HEX(va_list *list)
{
	unsigned int n;

	n = va_arg(*list, int);

	return (print_base(n, 16, 1));
}
