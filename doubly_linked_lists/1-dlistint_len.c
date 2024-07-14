#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to head of list
 * Return: Number of elements 
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int node_count = 0;

	while (h!= NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
