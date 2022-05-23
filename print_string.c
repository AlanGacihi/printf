#include "_printf.h"
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_string - prints a string
 * @list: address to a list of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list *list)
{
	int len;
	char *str;

	str = va_arg(*list, char *);
	if (!str)
		str = "(null)";

	len = strlen(str);
	write(1, str, len);

	return (len);
}
