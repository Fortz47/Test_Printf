#include "main.h"

/**
 */

int (*check_specifier(const char ch))(va_list)
{
	int i;

	func_t f[] = {
		{"c", print_ch},{"s", print_str},
		{"d", print_dec},{"i", print_dec},
		{"b", print_bin},{"u", print_u},
		{"o", print_o},{"x", print_x},
		{"x", print_X},{"S", print_S},
		{"p", print_p},{"R", print_R},
		{NULL, NULL}
	};

		i = 0;
		while (f[i].ch != NULL)
		{
			if (ch == *(f[i].ch))
				return (f[i].f);
			i++;
		}
	return (NULL);
}
