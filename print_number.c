#include "_printf.h"

/**
 * print_number - Prints an integer.
 * @n: integer to be printed.
 *
 * Return: Number of chars printed.
 */
int print_number(int n)
{
	int d = 1, c, r, chars = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		chars++;
	}
	c = n;

	while (c / 10)
	{
		d *= 10;
		c /= 10;
	}
	_putchar(c + '0');
	chars++;
	while (d >= 10)
	{
		r = n % d;
		d /= 10;
		_putchar(r / d + '0');
		chars++;
	}
	return (chars);
}
