#include <stdio.h>
#include "_printf.h"
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
<<<<<<< HEAD
	int i = 0;
	int c = 0;
=======
	convert_match m[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", printf_37}, {"%i", printf_int},
		{"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin},
		{"%u", printf_unsigned}, {"%o", printf_oct},
		{"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};
>>>>>>> 02058ac59db5ad950b3268b9ad9c97cef5b9d8c9

	va_list(list);

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
					return (-1);
			}
			i++;
		}
		va_end(list);
		return (c);
	}
	return (-1);
}
