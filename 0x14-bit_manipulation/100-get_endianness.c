#include "main.h"

/**
* get_endianness - function checks the endianness.
* Description: Endianness means that the bytes in computer memory
* are read in a certain order
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
