#include "main.h"

/**
 * handle_format - handles the % sign
 * @format: formatting specifier
 * @args: pointer to args;
 * @len: the lenght of printed characters
 *
 * Return: void
 */

void handle_format(const char *format, va_list args, int *len)
{
	switch (*format)
	{
		case '%':
			*len += _putchar('%');
			break;
		case 'c':
			*len += _putchar((char)va_arg(args, int));
			break;
		case 's':
			*len += _puts((char *)va_arg(args, char *));
			break;
		case 'd':
			*len += _putnbr(va_arg(args, int));
			break;
		case 'i':
			*len += _putnbr(va_arg(args, int));
		default:
			*len += _putchar('%');
			*len += _putchar(*format);
			break;
	}
}

/**
 * _printf - mimics printf
 * @format: string pointing to thr formatting of
 * printed string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%' && !*(format + 1))
			return (-1);
		if (*format == '%')
		{
			format++;
			handle_format(format, args, &len);
		}
		else
			len += _putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
