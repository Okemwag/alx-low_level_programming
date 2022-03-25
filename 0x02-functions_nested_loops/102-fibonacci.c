#include <stdio.h>

/**
* main - finds and prints the first 50 Fibonacci numbers
* followed by a new line
* Return: 0
*/
int main(void)
{
	long int i, j, k, next;

	j = i;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld \n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
