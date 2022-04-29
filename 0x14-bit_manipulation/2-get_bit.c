#include "main.h"

/**
* get_bit - Get the bit of a given index.
* @n: Number 2 evaluate.
* @index: Position of the bit.
* Return: Value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
