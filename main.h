#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


/**
* struct format - match the conversion specifiers to args passed
* @id: pointer to format specifer, i.e. id[0] = % and id[1] is the letter (c, s, d, i)
* @f: pointer to function determined by the conversion specifier
*
*/

typedef struct format
{
    char *id;
    int (*f)();
} convert_match;

int printf_int(va_list args);
int printf_dec(va_list args);
int *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);



#endif

