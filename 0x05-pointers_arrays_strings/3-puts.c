#include "main.h"

/**
* _puts - function that prints a string, followed by a new line.
* @str: input string
* Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		-putchar(str[i]);
	}
	_putchar('\n');
}
