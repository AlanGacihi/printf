#include "main.h"
#include <stdarg.h>

/**
 * print_percent - prints a character
 * @list: address to a list of arguments
 *
 * Return: 1 - Always
 */
int print_percent(__attribute__((unused)) va_list * list)
{
	_putchar('%');

	return (1);
}
