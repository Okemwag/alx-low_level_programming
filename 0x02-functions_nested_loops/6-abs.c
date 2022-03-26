#include "main.h"

/**
* _abs - function that computes the absolute value of an integer
* @c: is the int that will use for the argument of the function
*Return: Always 0.
*/

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
