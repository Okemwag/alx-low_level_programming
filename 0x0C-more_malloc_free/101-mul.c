#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints all arguements received
* @argc: type int argument
* @argv: type char arguement of string
* Return: if not receive 2 arg, error
*/
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
