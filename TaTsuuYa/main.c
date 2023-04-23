#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;

	_printf(NULL);
	printf(NULL);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len1 = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("_pr: %d, pr:%d\n", len1, len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	
	return (0);
}

