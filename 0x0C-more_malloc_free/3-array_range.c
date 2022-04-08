#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: min number
* @max: max number
* Return: int
*/
int *array_range(int min, int max)
{
	int length = (max - min) + 1, *array, i = 0;

	if (min > max)
		return (NULL);
	array = malloc(length * sizeof(*array));
	if (!array)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		*(array + i) = min;
	return (array);
}
