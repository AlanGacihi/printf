#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/**
 * struct function_s - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct function_s
{
	char *id;
	int (*f)(va_list *);
} function_t;

int print_unsigned_int(va_list *list);
int print_signed_int(va_list *list);
int print_int(int n, int flag);
int _putchar(char c);
int _printf(const char *format, ...);
void search(const char format, int *c, va_list *list);
int print_char(va_list *list);
int print_octal(va_list *list);
int print_binary(va_list *list);
int print_hex(va_list *list);
int print_HEX(va_list *list);
int print_string(va_list *list);
int print_base(unsigned int n, int base, int flag);

#endif /* PRINTF_H */
