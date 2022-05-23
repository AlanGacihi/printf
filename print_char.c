#include "_printf.h"
#include <stdarg.h>

/**
 * print_char - prints a character
 * @list: address to a list of arguments
 *
 * Return: 1 - Always
 */
int print_char(va_list *list)
{
	char ch;

	ch = (char)va_arg(*list, int);
	_putchar(ch);

	return (1);
}
