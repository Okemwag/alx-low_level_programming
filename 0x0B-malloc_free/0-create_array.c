#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create new array and fill with c char
* @size: size of the array
* @c: char to fill array
* Return: pointer to array filled
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (!size)
		return (NULL);
	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
