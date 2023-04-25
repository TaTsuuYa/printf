#include "main.h"

/**
 * _putb - a function to print a number to binary
 * @nb: the number
 * Return: lenght of number
 */
int _putb(unsigned int nb)
{
	int len = 0;

	if (nb > 1)
		len += _putb(nb / 2);
	len += _putchar((nb % 2) + '0');
	return (len);
}
