#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_ex_string - prints a string
 * @list: address to a list of arguments
 *
 * Return: Number of characters printed
 */
int print_ex_string(va_list *list)
{
	char *str;
	int c = 0;
	char ch = '0';

	str = va_arg(*list, char *);
	if (!str)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			c += write(1, "\\x", 2);
			if (*str < 16)
				c += write(1, &ch, 1);
			c += _printf("%X", *str);
		}
		else
		{
			c += write(1, str, 1);
		}
		str++;
	}
	return (c);
}
