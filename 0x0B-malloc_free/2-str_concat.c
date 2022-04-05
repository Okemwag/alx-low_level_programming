#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenate two strings and return new string
* @s1: first string
* @s2: second string
* Return: pointer to char concatenated
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, len1 = 0, len2 = 0, size = 0;

	if (!s1 && !s2)
		return (malloc(sizeof(char)));

	if (s1)
	{
		for (; s1[len1]; len1++)
		{
		}
	}

	if (s2)
	{
		for (; s2[len2]; len2++)
		{
		}
	}
	size = len1 + len2;

	str = malloc(sizeof(char) * size + 1);

	if (!str)
		return (NULL);

	for (; i < size; i++)
	{
		if (i < len1)
			str[i] = s1[i];
		else
		{
			str[i] = s2[j];
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}
