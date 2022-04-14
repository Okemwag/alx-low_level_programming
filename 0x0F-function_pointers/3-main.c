#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - calculator
* @argc: arguments counter
* @argv: arguments values
* Return: Success
*/
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;
	int (*operate_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operate_func = get_op_func(argv[2]);
	if (!operate_func)
	{
		printf("Error\n");
		exit(99);
	}

	result = operate_func(num1, num2);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
