#include "main.h"
/**
 * get_func - check for valid specifier
 * @format_sp: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format_sp))(va_list)
{
	int i;
	printf_var tab[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{NULL, NULL}
	};

	for (i = 0; tab[i].fs; i++)
	{
		if (*format_sp == *(tab[i].fs))
			return (tab[i].func);
	}
	return (tab[5].func);
}
