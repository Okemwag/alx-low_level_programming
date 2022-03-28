#include "main.h"
/**
* *_memset - fills memory with a constant byte
* @s: original string
* @b: value to replace
* @n: number of bytes
* Return: s (string modify)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
