#include "main.h"

/**
* swap_int - swaps ints
* @a: int to check
* @b: int to check again
* Return: void
*/
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
