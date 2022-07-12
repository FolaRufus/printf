char *print_s(va_list list)
{
	char *i;
	char *j;
	int strl;
	char *dest;

	i = va_arg(list, int);
	strl = _strlen(i);

	j = malloc(sizeof(char) * strl + 1);

	if (j = NULL)
		return (NULL);

	j = _strcpy(dest, i);

	return (j);
}