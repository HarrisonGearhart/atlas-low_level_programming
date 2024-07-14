#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of the list
 * @head: head of list
 * @index: position of the node
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
