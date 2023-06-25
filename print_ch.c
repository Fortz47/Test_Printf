#include "main.h"

/**
 */

int print_ch(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
