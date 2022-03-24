#include "main.h"

/**
* _strcat - appends src to the dest string
* @author:Okemwag
* @dest: The destination string
* @src: The source string
*
*Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + 1))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
