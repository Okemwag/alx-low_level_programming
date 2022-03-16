include "main.h"
#include <stdio.h>

/**
* _abs - computes the absolute value of an integer
* @n: the int to check
* Return: the absolute value of int
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
		}
	else
		return (c * -1);
}
