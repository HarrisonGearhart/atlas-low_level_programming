#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: pointer to head of list
 * Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int node_count = 0;

	if (h == NULL)
		return (node_count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%i\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
