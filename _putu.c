#include "main.h"

/**
 * _putu - print unsigned int
 * @nb: the number to be printed
 * Return: the lenght of printed chars
 */
int _putu(unsigned int nb)
{
	int len = 0;

	len = 0;
	if (nb > 9)
		len += _putu(nb / 10);
	len += _putchar(nb % 10 + '0');
	return (len);
}
