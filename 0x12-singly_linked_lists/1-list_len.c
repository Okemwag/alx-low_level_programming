#include "lists.h"
#include <string.h>

/**
* list_len - function that prints all the elements of a list_t list
* @h: pointer to the struct list_t
* Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;


	while(h != NULL)
	{
		h = h_->next;
		counter++;
	}
	return (counter);
}
