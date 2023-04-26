#include "main.h"

/**
 * _putS - A function that printd a string to stdout
 * @str: the string to be printed
 * Return: the numbers of printed characters
 */
int _putS(char *str)
{
	int len = 0;

	if (!str)
		return (_puts("(null)"));
	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			len += _puts("\\x0");
			len += _puthex(*str, 'X');
		}
		else
		{
			len += _putchar(*str);
		}
		str++;
	}
	return (len);
}
