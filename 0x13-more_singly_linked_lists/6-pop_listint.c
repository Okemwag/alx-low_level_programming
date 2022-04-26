#include "lists.h"
/**
* pop_listint - delete element in the head and return n data
* @head: linked list
* Return: @n of pop element
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp = NULL;

	if (!head || !*head)
		return (0);

	tmp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = tmp;
	return (data);
}
