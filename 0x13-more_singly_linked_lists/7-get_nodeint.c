#include "lists.h"
/**
* get_nodeint_at_index - find node by index
* @head: Linked list
* @index: index of the node to be found
* Return: listint_t node with this index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (i != index && head)
		{
			head = head->next;
			i++;
		}
		return (head);
	}
	return (NULL);
}
