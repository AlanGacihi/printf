#include <stdio.h>
#include "_printf.h"
#include <stdarg.h>

/**
 * search - look for the appropriate function
 * @format: conversion specifier
 * @c: number of printed characters
 * @list: list of arguments
 *
 */
void search(const char format, int *c, va_list *list)
{
	int i = 0;

	function_t funcs [] = {
		{'c', print_char},
		{NULL, NULL}
	};

	while (funcs[i].id)
	{
		if (funcs[i].id == format)
		{
			*c += funcs[i].f(list);
			return;
		}
		i++;
	}

	_putchar(format);
	return;
}
