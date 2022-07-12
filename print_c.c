char *print_c(va_list list)
{
	char *s;

	s = malloc(sizeof(char) * 2);
	s[0] = va_arge(list, int);
	s[1] = '\0';

	return (s);
}