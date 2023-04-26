#include "main.h"

/**
 * _puto - a function to print a number to octal
 * @nb: the number
 * Return: the lenght of char printed
 */
int _puto(unsigned int nb)
{
	int len = 0;

	if (nb > 7)
		len += _puto(nb / 8);
	len += _putchar((nb % 8) + '0');
	return (len);
}
