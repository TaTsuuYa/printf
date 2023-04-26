#include "main.h"

/**
 * _puthex - print  number to hex
 * @nb: number to be printed
 * @c: the flag
 * Return: the length
 */
int _puthex(unsigned int nb, char c)
{
	int len;

	len = 0;
	if (nb > 15)
		len += _puthex(nb / 16, c);
	if (c == 'x')
		len += write(1, &"0123456789abcdef"[nb % 16], 1);
	else
		len += write(1, &"0123456789ABCDEF"[nb % 16], 1);
	return (len);
}
