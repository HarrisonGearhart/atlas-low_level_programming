#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints the elements of a linked list
 * @h: head of the linked list
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
