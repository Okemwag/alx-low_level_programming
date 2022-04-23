#include "lists.h"
/**
* free_list - main function
* @head: The pointer address to header node
* Description: This function frees a list_t list.
* Return: Nothing.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);

}
