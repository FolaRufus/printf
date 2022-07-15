#include "main.h"

/**
 * find_function - finds the format
 * @format: format (char, string, int, dec)
 * Return: 0
 */

int (*find_function(const char *format))(va_list)
{
	int i = 0;

	print find_f[] = {
			{"c", print_char},
			{"s", print_str},
			/*{"%", print_cent},*/
			{NULL, NULL}};

	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].func);
		i++;
	}

	return (NULL);
}

