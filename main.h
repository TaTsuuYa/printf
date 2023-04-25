#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* _putchar */
int _putchar(char c);

/* _printf */
int _printf(const char *format, ...);
int handle_format(char f, va_list *args);
int handle_int(int n);

#endif /* ifndef MAIN_H */

