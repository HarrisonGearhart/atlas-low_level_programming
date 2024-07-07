#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints all elements in the singly linked lsit
 * @h: pointer to struct
 * Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}