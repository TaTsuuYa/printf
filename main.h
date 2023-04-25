#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* _putchar */
int _putchar(char c);

/* _puts */
int _puts(char *str);

/* _putnbr */
int _putnbr(int nb);

/* _printf */
void handle_format(const char *format, va_list args, int *len);
int _printf(const char *format, ...);

#endif /* ifndef MAIN_H */

