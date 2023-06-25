#include "main.h"

/**
 */

int _printf(const char *format, ...)
{
	int i, count;
	int (*f)(va_list);
	va_list args;
	va_start(args, format);

	i = 0;
	count = 0;

	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
			f = check_specifier(format[i + 1]);
			count += f(args);
			i++;
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
