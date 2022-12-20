#include "lists.h"
/**
 * dlistint_len - count list elements
 * @h: head of list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_cnt = 0;

	while (h)
	{
		node_cnt++;
		h = h->next;
	}
	return (node_cnt);
}
