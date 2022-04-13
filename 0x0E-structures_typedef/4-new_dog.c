#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - Function that creates a new dog.
* @name: type pointer char name.
* @age: type pointer float age
* @owner: type pointer char owner
* Return: 0.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_doggo;
	char *i, *j;
	int x, y, z;

	new_doggo = malloc(sizeof(struct dog));
	if (new_doggo == NULL)
		return (NULL);

	for (x = 0; *(name + x) != '\0'; x++)
		;
	for (y = 0; *(owner + y) != '\0'; y++)
		;
	i = malloc(sizeof(char) * x + 1);
	if (i == NULL)
	{
		free(new_doggo);
		return (NULL);
	}
	j = malloc(sizeof(char) * y + 1);
	if (j == NULL)
	{
		free(i);
		free(new_doggo);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		*(i + z) = *(name + z);
	for (z = 0; z <= y; z++)
		*(j + z) = *(owner + z);

	new_doggo->name = i;
	new_doggo->age = age;
	new_doggo->owner = j;

	return (new_doggo);
}
