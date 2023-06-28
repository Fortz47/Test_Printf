#include "main.h"

/**
 * print_cent - print %
 * @args: unused
 *
 * Return: number of characters printed
 */

int print_cent(va_list args __attribute__((unused)), flag *f __attribute__((unused)))
{
	return (write(1, "%", 1));
}
