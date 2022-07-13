#include "main.h"
/**
 * print_str - prints string
 * @list: variadic parameter
 * Return: 1
 */

int print_str(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}