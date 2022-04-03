#include <stdio.h>
#include <stlib.h>
/**
* main - A program that  multiplies two numbers
* @argc: The arguement' counter
* @argv: The arguements' values
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int n, ex;

	ex = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		ex = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (ex);
}
