#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct function_s
{
	char id;
	int (*f)(int *, va_list *);
} function_t;


int _putchar(char c);
int _printf(const char *format, ...);
void search(const char fmt, int *c, va_list *list);

#endif /* PRINTF_H */
