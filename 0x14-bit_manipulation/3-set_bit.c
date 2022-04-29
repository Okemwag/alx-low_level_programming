#include "main.h"

/**
* set_bit - Sets a bit at a given index to 1.
* @n: Pointer to the number to change.
* @index: Index of the bit to set to 1.
* Return: 1 for success otherwise -1.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}
