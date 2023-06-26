#include "main.h"

/**
 */

int print_num_bin(unsigned int n, int count)
{
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if ((n / 2) > 0)
		count = print_num_bin(n / 2, 0);
	count += _putchar('0' + n % 2);
	return (count);
}

/**
 */

int print_bin(va_list args)
{
	int count;

	unsigned int n = va_arg(args, unsigned int);

	count = print_num_bin(n, 0);
	return (count);
}

