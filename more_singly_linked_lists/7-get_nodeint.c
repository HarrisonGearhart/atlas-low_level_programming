#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns nth node of the singly linked list
 * @head: head of list
 * @index: nth node
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;

	while (head != NULL)
	{
		if (nth = index)
			return (head);
		head = head->next;
		nth++;
	}
	return (NULL);
}
