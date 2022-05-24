#include "main.h"
#include <stdio.h>
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

	function_t funcs[] = {
		{"c", print_char}, {"i", print_signed_int},
		{"d", print_signed_int}, {"b", print_binary},
		{"o", print_octal}, {"x", print_hex},
		{"X", print_HEX}, {"u", print_unsigned_int},
		{"s", print_string}, {NULL, NULL}
	};

	while (funcs[i].id)
	{
		if (*(funcs[i].id) == format)
		{
			*c += funcs[i].f(list);
			return;
		}
		i++;
	}

	_putchar(format);
	*c  += 1;
}
