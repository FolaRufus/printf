#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <unistd.h> /* write */
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*find_function(const char *format))(va_list);
int print_str(va_list list);
int print_char(va_list list);
int print_cent(void);


/**
 * struct types - contains different types of format
 * @sc: The specifiers
 * @func: The associated function
 */
typedef struct types
{
	char *sc;
	int (*func)(va_list);
} print;

#endif
