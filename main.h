#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 */

typedef struct func
{
	char *ch;
	int (*f)(va_list);
} func_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char))(va_list);
int print_ch(va_list);
int print_str(va_list);
int print_dec(va_list);
int print_bin(va_list);
int print_u(va_list);
int print_o(va_list);
int print_x(va_list);
int print_X(va_list);
int print_S(va_list);
int print_p(va_list);
int print_R(va_list);


#endif
