#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in the linked list
 * @h: head of linked list
 * Return: number of elements in linked list (count)
*/
size_t list_len(const list_t *h)
{
	unsigned int = 0;

	while (h != NULL)
	{
		h = h->next;
		count++
	}
	return (count);
}