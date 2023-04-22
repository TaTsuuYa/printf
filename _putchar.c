#include "main.h"

/**
 * _putchar - prints a character
 * @c: printed character
 *
 * Return: int 1 success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

