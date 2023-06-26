#include "main.h"

/**
 */

int  print_S(va_list args)
{
	char *str;
	int count;

	count = 0;
	str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	while (*str)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar((*str >> 4) > 9 ? (*str >> 4) - 10 + 'A' : (*str >> 4) + '0');
			count += _putchar((*str & 0x0F) > 9 ? (*str & 0x0F) - 10 + 'A' : (*str & 0x0F) + '0');
		}
		else
			count += _putchar(*str);
		*str++;
	}
	return (count);
}
