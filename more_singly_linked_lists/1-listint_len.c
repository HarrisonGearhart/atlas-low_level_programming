#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - returns the number of elements in the linked list
 * @h: pointer to the struct
 * Return: number of elements in linked list
*/
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
