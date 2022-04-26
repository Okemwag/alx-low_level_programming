#include "lists.h"
/**
* sum_listint - Sum the data (n) in list
* @head: Pointer 2 the list head.
* Description: This function sum of all the data (n) of a linked list
* Return: Sum of data otherwise 0.
*/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
