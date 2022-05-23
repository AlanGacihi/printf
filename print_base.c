#include "_printf.h"

/**
 * print_base - Print a number in a specified base.
 * @n: Number to convert.
 * @base: Base to print the number.
 * @flag: 0 for lowercase hex and 1 for uppercase.
 *
 * Return: Number of characters printed.
 */
int print_base(unsigned int n, int base, int flag)
{
	char ans[32], *comp;
	char low[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
		      'b', 'c', 'd', 'e', 'f'};
	char up[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',
		     'B', 'C', 'D', 'E', 'F'};
	int i = 0, c = 0;

	if (flag)
	{
		comp = up;
	}
	else
	{
		comp = low;
	}
	while (n / base)
	{
		ans[i++] = comp[n % base];
		n /= base;
	}
	ans[i] = comp[n % base];
	while (i >= 0)
	{
		while (ans[i] == 0)
			i--;
		_putchar(ans[i--]);
		c++;
	}
	return (c);
}
