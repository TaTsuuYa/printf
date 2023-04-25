#include "main.h"

/**
 * _putnbr - a function to print a number
 * @nb: the number to be printed
 * Return: the lenght of characters
 */
int _putnbr(int nb)
{
	long nbr = nb; 
	int len = 0;

	if (nbr < 0)
	{
		len += _putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
		len += _putnbr(nbr / 10);
	len += _putchar(nbr % 10 + '0');
	return(len);
}
