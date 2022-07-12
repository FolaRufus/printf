#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h>
#include <string.h>

/* _printf function prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);

/* helper functions */
char *_strcpy(char *dest, char *str);
int _strlen(char *s);

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;


#endif // MAIN_H