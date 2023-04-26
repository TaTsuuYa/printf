# \_printf function

The `_printf` function is a custom implementation of the `printf` function in **C**. It takes a string as the first argument, which contains directives that specify the format of the output. It can handle the following conversion specifiers: **c**, **s**, **%,** **d**, **i**, and **b**.

## Prototype

```c
int _printf(const char *format, ...);
```

## Return Value

The \_printf function returns the number of characters printed, excluding the null byte used to end output to strings.

## Output

The output is written to the standard output stream (**stdout**).

## Format String Directives

The format string passed to \_printf can contain zero or more directives. The following directives are supported:

- **%c**: prints a single character
- **%s**: prints a string
- **%%**: prints a literal % character
- **%d**: prints a decimal integer
- **%i**: prints an integer in base 10
- **%b**: prints an unsigned integer in binary

## Limitations

The custom implementation of `_printf` function does not handle the following:

- Buffer handling of the C library printf function
- Flag characters
- Field width
- Precision
- Length modifiers

## Example Usage

```c
#include "main.h"

int main(void)
{
	char c = 'A'
	char *str = "Hello, World!";
	int integer = 123;
	unsigned int bin = 123;

	_printf("This is a character: %c\n", c); /* prints "This is a character: A" */
	_printf("This is a string: %s\n", str); /* prints "This is a string: Hello, World" */
	_printf("%%\n"); /* prints "%" */
	_printf("This is a decimal integer: %d\n", integer); /* prints "This is a decimal integer: 123" */
	_printf("This is an integer in base 10: %i\n", integer); /* prints "This is an integer in base 10: 123" */
	_printf("This is an unsigned integer in binary: %b\n", bin); /* prints "This is an unsigned integer in binary: 1111011" */
	return (0);
}
```

