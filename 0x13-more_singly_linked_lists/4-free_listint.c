#include "lists.h"
/**
* free_listint - Free listint_t.
* @head: data type pointer the head/next node
* Return: 0 elements all free
*/
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
