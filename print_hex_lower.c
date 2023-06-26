#include "main.h"

/**
 */

int print_hex_lower(va_list args)
{
	int digits[32];
	char hexChar;
	int i, j, count, digit, hexDigit;
	unsigned int n;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	i = 0;
	while (n > 0)
	{
		digit = n % 16;
		digits[i] = digit;
		i++;
		n /= 16;
	}
	count = 0;
	for (j = i - 1; j >= 0; j--)
	{
		hexDigit = digits[j];
		hexChar = (hexDigit < 10) ? ('0' + hexDigit) : ('a' + hexDigit -10);
		count += _putchar(hexChar);
	}

	return (count);
}

