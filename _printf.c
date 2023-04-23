#include "main.h"

/**
 * _printf - mimics printf
 * @format: string pointing to thr formatting of
 * printed string
 *
 * Return: int number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, i = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			i++;
			len += handle_format(format[i], &args);
		}
		else
		{
			len++;
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

/**
 * handle_format - handles the % sign
 * @f: formatting specifier
 * @args: pointer to args;
 *
 * Return: void
 */

int handle_format(char f, va_list *args)
{
	char *s;
	int len = 0;

	switch (f)
	{
		case 'c':
			_putchar(va_arg(*args, int));
			len++;
			break;
		case 's':
			s = va_arg(*args, char *);
			for (; *s != 0; s++)
			{
				_putchar(*s);
				len++;
			}
			break;
		case '%':
			_putchar('%');
			len++;
			break;
		default:
			_putchar('%');
			_putchar(f);
			len += 2;
			break;
	}
	return (len);
}

