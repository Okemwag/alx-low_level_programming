#include "main.h"
#include <stdio.h>
/**
* main - a program that prints its name, followed by a new line
* @argc: arguement count
* @argv: arguement value, a string that come after calling function
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
