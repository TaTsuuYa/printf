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
			if (format[i] == 0)
				return (-1);

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
	int len = 0, m = 0;
	unsigned int n = 0;

	switch (f)
	{
		case 'c':
			_putchar(va_arg(*args, int));
			len++;
			break;
		case 's':
			s = va_arg(*args, char *);
			if (s == NULL)
			{
				_printf("(null)");
				len += 6;
				break;
			}

			for (; *s != 0; s++)
			{
				_putchar(*s);
				len++;
			}
			break;
		case 'i':
		case 'd':
			n = va_arg(*args, int);
			m = n;

			if (m == 0)
			{
				_putchar('0');
				len++;
				break;
			}
			if (m < 0)
			{
				_putchar('-');
				len++;
				m = m * -1;
				n = m;
				len += handle_int(m);
				break;
			}
			len += handle_int(m);
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

int handle_int(int n)
{
	int len = 0;

	if (n == 0)
		return (0);

	len += handle_int(n / 10);
	_putchar('0' + (n % 10));
	len++;

	return (len);
}

