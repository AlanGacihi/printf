#include "main.h"

/**
 * print_int - Prints an integer.
 * @n: integer to be printed.
 * @flag: 0 if number is signed 1 if unsigned.
 *
 * Return: Number of characters printed.
 */
int print_int(int n, int flag)
{
	unsigned int d = 1, c, r;
	int chars = 0;

	if (flag)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
			chars++;
		}
		c = n;
	}
	else
	{
		c = (unsigned int)n;
	}
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
