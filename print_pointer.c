#include "main.h"
#include <stdlib.h>

int print_ptr(unsigned long int n);

/**
 * printf_pointer - prints in base 16.
 * @list: list of arguments
 *
 * Return: number of characters printed.
 */
int print_pointer(va_list *list)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(*list, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_ptr(a);
	return (b + 2);
}

/**
 * print_ptr - prints an address in base 16
 * @n: number to be printed
 *
 * Return: number of characters printed
 */
int print_ptr(unsigned long int n)
{
	int count = 0, i = 0;
	char cmp[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
		      'b', 'c', 'd', 'e', 'f'};
	char ans[16];

	while (n / 16)
	{
		ans[i++] = cmp[n % 16];
		n /= 16;
	}
	ans[i] = cmp[n % 16];
	while (i >= 0)
	{
		_putchar(ans[i--]);
		count++;
	}
	return (count);
}
