#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* MACROS */
#define BUFFER_SIZE 1024

/* _putchar */
int _putchar(char c);

/* _puts */
int _puts(char *str);

/* _putnbr */
int _putnbr(int nb);

/* _putb */
int _putb(unsigned int nb);

/* puto */
int _puto(unsigned int nb);

/* putu */
int _putu(unsigned int nb);

/* puthex */
int _puthex(unsigned int nb, char c);

/* _printf */
void handle_format(const char *format, va_list args, int *len);
int _printf(const char *format, ...);

#endif /* ifndef MAIN_H */

