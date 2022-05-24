#include "main.h"
#include <stdlib.h>

/**
 * printf_rot13ed - printf str to ROT13 place into buffer
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_rot13ed(va_list *list)
{
	int i, j, count = 0;
	int k = 0;
	char *s = va_arg(*list, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
