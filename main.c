#include "_printf.h"
#include <stdio.h>

/**
 * main - test _printf
 *
 * Return: 1 Always
 */
int main()
{
	int h = 4;
	int f = 6;
	char x = 'x';
	char b = 'b';

	int i = _printf("Hello %c %c %c %i %d %i\n", x, b, 'b', h, f, 678);

	printf("%i\n", i);

	return (0);
}
