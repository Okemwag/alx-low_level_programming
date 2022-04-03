#include "main.h"
#include <stdio.h>
/**
* main - A program that prints the number of arguements you passed into it
* @argv: An arguement values
* @argc: counter of arguements
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
} 
