#include "main.h"

/**
 * _puts - A function that printd a string to stdout
 * @str: the string to be printed
 * Return: the numbers of printed characters
 */
int	_puts(char *str)
{
	int len;

	len = 0;
	if (!str)
		return (_puts("(null)"));
	while (*str != '\0')
	{
		len += _putchar(*str);
		str++;
	}
	return (len);
}
