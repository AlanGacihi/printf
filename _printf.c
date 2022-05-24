#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *_printf - A function that prints characters
 *@format: A format specifier
 *
 *Return: Always return 0, On success, otherwise -1.
 **/
int _printf(const char *format, ...)
{
	int c = 0, i = 0;
	va_list list;

	if (format)
	{
		va_start(list, format);
		while (format[i])
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				c++;
			}
			else
			{
				if (format[i++])
					search(format[i], &c, &list);
				else
					return (c);
			}
			i++;
		}
		va_end(list);
		return (c);
	}
	return (0);
}
