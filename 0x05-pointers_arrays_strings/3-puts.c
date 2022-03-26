#include "main.h"

/**
* _puts - function that prints a string, followed by a new line.
* @str: input string
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n);
}
