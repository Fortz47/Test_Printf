#include "main.h"

/**
 */

int _printf(const char *format, ...)
{
	int (*f)(va_list);
	va_list args;
	va_start(args, format);

	int i = 0;
	int count = 0;

	while(format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			f = check_specifier(format[i++]);
			count += f(args);
		}
		else if (format[i + 1] == '%')
		{
			count += _putchar('%');
			i++;
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
