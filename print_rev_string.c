#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_rev_string - prints a string
 * @list: address to a list of arguments
 *
 * Return: Number of characters printed
 */
int print_rev_string(va_list *list)
{
	char *s = va_arg(*list, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";

	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);

	return (j);
}
