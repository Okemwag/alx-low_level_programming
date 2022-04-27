#include "lists.h"
/**
* delete_nodeint_at_index - Deletes node at given index.
* @head: Address of pointer 2 first node.
* @index: Index of node to delete.
* Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	while (new != NULL && i < (index - 1))
	{
		new = new->next;
		i++;
	}
	if (new == NULL || new->next == NULL)
		return (-1);

	temp = new->next;
	new->next = temp->next;

	free(temp);

	return (1);
}
