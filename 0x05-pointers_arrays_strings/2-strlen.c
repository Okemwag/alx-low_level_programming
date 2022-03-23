#include "main.h"

/**
* _strlen - function
* @s: char to check
* Return: i
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
