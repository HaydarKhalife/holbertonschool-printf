#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct print_data - to print the format specifier
 * @fs: format specifier
 * @func: pointer to functionto to wirte data
 */
typedef struct print_data
{
	char *fs; /* forrmat specifier*/
	int (*func)(va_list);
} printf_var;

int (*get_func(const char *format))(va_list);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);

#endif
