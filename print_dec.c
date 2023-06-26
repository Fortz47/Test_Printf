#include "main.h"

/**
 */

int print_num_dec(int n, int count)
{
	if ((n / 10) > 0)
		count = print_num_dec(n / 10, 0);
	count += _putchar('0' + n % 10);
	return (count);
}

/**
 */

int print_dec(va_list args)
{
	int n;
	int count = 0;

	n = va_arg(args, int);

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	if (n < 0)
	{
		n = -(n);
		count += _putchar('-');
	}

	count += print_num_dec(n, 0);
	return (count);
}

